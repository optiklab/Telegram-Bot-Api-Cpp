#include <string>

//This object represents a Telegram user or bot.
struct User{
	std::string id;
	std::string is_bot;
	std::string first_name;
	std::string last_name;
	std::string username;
	std::string language_code;
	std::string is_premium;
	std::string added_to_attachment_menu;
	std::string can_join_groups;
	std::string can_read_all_group_messages;
	std::string supports_inline_queries;
};

//This object represents a chat.
struct Chat{
	std::string id;
	std::string type;
	std::string title;
	std::string username;
	std::string first_name;
	std::string last_name;
	std::string is_forum;
	std::string photo;
	std::string active_usernames;
	std::string emoji_status_custom_emoji_id;
	std::string bio;
	std::string has_private_forwards;
	std::string has_restricted_voice_and_video_messages;
	std::string join_to_send_messages;
	std::string join_by_request;
	std::string description;
	std::string invite_link;
	std::string pinned_message;
	std::string permissions;
	std::string slow_mode_delay;
	std::string message_auto_delete_time;
	std::string has_aggressive_anti_spam_enabled;
	std::string has_hidden_members;
	std::string has_protected_content;
	std::string sticker_set_name;
	std::string can_set_sticker_set;
	std::string linked_chat_id;
	std::string location;
};

//This object represents a message.
struct Message{
	std::string message_id;
	std::string message_thread_id;
	std::string from;
	std::string sender_chat;
	std::string date;
	std::string chat;
	std::string forward_from;
	std::string forward_from_chat;
	std::string forward_from_message_id;
	std::string forward_signature;
	std::string forward_sender_name;
	std::string forward_date;
	std::string is_topic_message;
	std::string is_automatic_forward;
	std::string reply_to_message;
	std::string via_bot;
	std::string edit_date;
	std::string has_protected_content;
	std::string media_group_id;
	std::string author_signature;
	std::string text;
	std::string entities;
	std::string animation;
	std::string audio;
	std::string document;
	std::string photo;
	std::string sticker;
	std::string video;
	std::string video_note;
	std::string voice;
	std::string caption;
	std::string caption_entities;
	std::string has_media_spoiler;
	std::string contact;
	std::string dice;
	std::string game;
	std::string poll;
	std::string venue;
	std::string location;
	std::string new_chat_members;
	std::string left_chat_member;
	std::string new_chat_title;
	std::string new_chat_photo;
	std::string delete_chat_photo;
	std::string group_chat_created;
	std::string supergroup_chat_created;
	std::string channel_chat_created;
	std::string message_auto_delete_timer_changed;
	std::string migrate_to_chat_id;
	std::string migrate_from_chat_id;
	std::string pinned_message;
	std::string invoice;
	std::string successful_payment;
	std::string user_shared;
	std::string chat_shared;
	std::string connected_website;
	std::string write_access_allowed;
	std::string passport_data;
	std::string proximity_alert_triggered;
	std::string forum_topic_created;
	std::string forum_topic_edited;
	std::string forum_topic_closed;
	std::string forum_topic_reopened;
	std::string general_forum_topic_hidden;
	std::string general_forum_topic_unhidden;
	std::string video_chat_scheduled;
	std::string video_chat_started;
	std::string video_chat_ended;
	std::string video_chat_participants_invited;
	std::string web_app_data;
	std::string reply_markup;
};

//This object represents a unique message identifier.
struct MessageId{
	std::string message_id;
};

//This object represents one special entity in a text message. For example, hashtags, usernames, URLs, etc.
struct MessageEntity{
	std::string type;
	std::string offset;
	std::string length;
	std::string url;
	std::string user;
	std::string language;
	std::string custom_emoji_id;
};

//This object represents one size of a photo or a <a href="#document">file</a> / <a href="#sticker">sticker</a> thumbnail.
struct PhotoSize{
	std::string file_id;
	std::string file_unique_id;
	std::string width;
	std::string height;
	std::string file_size;
};

//This object represents an animation file (GIF or H.264/MPEG-4 AVC video without sound).
struct Animation{
	std::string file_id;
	std::string file_unique_id;
	std::string width;
	std::string height;
	std::string duration;
	std::string thumb;
	std::string file_name;
	std::string mime_type;
	std::string file_size;
};

//This object represents an audio file to be treated as music by the Telegram clients.
struct Audio{
	std::string file_id;
	std::string file_unique_id;
	std::string duration;
	std::string performer;
	std::string title;
	std::string file_name;
	std::string mime_type;
	std::string file_size;
	std::string thumb;
};

//This object represents a general file (as opposed to <a href="#photosize">photos</a>, <a href="#voice">voice messages</a> and <a href="#audio">audio files</a>).
struct Document{
	std::string file_id;
	std::string file_unique_id;
	std::string thumb;
	std::string file_name;
	std::string mime_type;
	std::string file_size;
};

//This object represents a video file.
struct Video{
	std::string file_id;
	std::string file_unique_id;
	std::string width;
	std::string height;
	std::string duration;
	std::string thumb;
	std::string file_name;
	std::string mime_type;
	std::string file_size;
};

