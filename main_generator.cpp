#include <cpr/cpr.h>
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

struct type{
    std::string name;
    std::string description;
    std::vector<std::string> parameter;
    std::vector<std::string> name_type;
};

struct types_telegram{
    std::vector<type> names;
};

int main(int argc, char** argv) {
    cpr::Response r = cpr::Get(cpr::Url{"https://core.telegram.org/bots/api"});
    auto text=r.text;
    auto types=text.substr(text.find("Available types"),text.size()-text.find("Available types"));
    types_telegram typeTelegram;
    while(types.find("<i class=\"anchor-icon\"></i></a>")!=std::string::npos) {
        type line;
        std::string find_name = "<i class=\"anchor-icon\"></i></a>";
        std::string name = types.substr(types.find("<i class=\"anchor-icon\"></i></a>") + find_name.size(), 100);
        std::string description=types.substr(types.find("<p>",types.find("<i class=\"anchor-icon\"></i></a>"))+3, types.find("</p>",types.find("<i class=\"anchor-icon\"></i></a>"))-types.find("<p>",types.find("<i class=\"anchor-icon\"></i></a>"))-3);
        name = name.substr(0, name.find("<"));
        line.description=description;
        if(description.find("Currently holds no information")==std::string::npos && (description.find("This object")!=std::string::npos || description.find("Represents")!=std::string::npos || description.find("Describes")!=std::string::npos)) {
            line.name = name;
            std::string tbody = types.substr(types.find("<tbody>",types.find("<i class=\"anchor-icon\"></i></a>")), types.find("</tbody>",types.find("<i class=\"anchor-icon\"></i></a>")) - types.find("<tbody>",types.find("<i class=\"anchor-icon\"></i></a>")));
            while (tbody.find("<tr>") != std::string::npos) {
                std::string tr = tbody.substr(tbody.find("<tr>"), tbody.find("</tr>") - tbody.find("<tr>"));
                std::string param = tr.substr(tr.find("<td>") + 4, tr.find("</td>") - tr.find("<td>") - 4);
                line.parameter.push_back(param);
                tr.erase(tr.find("<td>"), 1);
                tr.erase(tr.find("</td>"), 1);
                std::string typ = tr.substr(tr.find("<td>") + 4, tr.find("</td>") - tr.find("<td>") - 4);
                line.name_type.push_back(typ);
                tbody.erase(tbody.find("<tr>"), 1);
                tbody.erase(tbody.find("</tr>"), 1);
            }
            typeTelegram.names.push_back(line);
        }
        types.erase(types.find("<i class=\"anchor-icon\"></i></a>"),1);
    }
    std::string out="";
    out=out+"#include <string>\n\n";
    for(const auto& nm : typeTelegram.names){
        out=out+"//"+nm.description+"\n";
        out=out+"struct "+nm.name+"{\n";
        for(const auto& pa: nm.parameter){
            out=out + "\tstd::string "+pa+";\n";
        }
        out=out+"};\n\n";
    }
    std::fstream outs{"../types_generator.cpp",std::fstream::out};
    outs<<out;
    outs.close();
    return 0;
}