//This object represents a <a href="https://telegram.org/blog/video-messages-and-telescope">video message</a> (available in Telegram apps as of <a href="https://telegram.org/blog/video-messages-and-telescope">v.4.0</a>).
struct VideoNote{
	std::string file_id;
	std::string file_unique_id;
	std::string length;
	std::string duration;
	std::string thumb;
	std::string file_size;
};

//This object represents a voice note.
struct Voice{
	std::string file_id;
	std::string file_unique_id;
	std::string duration;
	std::string mime_type;
	std::string file_size;
};

//This object represents a phone contact.
struct Contact{
	std::string phone_number;
	std::string first_name;
	std::string last_name;
	std::string user_id;
	std::string vcard;
};

//This object represents an animated emoji that displays a random value.
struct Dice{
	std::string emoji;
	std::string value;
};

//This object contains information about one answer option in a poll.
struct PollOption{
	std::string text;
	std::string voter_count;
};

//This object represents an answer of a user in a non-anonymous poll.
struct PollAnswer{
	std::string poll_id;
	std::string user;
	std::string option_ids;
};

//This object contains information about a poll.
struct Poll{
	std::string id;
	std::string question;
	std::string options;
	std::string total_voter_count;
	std::string is_closed;
	std::string is_anonymous;
	std::string type;
	std::string allows_multiple_answers;
	std::string correct_option_id;
	std::string explanation;
	std::string explanation_entities;
	std::string open_period;
	std::string close_date;
};

//This object represents a point on the map.
struct Location{
	std::string longitude;
	std::string latitude;
	std::string horizontal_accuracy;
	std::string live_period;
	std::string heading;
	std::string proximity_alert_radius;
};

//This object represents a venue.
struct Venue{
	std::string location;
	std::string title;
	std::string address;
	std::string foursquare_id;
	std::string foursquare_type;
	std::string google_place_id;
	std::string google_place_type;
};

//Describes data sent from a <a href="/bots/webapps">Web App</a> to the bot.
struct WebAppData{
	std::string data;
	std::string button_text;
};

//This object represents the content of a service message, sent whenever a user in the chat triggers a proximity alert set by another user.
struct ProximityAlertTriggered{
	std::string traveler;
	std::string watcher;
	std::string distance;
};

//This object represents a service message about a change in auto-delete timer settings.
struct MessageAutoDeleteTimerChanged{
	std::string message_auto_delete_time;
};

//This object represents a service message about a new forum topic created in the chat.
struct ForumTopicCreated{
	std::string name;
	std::string icon_color;
	std::string icon_custom_emoji_id;
};

//This object represents a service message about an edited forum topic.
struct ForumTopicEdited{
	std::string name;
	std::string icon_custom_emoji_id;
};

//This object contains information about the user whose identifier was shared with the bot using a <a href="#keyboardbuttonrequestuser">KeyboardButtonRequestUser</a> button.
struct UserShared{
	std::string request_id;
	std::string user_id;
};

//This object contains information about the chat whose identifier was shared with the bot using a <a href="#keyboardbuttonrequestchat">KeyboardButtonRequestChat</a> button.
struct ChatShared{
	std::string request_id;
	std::string chat_id;
};

//This object represents a service message about a video chat scheduled in the chat.
struct VideoChatScheduled{
	std::string start_date;
};

//This object represents a service message about a video chat ended in the chat.
struct VideoChatEnded{
	std::string duration;
};

//This object represents a service message about new members invited to a video chat.
struct VideoChatParticipantsInvited{
	std::string users;
};

//This object represent a user&#39;s profile pictures.
struct UserProfilePhotos{
	std::string total_count;
	std::string photos;
};

//This object represents a file ready to be downloaded. The file can be downloaded via the link <code>https://api.telegram.org/file/bot&lt;token&gt;/&lt;file_path&gt;</code>. It is guaranteed that the link will be valid for at least 1 hour. When the link expires, a new one can be requested by calling <a href="#getfile">getFile</a>.
struct File{
	std::string file_id;
	std::string file_unique_id;
	std::string file_size;
	std::string file_path;
};

//Describes a <a href="/bots/webapps">Web App</a>.
struct WebAppInfo{
	std::string url;
};

//This object represents a <a href="/bots/features#keyboards">custom keyboard</a> with reply options (see <a href="/bots/features#keyboards">Introduction to bots</a> for details and examples).
struct ReplyKeyboardMarkup{
	std::string keyboard;
	std::string is_persistent;
	std::string resize_keyboard;
	std::string one_time_keyboard;
	std::string input_field_placeholder;
	std::string selective;
};

//This object represents one button of the reply keyboard. For simple text buttons, <em>String</em> can be used instead of this object to specify the button text. The optional fields <em>web_app</em>, <em>request_user</em>, <em>request_chat</em>, <em>request_contact</em>, <em>request_location</em>, and <em>request_poll</em> are mutually exclusive.
struct KeyboardButton{
	std::string text;
	std::string request_user;
	std::string request_chat;
	std::string request_contact;
	std::string request_location;
	std::string request_poll;
	std::string web_app;
};

//This object defines the criteria used to request a suitable user. The identifier of the selected user will be shared with the bot when the corresponding button is pressed.
struct KeyboardButtonRequestUser{
	std::string request_id;
	std::string user_is_bot;
	std::string user_is_premium;
};

//This object defines the criteria used to request a suitable chat. The identifier of the selected chat will be shared with the bot when the corresponding button is pressed.
struct KeyboardButtonRequestChat{
	std::string request_id;
	std::string chat_is_channel;
	std::string chat_is_forum;
	std::string chat_has_username;
	std::string chat_is_created;
	std::string user_administrator_rights;
	std::string bot_administrator_rights;
	std::string bot_is_member;
};

//This object represents type of a poll, which is allowed to be created and sent when the corresponding button is pressed.
struct KeyboardButtonPollType{
	std::string type;
};

//This object represents an <a href="/bots/features#inline-keyboards">inline keyboard</a> that appears right next to the message it belongs to.
struct InlineKeyboardMarkup{
	std::string inline_keyboard;
};

//This object represents one button of an inline keyboard. You <strong>must</strong> use exactly one of the optional fields.
struct InlineKeyboardButton{
	std::string text;
	std::string url;
	std::string callback_data;
	std::string web_app;
	std::string login_url;
	std::string switch_inline_query;
	std::string switch_inline_query_current_chat;
	std::string callback_game;
	std::string pay;
};

//This object represents a parameter of the inline keyboard button used to automatically authorize a user. Serves as a great replacement for the <a href="/widgets/login">Telegram Login Widget</a> when the user is coming from Telegram. All the user needs to do is tap/click a button and confirm that they want to log in:
struct LoginUrl{
	std::string url;
	std::string forward_text;
	std::string bot_username;
	std::string request_write_access;
};

//This object represents an incoming callback query from a callback button in an <a href="/bots/features#inline-keyboards">inline keyboard</a>. If the button that originated the query was attached to a message sent by the bot, the field <em>message</em> will be present. If the button was attached to a message sent via the bot (in <a href="#inline-mode">inline mode</a>), the field <em>inline_message_id</em> will be present. Exactly one of the fields <em>data</em> or <em>game_short_name</em> will be present.
struct CallbackQuery{
	std::string id;
	std::string from;
	std::string message;
	std::string inline_message_id;
	std::string chat_instance;
	std::string data;
	std::string game_short_name;
};

//This object represents a chat photo.
struct ChatPhoto{
	std::string small_file_id;
	std::string small_file_unique_id;
	std::string big_file_id;
	std::string big_file_unique_id;
};

//Represents an invite link for a chat.
struct ChatInviteLink{
	std::string invite_link;
	std::string creator;
	std::string creates_join_request;
	std::string is_primary;
	std::string is_revoked;
	std::string name;
	std::string expire_date;
	std::string member_limit;
	std::string pending_join_request_count;
};

//Represents the rights of an administrator in a chat.
struct ChatAdministratorRights{
	std::string is_anonymous;
	std::string can_manage_chat;
	std::string can_delete_messages;
	std::string can_manage_video_chats;
	std::string can_restrict_members;
	std::string can_promote_members;
	std::string can_change_info;
	std::string can_invite_users;
	std::string can_post_messages;
	std::string can_edit_messages;
	std::string can_pin_messages;
	std::string can_manage_topics;
};

//This object contains information about one member of a chat. Currently, the following 6 types of chat members are supported:
struct ChatMember{
	std::string status;
	std::string user;
	std::string is_anonymous;
	std::string custom_title;
};

//Represents a <a href="#chatmember">chat member</a> that owns the chat and has all administrator privileges.
struct ChatMemberOwner{
	std::string status;
	std::string user;
	std::string is_anonymous;
	std::string custom_title;
};

//Represents a <a href="#chatmember">chat member</a> that has some additional privileges.
struct ChatMemberAdministrator{
	std::string status;
	std::string user;
	std::string can_be_edited;
	std::string is_anonymous;
	std::string can_manage_chat;
	std::string can_delete_messages;
	std::string can_manage_video_chats;
	std::string can_restrict_members;
	std::string can_promote_members;
	std::string can_change_info;
	std::string can_invite_users;
	std::string can_post_messages;
	std::string can_edit_messages;
	std::string can_pin_messages;
	std::string can_manage_topics;
	std::string custom_title;
};

//Represents a <a href="#chatmember">chat member</a> that has no additional privileges or restrictions.
struct ChatMemberMember{
	std::string status;
	std::string user;
};

//Represents a <a href="#chatmember">chat member</a> that is under certain restrictions in the chat. Supergroups only.
struct ChatMemberRestricted{
	std::string status;
	std::string user;
	std::string is_member;
	std::string can_send_messages;
	std::string can_send_audios;
	std::string can_send_documents;
	std::string can_send_photos;
	std::string can_send_videos;
	std::string can_send_video_notes;
	std::string can_send_voice_notes;
	std::string can_send_polls;
	std::string can_send_other_messages;
	std::string can_add_web_page_previews;
	std::string can_change_info;
	std::string can_invite_users;
	std::string can_pin_messages;
	std::string can_manage_topics;
	std::string until_date;
};

//Represents a <a href="#chatmember">chat member</a> that isn&#39;t currently a member of the chat, but may join it themselves.
struct ChatMemberLeft{
	std::string status;
	std::string user;
};

//Represents a <a href="#chatmember">chat member</a> that was banned in the chat and can&#39;t return to the chat or view chat messages.
struct ChatMemberBanned{
	std::string status;
	std::string user;
	std::string until_date;
};

//This object represents changes in the status of a chat member.
struct ChatMemberUpdated{
	std::string chat;
	std::string from;
	std::string date;
	std::string old_chat_member;
	std::string new_chat_member;
	std::string invite_link;
};

//Represents a join request sent to a chat.
struct ChatJoinRequest{
	std::string chat;
	std::string from;
	std::string user_chat_id;
	std::string date;
	std::string bio;
	std::string invite_link;
};

//Describes actions that a non-administrator user is allowed to take in a chat.
struct ChatPermissions{
	std::string can_send_messages;
	std::string can_send_audios;
	std::string can_send_documents;
	std::string can_send_photos;
	std::string can_send_videos;
	std::string can_send_video_notes;
	std::string can_send_voice_notes;
	std::string can_send_polls;
	std::string can_send_other_messages;
	std::string can_add_web_page_previews;
	std::string can_change_info;
	std::string can_invite_users;
	std::string can_pin_messages;
	std::string can_manage_topics;
};

//Represents a location to which a chat is connected.
struct ChatLocation{
	std::string location;
	std::string address;
};

//This object represents a forum topic.
struct ForumTopic{
	std::string message_thread_id;
	std::string name;
	std::string icon_color;
	std::string icon_custom_emoji_id;
};

//This object represents a bot command.
struct BotCommand{
	std::string command;
	std::string description;
};

//This object represents the scope to which bot commands are applied. Currently, the following 7 scopes are supported:
struct BotCommandScope{
	std::string type;
};

//Represents the default <a href="#botcommandscope">scope</a> of bot commands. Default commands are used if no commands with a <a href="#determining-list-of-commands">narrower scope</a> are specified for the user.
struct BotCommandScopeDefault{
	std::string type;
};

//Represents the <a href="#botcommandscope">scope</a> of bot commands, covering all private chats.
struct BotCommandScopeAllPrivateChats{
	std::string type;
};

//Represents the <a href="#botcommandscope">scope</a> of bot commands, covering all group and supergroup chats.
struct BotCommandScopeAllGroupChats{
	std::string type;
};

//Represents the <a href="#botcommandscope">scope</a> of bot commands, covering all group and supergroup chat administrators.
struct BotCommandScopeAllChatAdministrators{
	std::string type;
};

//Represents the <a href="#botcommandscope">scope</a> of bot commands, covering a specific chat.
struct BotCommandScopeChat{
	std::string type;
	std::string chat_id;
};

//Represents the <a href="#botcommandscope">scope</a> of bot commands, covering all administrators of a specific group or supergroup chat.
struct BotCommandScopeChatAdministrators{
	std::string type;
	std::string chat_id;
};

//Represents the <a href="#botcommandscope">scope</a> of bot commands, covering a specific member of a group or supergroup chat.
struct BotCommandScopeChatMember{
	std::string type;
	std::string chat_id;
	std::string user_id;
};

//This object describes the bot&#39;s menu button in a private chat. It should be one of
struct MenuButton{
	std::string type;
};

//Represents a menu button, which opens the bot&#39;s list of commands.
struct MenuButtonCommands{
	std::string type;
};

//Represents a menu button, which launches a <a href="/bots/webapps">Web App</a>.
struct MenuButtonWebApp{
	std::string type;
	std::string text;
	std::string web_app;
};

//Describes that no specific value for the menu button was set.
struct MenuButtonDefault{
	std::string type;
};

//Describes why a request was unsuccessful.
struct ResponseParameters{
	std::string migrate_to_chat_id;
	std::string retry_after;
};

//This object represents the content of a media message to be sent. It should be one of
struct InputMedia{
	std::string type;
	std::string media;
	std::string caption;
	std::string parse_mode;
	std::string caption_entities;
	std::string has_spoiler;
};

//Represents a photo to be sent.
struct InputMediaPhoto{
	std::string type;
	std::string media;
	std::string caption;
	std::string parse_mode;
	std::string caption_entities;
	std::string has_spoiler;
};

//Represents a video to be sent.
struct InputMediaVideo{
	std::string type;
	std::string media;
	std::string thumb;
	std::string caption;
	std::string parse_mode;
	std::string caption_entities;
	std::string width;
	std::string height;
	std::string duration;
	std::string supports_streaming;
	std::string has_spoiler;
};

//Represents an animation file (GIF or H.264/MPEG-4 AVC video without sound) to be sent.
struct InputMediaAnimation{
	std::string type;
	std::string media;
	std::string thumb;
	std::string caption;
	std::string parse_mode;
	std::string caption_entities;
	std::string width;
	std::string height;
	std::string duration;
	std::string has_spoiler;
};

//Represents an audio file to be treated as music to be sent.
struct InputMediaAudio{
	std::string type;
	std::string media;
	std::string thumb;
	std::string caption;
	std::string parse_mode;
	std::string caption_entities;
	std::string duration;
	std::string performer;
	std::string title;
};

//Represents a general file to be sent.
struct InputMediaDocument{
	std::string type;
	std::string media;
	std::string thumb;
	std::string caption;
	std::string parse_mode;
	std::string caption_entities;
	std::string disable_content_type_detection;
};

//This object represents the contents of a file to be uploaded. Must be posted using multipart/form-data in the usual way that files are uploaded via the browser.
struct InputFile{
	std::string chat_id;
	std::string message_thread_id;
	std::string text;
	std::string parse_mode;
	std::string entities;
	std::string disable_web_page_preview;
	std::string disable_notification;
	std::string protect_content;
	std::string reply_to_message_id;
	std::string allow_sending_without_reply;
	std::string reply_markup;
};

//This object represents a sticker.
struct Sticker{
	std::string file_id;
	std::string file_unique_id;
	std::string type;
	std::string width;
	std::string height;
	std::string is_animated;
	std::string is_video;
	std::string thumb;
	std::string emoji;
	std::string set_name;
	std::string premium_animation;
	std::string mask_position;
	std::string custom_emoji_id;
	std::string file_size;
};

//This object represents a sticker set.
struct StickerSet{
	std::string name;
	std::string title;
	std::string sticker_type;
	std::string is_animated;
	std::string is_video;
	std::string stickers;
	std::string thumb;
};

//This object describes the position on faces where a mask should be placed by default.
struct MaskPosition{
	std::string point;
	std::string x_shift;
	std::string y_shift;
	std::string scale;
};

//This object represents an incoming inline query. When the user sends an empty query, your bot could return some default or trending results.
struct InlineQuery{
	std::string id;
	std::string from;
	std::string query;
	std::string offset;
	std::string chat_type;
	std::string location;
};

//This object represents one result of an inline query. Telegram clients currently support results of the following 20 types:
struct InlineQueryResult{
	std::string type;
	std::string id;
	std::string title;
	std::string input_message_content;
	std::string reply_markup;
	std::string url;
	std::string hide_url;
	std::string description;
	std::string thumb_url;
	std::string thumb_width;
	std::string thumb_height;
};

//Represents a link to an article or web page.
struct InlineQueryResultArticle{
	std::string type;
	std::string id;
	std::string title;
	std::string input_message_content;
	std::string reply_markup;
	std::string url;
	std::string hide_url;
	std::string description;
	std::string thumb_url;
	std::string thumb_width;
	std::string thumb_height;
};

//Represents a link to a photo. By default, this photo will be sent by the user with optional caption. Alternatively, you can use <em>input_message_content</em> to send a message with the specified content instead of the photo.
struct InlineQueryResultPhoto{
	std::string type;
	std::string id;
	std::string photo_url;
	std::string thumb_url;
	std::string photo_width;
	std::string photo_height;
	std::string title;
	std::string description;
	std::string caption;
	std::string parse_mode;
	std::string caption_entities;
	std::string reply_markup;
	std::string input_message_content;
};

//Represents a link to an animated GIF file. By default, this animated GIF file will be sent by the user with optional caption. Alternatively, you can use <em>input_message_content</em> to send a message with the specified content instead of the animation.
struct InlineQueryResultGif{
	std::string type;
	std::string id;
	std::string gif_url;
	std::string gif_width;
	std::string gif_height;
	std::string gif_duration;
	std::string thumb_url;
	std::string thumb_mime_type;
	std::string title;
	std::string caption;
	std::string parse_mode;
	std::string caption_entities;
	std::string reply_markup;
	std::string input_message_content;
};

//Represents a link to a video animation (H.264/MPEG-4 AVC video without sound). By default, this animated MPEG-4 file will be sent by the user with optional caption. Alternatively, you can use <em>input_message_content</em> to send a message with the specified content instead of the animation.
struct InlineQueryResultMpeg4Gif{
	std::string type;
	std::string id;
	std::string mpeg4_url;
	std::string mpeg4_width;
	std::string mpeg4_height;
	std::string mpeg4_duration;
	std::string thumb_url;
	std::string thumb_mime_type;
	std::string title;
	std::string caption;
	std::string parse_mode;
	std::string caption_entities;
	std::string reply_markup;
	std::string input_message_content;
};

//Represents a link to a page containing an embedded video player or a video file. By default, this video file will be sent by the user with an optional caption. Alternatively, you can use <em>input_message_content</em> to send a message with the specified content instead of the video.
struct InlineQueryResultVideo{
	std::string type;
	std::string id;
	std::string video_url;
	std::string mime_type;
	std::string thumb_url;
	std::string title;
	std::string caption;
	std::string parse_mode;
	std::string caption_entities;
	std::string video_width;
	std::string video_height;
	std::string video_duration;
	std::string description;
	std::string reply_markup;
	std::string input_message_content;
};

//Represents a link to an MP3 audio file. By default, this audio file will be sent by the user. Alternatively, you can use <em>input_message_content</em> to send a message with the specified content instead of the audio.
struct InlineQueryResultAudio{
	std::string type;
	std::string id;
	std::string audio_url;
	std::string title;
	std::string caption;
	std::string parse_mode;
	std::string caption_entities;
	std::string performer;
	std::string audio_duration;
	std::string reply_markup;
	std::string input_message_content;
};

//Represents a link to a voice recording in an .OGG container encoded with OPUS. By default, this voice recording will be sent by the user. Alternatively, you can use <em>input_message_content</em> to send a message with the specified content instead of the the voice message.
struct InlineQueryResultVoice{
	std::string type;
	std::string id;
	std::string voice_url;
	std::string title;
	std::string caption;
	std::string parse_mode;
	std::string caption_entities;
	std::string voice_duration;
	std::string reply_markup;
	std::string input_message_content;
};

//Represents a link to a file. By default, this file will be sent by the user with an optional caption. Alternatively, you can use <em>input_message_content</em> to send a message with the specified content instead of the file. Currently, only <strong>.PDF</strong> and <strong>.ZIP</strong> files can be sent using this method.
struct InlineQueryResultDocument{
	std::string type;
	std::string id;
	std::string title;
	std::string caption;
	std::string parse_mode;
	std::string caption_entities;
	std::string document_url;
	std::string mime_type;
	std::string description;
	std::string reply_markup;
	std::string input_message_content;
	std::string thumb_url;
	std::string thumb_width;
	std::string thumb_height;
};

//Represents a location on a map. By default, the location will be sent by the user. Alternatively, you can use <em>input_message_content</em> to send a message with the specified content instead of the location.
struct InlineQueryResultLocation{
	std::string type;
	std::string id;
	std::string latitude;
	std::string longitude;
	std::string title;
	std::string horizontal_accuracy;
	std::string live_period;
	std::string heading;
	std::string proximity_alert_radius;
	std::string reply_markup;
	std::string input_message_content;
	std::string thumb_url;
	std::string thumb_width;
	std::string thumb_height;
};

//Represents a venue. By default, the venue will be sent by the user. Alternatively, you can use <em>input_message_content</em> to send a message with the specified content instead of the venue.
struct InlineQueryResultVenue{
	std::string type;
	std::string id;
	std::string latitude;
	std::string longitude;
	std::string title;
	std::string address;
	std::string foursquare_id;
	std::string foursquare_type;
	std::string google_place_id;
	std::string google_place_type;
	std::string reply_markup;
	std::string input_message_content;
	std::string thumb_url;
	std::string thumb_width;
	std::string thumb_height;
};

//Represents a contact with a phone number. By default, this contact will be sent by the user. Alternatively, you can use <em>input_message_content</em> to send a message with the specified content instead of the contact.
struct InlineQueryResultContact{
	std::string type;
	std::string id;
	std::string phone_number;
	std::string first_name;
	std::string last_name;
	std::string vcard;
	std::string reply_markup;
	std::string input_message_content;
	std::string thumb_url;
	std::string thumb_width;
	std::string thumb_height;
};

//Represents a <a href="#games">Game</a>.
struct InlineQueryResultGame{
	std::string type;
	std::string id;
	std::string game_short_name;
	std::string reply_markup;
};

//Represents a link to a photo stored on the Telegram servers. By default, this photo will be sent by the user with an optional caption. Alternatively, you can use <em>input_message_content</em> to send a message with the specified content instead of the photo.
struct InlineQueryResultCachedPhoto{
	std::string type;
	std::string id;
	std::string photo_file_id;
	std::string title;
	std::string description;
	std::string caption;
	std::string parse_mode;
	std::string caption_entities;
	std::string reply_markup;
	std::string input_message_content;
};

//Represents a link to an animated GIF file stored on the Telegram servers. By default, this animated GIF file will be sent by the user with an optional caption. Alternatively, you can use <em>input_message_content</em> to send a message with specified content instead of the animation.
struct InlineQueryResultCachedGif{
	std::string type;
	std::string id;
	std::string gif_file_id;
	std::string title;
	std::string caption;
	std::string parse_mode;
	std::string caption_entities;
	std::string reply_markup;
	std::string input_message_content;
};

//Represents a link to a video animation (H.264/MPEG-4 AVC video without sound) stored on the Telegram servers. By default, this animated MPEG-4 file will be sent by the user with an optional caption. Alternatively, you can use <em>input_message_content</em> to send a message with the specified content instead of the animation.
struct InlineQueryResultCachedMpeg4Gif{
	std::string type;
	std::string id;
	std::string mpeg4_file_id;
	std::string title;
	std::string caption;
	std::string parse_mode;
	std::string caption_entities;
	std::string reply_markup;
	std::string input_message_content;
};

//Represents a link to a sticker stored on the Telegram servers. By default, this sticker will be sent by the user. Alternatively, you can use <em>input_message_content</em> to send a message with the specified content instead of the sticker.
struct InlineQueryResultCachedSticker{
	std::string type;
	std::string id;
	std::string sticker_file_id;
	std::string reply_markup;
	std::string input_message_content;
};

//Represents a link to a file stored on the Telegram servers. By default, this file will be sent by the user with an optional caption. Alternatively, you can use <em>input_message_content</em> to send a message with the specified content instead of the file.
struct InlineQueryResultCachedDocument{
	std::string type;
	std::string id;
	std::string title;
	std::string document_file_id;
	std::string description;
	std::string caption;
	std::string parse_mode;
	std::string caption_entities;
	std::string reply_markup;
	std::string input_message_content;
};

//Represents a link to a video file stored on the Telegram servers. By default, this video file will be sent by the user with an optional caption. Alternatively, you can use <em>input_message_content</em> to send a message with the specified content instead of the video.
struct InlineQueryResultCachedVideo{
	std::string type;
	std::string id;
	std::string video_file_id;
	std::string title;
	std::string description;
	std::string caption;
	std::string parse_mode;
	std::string caption_entities;
	std::string reply_markup;
	std::string input_message_content;
};

//Represents a link to a voice message stored on the Telegram servers. By default, this voice message will be sent by the user. Alternatively, you can use <em>input_message_content</em> to send a message with the specified content instead of the voice message.
struct InlineQueryResultCachedVoice{
	std::string type;
	std::string id;
	std::string voice_file_id;
	std::string title;
	std::string caption;
	std::string parse_mode;
	std::string caption_entities;
	std::string reply_markup;
	std::string input_message_content;
};

//Represents a link to an MP3 audio file stored on the Telegram servers. By default, this audio file will be sent by the user. Alternatively, you can use <em>input_message_content</em> to send a message with the specified content instead of the audio.
struct InlineQueryResultCachedAudio{
	std::string type;
	std::string id;
	std::string audio_file_id;
	std::string caption;
	std::string parse_mode;
	std::string caption_entities;
	std::string reply_markup;
	std::string input_message_content;
};

//This object represents the content of a message to be sent as a result of an inline query. Telegram clients currently support the following 5 types:
struct InputMessageContent{
	std::string message_text;
	std::string parse_mode;
	std::string entities;
	std::string disable_web_page_preview;
};

//Represents the <a href="#inputmessagecontent">content</a> of a text message to be sent as the result of an inline query.
struct InputTextMessageContent{
	std::string message_text;
	std::string parse_mode;
	std::string entities;
	std::string disable_web_page_preview;
};

//Represents the <a href="#inputmessagecontent">content</a> of a location message to be sent as the result of an inline query.
struct InputLocationMessageContent{
	std::string latitude;
	std::string longitude;
	std::string horizontal_accuracy;
	std::string live_period;
	std::string heading;
	std::string proximity_alert_radius;
};

//Represents the <a href="#inputmessagecontent">content</a> of a venue message to be sent as the result of an inline query.
struct InputVenueMessageContent{
	std::string latitude;
	std::string longitude;
	std::string title;
	std::string address;
	std::string foursquare_id;
	std::string foursquare_type;
	std::string google_place_id;
	std::string google_place_type;
};

//Represents the <a href="#inputmessagecontent">content</a> of a contact message to be sent as the result of an inline query.
struct InputContactMessageContent{
	std::string phone_number;
	std::string first_name;
	std::string last_name;
	std::string vcard;
};

//Represents the <a href="#inputmessagecontent">content</a> of an invoice message to be sent as the result of an inline query.
struct InputInvoiceMessageContent{
	std::string title;
	std::string description;
	std::string payload;
	std::string provider_token;
	std::string currency;
	std::string prices;
	std::string max_tip_amount;
	std::string suggested_tip_amounts;
	std::string provider_data;
	std::string photo_url;
	std::string photo_size;
	std::string photo_width;
	std::string photo_height;
	std::string need_name;
	std::string need_phone_number;
	std::string need_email;
	std::string need_shipping_address;
	std::string send_phone_number_to_provider;
	std::string send_email_to_provider;
	std::string is_flexible;
};

//Represents a <a href="#inlinequeryresult">result</a> of an inline query that was chosen by the user and sent to their chat partner.
struct ChosenInlineResult{
	std::string result_id;
	std::string from;
	std::string location;
	std::string inline_message_id;
	std::string query;
};

//Describes an inline message sent by a <a href="/bots/webapps">Web App</a> on behalf of a user.
struct SentWebAppMessage{
	std::string inline_message_id;
};

//This object represents a portion of the price for goods or services.
struct LabeledPrice{
	std::string label;
	std::string amount;
};

//This object contains basic information about an invoice.
struct Invoice{
	std::string title;
	std::string description;
	std::string start_parameter;
	std::string currency;
	std::string total_amount;
};

//This object represents a shipping address.
struct ShippingAddress{
	std::string country_code;
	std::string state;
	std::string city;
	std::string street_line1;
	std::string street_line2;
	std::string post_code;
};

//This object represents information about an order.
struct OrderInfo{
	std::string name;
	std::string phone_number;
	std::string email;
	std::string shipping_address;
};

//This object represents one shipping option.
struct ShippingOption{
	std::string id;
	std::string title;
	std::string prices;
};

//This object contains basic information about a successful payment.
struct SuccessfulPayment{
	std::string currency;
	std::string total_amount;
	std::string invoice_payload;
	std::string shipping_option_id;
	std::string order_info;
	std::string telegram_payment_charge_id;
	std::string provider_payment_charge_id;
};

//This object contains information about an incoming shipping query.
struct ShippingQuery{
	std::string id;
	std::string from;
	std::string invoice_payload;
	std::string shipping_address;
};

//This object contains information about an incoming pre-checkout query.
struct PreCheckoutQuery{
	std::string id;
	std::string from;
	std::string currency;
	std::string total_amount;
	std::string invoice_payload;
	std::string shipping_option_id;
	std::string order_info;
};

//Describes Telegram Passport data shared with the bot by the user.
struct PassportData{
	std::string data;
	std::string credentials;
};

//This object represents a file uploaded to Telegram Passport. Currently all Telegram Passport files are in JPEG format when decrypted and don&#39;t exceed 10MB.
struct PassportFile{
	std::string file_id;
	std::string file_unique_id;
	std::string file_size;
	std::string file_date;
};

//Describes documents or other Telegram Passport elements shared with the bot by the user.
struct EncryptedPassportElement{
	std::string type;
	std::string data;
	std::string phone_number;
	std::string email;
	std::string files;
	std::string front_side;
	std::string reverse_side;
	std::string selfie;
	std::string translation;
	std::string hash;
};

//Describes data required for decrypting and authenticating <a href="#encryptedpassportelement">EncryptedPassportElement</a>. See the <a href="/passport#receiving-information">Telegram Passport Documentation</a> for a complete description of the data decryption and authentication processes.
struct EncryptedCredentials{
	std::string data;
	std::string hash;
	std::string secret;
};

//This object represents an error in the Telegram Passport element which was submitted that should be resolved by the user. It should be one of:
struct PassportElementError{
	std::string source;
	std::string type;
	std::string field_name;
	std::string data_hash;
	std::string message;
};

//Represents an issue in one of the data fields that was provided by the user. The error is considered resolved when the field&#39;s value changes.
struct PassportElementErrorDataField{
	std::string source;
	std::string type;
	std::string field_name;
	std::string data_hash;
	std::string message;
};

//Represents an issue with the front side of a document. The error is considered resolved when the file with the front side of the document changes.
struct PassportElementErrorFrontSide{
	std::string source;
	std::string type;
	std::string file_hash;
	std::string message;
};

//Represents an issue with the reverse side of a document. The error is considered resolved when the file with reverse side of the document changes.
struct PassportElementErrorReverseSide{
	std::string source;
	std::string type;
	std::string file_hash;
	std::string message;
};

//Represents an issue with the selfie with a document. The error is considered resolved when the file with the selfie changes.
struct PassportElementErrorSelfie{
	std::string source;
	std::string type;
	std::string file_hash;
	std::string message;
};

//Represents an issue with a document scan. The error is considered resolved when the file with the document scan changes.
struct PassportElementErrorFile{
	std::string source;
	std::string type;
	std::string file_hash;
	std::string message;
};

//Represents an issue with a list of scans. The error is considered resolved when the list of files containing the scans changes.
struct PassportElementErrorFiles{
	std::string source;
	std::string type;
	std::string file_hashes;
	std::string message;
};

//Represents an issue with one of the files that constitute the translation of a document. The error is considered resolved when the file changes.
struct PassportElementErrorTranslationFile{
	std::string source;
	std::string type;
	std::string file_hash;
	std::string message;
};

//Represents an issue with the translated version of a document. The error is considered resolved when a file with the document translation change.
struct PassportElementErrorTranslationFiles{
	std::string source;
	std::string type;
	std::string file_hashes;
	std::string message;
};

//Represents an issue in an unspecified place. The error is considered resolved when new data is added.
struct PassportElementErrorUnspecified{
	std::string source;
	std::string type;
	std::string element_hash;
	std::string message;
};

//This object represents a game. Use BotFather to create and edit games, their short names will act as unique identifiers.
struct Game{
	std::string title;
	std::string description;
	std::string photo;
	std::string text;
	std::string text_entities;
	std::string animation;
};

//This object represents one row of the high scores table for a game.
struct GameHighScore{
	std::string position;
	std::string user;
	std::string score;
};

