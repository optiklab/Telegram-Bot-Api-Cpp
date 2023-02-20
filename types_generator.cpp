#include <string>
#include <memory>
#include <vector>
#include <nlohmann/json.hpp>
using json = nlohmann::json;

struct User;
struct Chat;
struct Message;
struct MessageId;
struct MessageEntity;
struct PhotoSize;
struct Animation;
struct Audio;
struct Document;
struct Video;
struct VideoNote;
struct Voice;
struct Contact;
struct Dice;
struct PollOption;
struct PollAnswer;
struct Poll;
struct Location;
struct Venue;
struct WebAppData;
struct ProximityAlertTriggered;
struct MessageAutoDeleteTimerChanged;
struct ForumTopicCreated;
struct ForumTopicClosed;
struct ForumTopicEdited;
struct ForumTopicReopened;
struct GeneralForumTopicHidden;
struct GeneralForumTopicUnhidden;
struct UserShared;
struct ChatShared;
struct WriteAccessAllowed;
struct VideoChatScheduled;
struct VideoChatStarted;
struct VideoChatEnded;
struct VideoChatParticipantsInvited;
struct UserProfilePhotos;
struct File;
struct WebAppInfo;
struct ReplyKeyboardMarkup;
struct KeyboardButton;
struct KeyboardButtonRequestUser;
struct KeyboardButtonRequestChat;
struct KeyboardButtonPollType;
struct ReplyKeyboardRemove;
struct InlineKeyboardMarkup;
struct InlineKeyboardButton;
struct LoginUrl;
struct CallbackQuery;
struct ForceReply;
struct ChatPhoto;
struct ChatInviteLink;
struct ChatAdministratorRights;
struct ChatMember;
struct ChatMemberOwner;
struct ChatMemberAdministrator;
struct ChatMemberMember;
struct ChatMemberRestricted;
struct ChatMemberLeft;
struct ChatMemberBanned;
struct ChatMemberUpdated;
struct ChatJoinRequest;
struct ChatPermissions;
struct ChatLocation;
struct ForumTopic;
struct BotCommand;
struct BotCommandScope;
struct BotCommandScopeDefault;
struct BotCommandScopeAllPrivateChats;
struct BotCommandScopeAllGroupChats;
struct BotCommandScopeAllChatAdministrators;
struct BotCommandScopeChat;
struct BotCommandScopeChatAdministrators;
struct BotCommandScopeChatMember;
struct MenuButton;
struct MenuButtonCommands;
struct MenuButtonWebApp;
struct MenuButtonDefault;
struct ResponseParameters;
struct InputMedia;
struct InputMediaPhoto;
struct InputMediaVideo;
struct InputMediaAnimation;
struct InputMediaAudio;
struct InputMediaDocument;
struct InputFile;
struct Stickers;
struct Sticker;
struct StickerSet;
struct MaskPosition;
struct InlineQuery;
struct InlineQueryResult;
struct InlineQueryResultArticle;
struct InlineQueryResultPhoto;
struct InlineQueryResultGif;
struct InlineQueryResultMpeg4Gif;
struct InlineQueryResultVideo;
struct InlineQueryResultAudio;
struct InlineQueryResultVoice;
struct InlineQueryResultDocument;
struct InlineQueryResultLocation;
struct InlineQueryResultVenue;
struct InlineQueryResultContact;
struct InlineQueryResultGame;
struct InlineQueryResultCachedPhoto;
struct InlineQueryResultCachedGif;
struct InlineQueryResultCachedMpeg4Gif;
struct InlineQueryResultCachedSticker;
struct InlineQueryResultCachedDocument;
struct InlineQueryResultCachedVideo;
struct InlineQueryResultCachedVoice;
struct InlineQueryResultCachedAudio;
struct InputMessageContent;
struct InputTextMessageContent;
struct InputLocationMessageContent;
struct InputVenueMessageContent;
struct InputContactMessageContent;
struct InputInvoiceMessageContent;
struct ChosenInlineResult;
struct SentWebAppMessage;
struct Payments;
struct LabeledPrice;
struct Invoice;
struct ShippingAddress;
struct OrderInfo;
struct ShippingOption;
struct SuccessfulPayment;
struct ShippingQuery;
struct PreCheckoutQuery;
struct PassportData;
struct PassportFile;
struct EncryptedPassportElement;
struct EncryptedCredentials;
struct PassportElementError;
struct PassportElementErrorDataField;
struct PassportElementErrorFrontSide;
struct PassportElementErrorReverseSide;
struct PassportElementErrorSelfie;
struct PassportElementErrorFile;
struct PassportElementErrorFiles;
struct PassportElementErrorTranslationFile;
struct PassportElementErrorTranslationFiles;
struct PassportElementErrorUnspecified;
struct Games;
struct Game;
struct CallbackGame;
struct GameHighScore;

//This object represents a Telegram user or bot.
struct User{
	int id;
	bool is_bot;
	std::string first_name;
	std::string last_name;
	std::string username;
	std::string language_code;
	bool is_premium;
	bool added_to_attachment_menu;
	bool can_join_groups;
	bool can_read_all_group_messages;
	bool supports_inline_queries;
};

//This object represents a chat.
struct Chat{
	int id;
	std::string type;
	std::string title;
	std::string username;
	std::string first_name;
	std::string last_name;
	bool is_forum;
	std::shared_ptr<ChatPhoto> photo;
	std::string active_usernames;
	std::string emoji_status_custom_emoji_id;
	std::string bio;
	bool has_private_forwards;
	bool has_restricted_voice_and_video_messages;
	bool join_to_send_messages;
	bool join_by_request;
	std::string description;
	std::string invite_link;
	std::shared_ptr<Message> pinned_message;
	std::shared_ptr<ChatPermissions> permissions;
	int slow_mode_delay;
	int message_auto_delete_time;
	bool has_aggressive_anti_spam_enabled;
	bool has_hidden_members;
	bool has_protected_content;
	std::string sticker_set_name;
	bool can_set_sticker_set;
	int linked_chat_id;
	std::shared_ptr<ChatLocation> location;
};

//This object represents a message.
struct Message{
	int message_id;
	int message_thread_id;
	std::shared_ptr<User> from;
	std::shared_ptr<Chat> sender_chat;
	int date;
	std::shared_ptr<Chat> chat;
	std::shared_ptr<User> forward_from;
	std::shared_ptr<Chat> forward_from_chat;
	int forward_from_message_id;
	std::string forward_signature;
	std::string forward_sender_name;
	int forward_date;
	bool is_topic_message;
	bool is_automatic_forward;
	std::shared_ptr<Message> reply_to_message;
	std::shared_ptr<User> via_bot;
	int edit_date;
	bool has_protected_content;
	std::string media_group_id;
	std::string author_signature;
	std::string text;
	std::vector<std::shared_ptr<MessageEntity>> entities;
	std::shared_ptr<Animation> animation;
	std::shared_ptr<Audio> audio;
	std::shared_ptr<Document> document;
	std::vector<std::shared_ptr<PhotoSize>> photo;
	std::shared_ptr<Sticker> sticker;
	std::shared_ptr<Video> video;
	std::shared_ptr<VideoNote> video_note;
	std::shared_ptr<Voice> voice;
	std::string caption;
	std::vector<std::shared_ptr<MessageEntity>> caption_entities;
	bool has_media_spoiler;
	std::shared_ptr<Contact> contact;
	std::shared_ptr<Dice> dice;
	std::shared_ptr<Game> game;
	std::shared_ptr<Poll> poll;
	std::shared_ptr<Venue> venue;
	std::shared_ptr<Location> location;
	std::vector<std::shared_ptr<User>> new_chat_members;
	std::shared_ptr<User> left_chat_member;
	std::string new_chat_title;
	std::vector<std::shared_ptr<PhotoSize>> new_chat_photo;
	bool delete_chat_photo;
	bool group_chat_created;
	bool supergroup_chat_created;
	bool channel_chat_created;
	std::shared_ptr<MessageAutoDeleteTimerChanged> message_auto_delete_timer_changed;
	int migrate_to_chat_id;
	int migrate_from_chat_id;
	std::shared_ptr<Message> pinned_message;
	std::shared_ptr<Invoice> invoice;
	std::shared_ptr<SuccessfulPayment> successful_payment;
	std::shared_ptr<UserShared> user_shared;
	std::shared_ptr<ChatShared> chat_shared;
	std::string connected_website;
	std::shared_ptr<WriteAccessAllowed> write_access_allowed;
	std::shared_ptr<PassportData> passport_data;
	std::shared_ptr<ProximityAlertTriggered> proximity_alert_triggered;
	std::shared_ptr<ForumTopicCreated> forum_topic_created;
	std::shared_ptr<ForumTopicEdited> forum_topic_edited;
	std::shared_ptr<ForumTopicClosed> forum_topic_closed;
	std::shared_ptr<ForumTopicReopened> forum_topic_reopened;
	std::shared_ptr<GeneralForumTopicHidden> general_forum_topic_hidden;
	std::shared_ptr<GeneralForumTopicUnhidden> general_forum_topic_unhidden;
	std::shared_ptr<VideoChatScheduled> video_chat_scheduled;
	std::shared_ptr<VideoChatStarted> video_chat_started;
	std::shared_ptr<VideoChatEnded> video_chat_ended;
	std::shared_ptr<VideoChatParticipantsInvited> video_chat_participants_invited;
	std::shared_ptr<WebAppData> web_app_data;
	std::shared_ptr<InlineKeyboardMarkup> reply_markup;
};

//This object represents a unique message identifier.
struct MessageId{
	int message_id;
};

//This object represents one special entity in a text message. For example, hashtags, usernames, URLs, etc.
struct MessageEntity{
	std::string type;
	int offset;
	int length;
	std::string url;
	std::shared_ptr<User> user;
	std::string language;
	std::string custom_emoji_id;
};

//This object represents one size of a photo or a <a href="#document">file</a> / <a href="#sticker">sticker</a> thumbnail.
struct PhotoSize{
	std::string file_id;
	std::string file_unique_id;
	int width;
	int height;
	int file_size;
};

//This object represents an animation file (GIF or H.264/MPEG-4 AVC video without sound).
struct Animation{
	std::string file_id;
	std::string file_unique_id;
	int width;
	int height;
	int duration;
	std::shared_ptr<PhotoSize> thumb;
	std::string file_name;
	std::string mime_type;
	int file_size;
};

//This object represents an audio file to be treated as music by the Telegram clients.
struct Audio{
	std::string file_id;
	std::string file_unique_id;
	int duration;
	std::string performer;
	std::string title;
	std::string file_name;
	std::string mime_type;
	int file_size;
	std::shared_ptr<PhotoSize> thumb;
};

//This object represents a general file (as opposed to <a href="#photosize">photos</a>, <a href="#voice">voice messages</a> and <a href="#audio">audio files</a>).
struct Document{
	std::string file_id;
	std::string file_unique_id;
	std::shared_ptr<PhotoSize> thumb;
	std::string file_name;
	std::string mime_type;
	int file_size;
};

//This object represents a video file.
struct Video{
	std::string file_id;
	std::string file_unique_id;
	int width;
	int height;
	int duration;
	std::shared_ptr<PhotoSize> thumb;
	std::string file_name;
	std::string mime_type;
	int file_size;
};

//This object represents a <a href="https://telegram.org/blog/video-messages-and-telescope">video message</a> (available in Telegram apps as of <a href="https://telegram.org/blog/video-messages-and-telescope">v.4.0</a>).
struct VideoNote{
	std::string file_id;
	std::string file_unique_id;
	int length;
	int duration;
	std::shared_ptr<PhotoSize> thumb;
	int file_size;
};

//This object represents a voice note.
struct Voice{
	std::string file_id;
	std::string file_unique_id;
	int duration;
	std::string mime_type;
	int file_size;
};

//This object represents a phone contact.
struct Contact{
	std::string phone_number;
	std::string first_name;
	std::string last_name;
	int user_id;
	std::string vcard;
};

//This object represents an animated emoji that displays a random value.
struct Dice{
	std::string emoji;
	int value;
};

//This object contains information about one answer option in a poll.
struct PollOption{
	std::string text;
	int voter_count;
};

//This object represents an answer of a user in a non-anonymous poll.
struct PollAnswer{
	std::string poll_id;
	std::shared_ptr<User> user;
	int option_ids;
};

//This object contains information about a poll.
struct Poll{
	std::string id;
	std::string question;
	std::vector<std::shared_ptr<PollOption>> options;
	int total_voter_count;
	bool is_closed;
	bool is_anonymous;
	std::string type;
	bool allows_multiple_answers;
	int correct_option_id;
	std::string explanation;
	std::vector<std::shared_ptr<MessageEntity>> explanation_entities;
	int open_period;
	int close_date;
};

//This object represents a point on the map.
struct Location{
	float longitude;
	float latitude;
	float horizontal_accuracy;
	int live_period;
	int heading;
	int proximity_alert_radius;
};

//This object represents a venue.
struct Venue{
	std::shared_ptr<Location> location;
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
	std::shared_ptr<User> traveler;
	std::shared_ptr<User> watcher;
	int distance;
};

//This object represents a service message about a change in auto-delete timer settings.
struct MessageAutoDeleteTimerChanged{
	int message_auto_delete_time;
};

//This object represents a service message about a new forum topic created in the chat.
struct ForumTopicCreated{
	std::string name;
	int icon_color;
	std::string icon_custom_emoji_id;
};

//This object represents a service message about a forum topic closed in the chat. Currently holds no information.
struct ForumTopicClosed{
};

//This object represents a service message about an edited forum topic.
struct ForumTopicEdited{
	std::string name;
	std::string icon_custom_emoji_id;
};

//This object represents a service message about a forum topic reopened in the chat. Currently holds no information.
struct ForumTopicReopened{
};

//This object represents a service message about General forum topic hidden in the chat. Currently holds no information.
struct GeneralForumTopicHidden{
};

//This object represents a service message about General forum topic unhidden in the chat. Currently holds no information.
struct GeneralForumTopicUnhidden{
};

//This object contains information about the user whose identifier was shared with the bot using a <a href="#keyboardbuttonrequestuser">KeyboardButtonRequestUser</a> button.
struct UserShared{
	int request_id;
	int user_id;
};

//This object contains information about the chat whose identifier was shared with the bot using a <a href="#keyboardbuttonrequestchat">KeyboardButtonRequestChat</a> button.
struct ChatShared{
	int request_id;
	int chat_id;
};

//This object represents a service message about a user allowing a bot added to the attachment menu to write messages. Currently holds no information.
struct WriteAccessAllowed{
};

//This object represents a service message about a video chat scheduled in the chat.
struct VideoChatScheduled{
	int start_date;
};

//This object represents a service message about a video chat started in the chat. Currently holds no information.
struct VideoChatStarted{
};

//This object represents a service message about a video chat ended in the chat.
struct VideoChatEnded{
	int duration;
};

//This object represents a service message about new members invited to a video chat.
struct VideoChatParticipantsInvited{
	std::vector<std::shared_ptr<User>> users;
};

//This object represent a user&#39;s profile pictures.
struct UserProfilePhotos{
	int total_count;
	std::vector<std::shared_ptr<PhotoSize>> photos;
};

//This object represents a file ready to be downloaded. The file can be downloaded via the link <code>https://api.telegram.org/file/bot&lt;token&gt;/&lt;file_path&gt;</code>. It is guaranteed that the link will be valid for at least 1 hour. When the link expires, a new one can be requested by calling <a href="#getfile">getFile</a>.
struct File{
	std::string file_id;
	std::string file_unique_id;
	int file_size;
	std::string file_path;
};

//Describes a <a href="/bots/webapps">Web App</a>.
struct WebAppInfo{
	std::string url;
};

//This object represents a <a href="/bots/features#keyboards">custom keyboard</a> with reply options (see <a href="/bots/features#keyboards">Introduction to bots</a> for details and examples).
struct ReplyKeyboardMarkup{
	std::vector<std::shared_ptr<KeyboardButton>> keyboard;
	bool is_persistent;
	bool resize_keyboard;
	bool one_time_keyboard;
	std::string input_field_placeholder;
	bool selective;
};

//This object represents one button of the reply keyboard. For simple text buttons, <em>String</em> can be used instead of this object to specify the button text. The optional fields <em>web_app</em>, <em>request_user</em>, <em>request_chat</em>, <em>request_contact</em>, <em>request_location</em>, and <em>request_poll</em> are mutually exclusive.
struct KeyboardButton{
	std::string text;
	std::shared_ptr<KeyboardButtonRequestUser> request_user;
	std::shared_ptr<KeyboardButtonRequestChat> request_chat;
	bool request_contact;
	bool request_location;
	std::shared_ptr<KeyboardButtonPollType> request_poll;
	std::shared_ptr<WebAppInfo> web_app;
};

//This object defines the criteria used to request a suitable user. The identifier of the selected user will be shared with the bot when the corresponding button is pressed.
struct KeyboardButtonRequestUser{
	int request_id;
	bool user_is_bot;
	bool user_is_premium;
};

//This object defines the criteria used to request a suitable chat. The identifier of the selected chat will be shared with the bot when the corresponding button is pressed.
struct KeyboardButtonRequestChat{
	int request_id;
	bool chat_is_channel;
	bool chat_is_forum;
	bool chat_has_username;
	bool chat_is_created;
	std::shared_ptr<ChatAdministratorRights> user_administrator_rights;
	std::shared_ptr<ChatAdministratorRights> bot_administrator_rights;
	bool bot_is_member;
};

//This object represents type of a poll, which is allowed to be created and sent when the corresponding button is pressed.
struct KeyboardButtonPollType{
	std::string type;
};

//Upon receiving a message with this object, Telegram clients will remove the current custom keyboard and display the default letter-keyboard. By default, custom keyboards are displayed until a new keyboard is sent by a bot. An exception is made for one-time keyboards that are hidden immediately after the user presses a button (see <a href="#replykeyboardmarkup">ReplyKeyboardMarkup</a>).
struct ReplyKeyboardRemove{
};

//This object represents an <a href="/bots/features#inline-keyboards">inline keyboard</a> that appears right next to the message it belongs to.
struct InlineKeyboardMarkup{
	std::vector<std::shared_ptr<InlineKeyboardButton>> inline_keyboard;
};

//This object represents one button of an inline keyboard. You <strong>must</strong> use exactly one of the optional fields.
struct InlineKeyboardButton{
	std::string text;
	std::string url;
	std::string callback_data;
	std::shared_ptr<WebAppInfo> web_app;
	std::shared_ptr<LoginUrl> login_url;
	std::string switch_inline_query;
	std::string switch_inline_query_current_chat;
	std::shared_ptr<CallbackGame> callback_game;
	bool pay;
};

//This object represents a parameter of the inline keyboard button used to automatically authorize a user. Serves as a great replacement for the <a href="/widgets/login">Telegram Login Widget</a> when the user is coming from Telegram. All the user needs to do is tap/click a button and confirm that they want to log in:
struct LoginUrl{
	std::string url;
	std::string forward_text;
	std::string bot_username;
	bool request_write_access;
};

//This object represents an incoming callback query from a callback button in an <a href="/bots/features#inline-keyboards">inline keyboard</a>. If the button that originated the query was attached to a message sent by the bot, the field <em>message</em> will be present. If the button was attached to a message sent via the bot (in <a href="#inline-mode">inline mode</a>), the field <em>inline_message_id</em> will be present. Exactly one of the fields <em>data</em> or <em>game_short_name</em> will be present.
struct CallbackQuery{
	std::string id;
	std::shared_ptr<User> from;
	std::shared_ptr<Message> message;
	std::string inline_message_id;
	std::string chat_instance;
	std::string data;
	std::string game_short_name;
};

//Upon receiving a message with this object, Telegram clients will display a reply interface to the user (act as if the user has selected the bot&#39;s message and tapped &#39;Reply&#39;). This can be extremely useful if you want to create user-friendly step-by-step interfaces without having to sacrifice <a href="/bots/features#privacy-mode">privacy mode</a>.
struct ForceReply{
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
	std::shared_ptr<User> creator;
	bool creates_join_request;
	bool is_primary;
	bool is_revoked;
	std::string name;
	int expire_date;
	int member_limit;
	int pending_join_request_count;
};

//Represents the rights of an administrator in a chat.
struct ChatAdministratorRights{
	bool is_anonymous;
	bool can_manage_chat;
	bool can_delete_messages;
	bool can_manage_video_chats;
	bool can_restrict_members;
	bool can_promote_members;
	bool can_change_info;
	bool can_invite_users;
	bool can_post_messages;
	bool can_edit_messages;
	bool can_pin_messages;
	bool can_manage_topics;
};

//This object contains information about one member of a chat. Currently, the following 6 types of chat members are supported:
struct ChatMember{
	std::string status;
	std::shared_ptr<User> user;
	bool is_anonymous;
	std::string custom_title;
};

//Represents a <a href="#chatmember">chat member</a> that owns the chat and has all administrator privileges.
struct ChatMemberOwner{
	std::string status;
	std::shared_ptr<User> user;
	bool is_anonymous;
	std::string custom_title;
};

//Represents a <a href="#chatmember">chat member</a> that has some additional privileges.
struct ChatMemberAdministrator{
	std::string status;
	std::shared_ptr<User> user;
	bool can_be_edited;
	bool is_anonymous;
	bool can_manage_chat;
	bool can_delete_messages;
	bool can_manage_video_chats;
	bool can_restrict_members;
	bool can_promote_members;
	bool can_change_info;
	bool can_invite_users;
	bool can_post_messages;
	bool can_edit_messages;
	bool can_pin_messages;
	bool can_manage_topics;
	std::string custom_title;
};

//Represents a <a href="#chatmember">chat member</a> that has no additional privileges or restrictions.
struct ChatMemberMember{
	std::string status;
	std::shared_ptr<User> user;
};

//Represents a <a href="#chatmember">chat member</a> that is under certain restrictions in the chat. Supergroups only.
struct ChatMemberRestricted{
	std::string status;
	std::shared_ptr<User> user;
	bool is_member;
	bool can_send_messages;
	bool can_send_audios;
	bool can_send_documents;
	bool can_send_photos;
	bool can_send_videos;
	bool can_send_video_notes;
	bool can_send_voice_notes;
	bool can_send_polls;
	bool can_send_other_messages;
	bool can_add_web_page_previews;
	bool can_change_info;
	bool can_invite_users;
	bool can_pin_messages;
	bool can_manage_topics;
	int until_date;
};

//Represents a <a href="#chatmember">chat member</a> that isn&#39;t currently a member of the chat, but may join it themselves.
struct ChatMemberLeft{
	std::string status;
	std::shared_ptr<User> user;
};

//Represents a <a href="#chatmember">chat member</a> that was banned in the chat and can&#39;t return to the chat or view chat messages.
struct ChatMemberBanned{
	std::string status;
	std::shared_ptr<User> user;
	int until_date;
};

//This object represents changes in the status of a chat member.
struct ChatMemberUpdated{
	std::shared_ptr<Chat> chat;
	std::shared_ptr<User> from;
	int date;
	std::shared_ptr<ChatMember> old_chat_member;
	std::shared_ptr<ChatMember> new_chat_member;
	std::shared_ptr<ChatInviteLink> invite_link;
};

//Represents a join request sent to a chat.
struct ChatJoinRequest{
	std::shared_ptr<Chat> chat;
	std::shared_ptr<User> from;
	int user_chat_id;
	int date;
	std::string bio;
	std::shared_ptr<ChatInviteLink> invite_link;
};

//Describes actions that a non-administrator user is allowed to take in a chat.
struct ChatPermissions{
	bool can_send_messages;
	bool can_send_audios;
	bool can_send_documents;
	bool can_send_photos;
	bool can_send_videos;
	bool can_send_video_notes;
	bool can_send_voice_notes;
	bool can_send_polls;
	bool can_send_other_messages;
	bool can_add_web_page_previews;
	bool can_change_info;
	bool can_invite_users;
	bool can_pin_messages;
	bool can_manage_topics;
};

//Represents a location to which a chat is connected.
struct ChatLocation{
	std::shared_ptr<Location> location;
	std::string address;
};

//This object represents a forum topic.
struct ForumTopic{
	int message_thread_id;
	std::string name;
	int icon_color;
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
	int chat_id;
};

//Represents the <a href="#botcommandscope">scope</a> of bot commands, covering all administrators of a specific group or supergroup chat.
struct BotCommandScopeChatAdministrators{
	std::string type;
	int chat_id;
};

//Represents the <a href="#botcommandscope">scope</a> of bot commands, covering a specific member of a group or supergroup chat.
struct BotCommandScopeChatMember{
	std::string type;
	int chat_id;
	int user_id;
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
	std::shared_ptr<WebAppInfo> web_app;
};

//Describes that no specific value for the menu button was set.
struct MenuButtonDefault{
	std::string type;
};

//Describes why a request was unsuccessful.
struct ResponseParameters{
	int migrate_to_chat_id;
	int retry_after;
};

//This object represents the content of a media message to be sent. It should be one of
struct InputMedia{
	std::string type;
	std::string media;
	std::string caption;
	std::string parse_mode;
	std::vector<std::shared_ptr<MessageEntity>> caption_entities;
	bool has_spoiler;
};

//Represents a photo to be sent.
struct InputMediaPhoto{
	std::string type;
	std::string media;
	std::string caption;
	std::string parse_mode;
	std::vector<std::shared_ptr<MessageEntity>> caption_entities;
	bool has_spoiler;
};

//Represents a video to be sent.
struct InputMediaVideo{
	std::string type;
	std::string media;
	std::string thumb;
	std::string caption;
	std::string parse_mode;
	std::vector<std::shared_ptr<MessageEntity>> caption_entities;
	int width;
	int height;
	int duration;
	bool supports_streaming;
	bool has_spoiler;
};

//Represents an animation file (GIF or H.264/MPEG-4 AVC video without sound) to be sent.
struct InputMediaAnimation{
	std::string type;
	std::string media;
	std::string thumb;
	std::string caption;
	std::string parse_mode;
	std::vector<std::shared_ptr<MessageEntity>> caption_entities;
	int width;
	int height;
	int duration;
	bool has_spoiler;
};

//Represents an audio file to be treated as music to be sent.
struct InputMediaAudio{
	std::string type;
	std::string media;
	std::string thumb;
	std::string caption;
	std::string parse_mode;
	std::vector<std::shared_ptr<MessageEntity>> caption_entities;
	int duration;
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
	std::vector<std::shared_ptr<MessageEntity>> caption_entities;
	bool disable_content_type_detection;
};

//This object represents the contents of a file to be uploaded. Must be posted using multipart/form-data in the usual way that files are uploaded via the browser.
struct InputFile{
	int chat_id;
	int message_thread_id;
	std::string text;
	std::string parse_mode;
	std::vector<std::shared_ptr<MessageEntity>> entities;
	bool disable_web_page_preview;
	bool disable_notification;
	bool protect_content;
	int reply_to_message_id;
	bool allow_sending_without_reply;
	std::shared_ptr<InlineKeyboardMarkup> reply_markup;
};

//The following methods and objects allow your bot to handle stickers and sticker sets.
struct Stickers{
};

//This object represents a sticker.
struct Sticker{
	std::string file_id;
	std::string file_unique_id;
	std::string type;
	int width;
	int height;
	bool is_animated;
	bool is_video;
	std::shared_ptr<PhotoSize> thumb;
	std::string emoji;
	std::string set_name;
	std::shared_ptr<File> premium_animation;
	std::shared_ptr<MaskPosition> mask_position;
	std::string custom_emoji_id;
	int file_size;
};

//This object represents a sticker set.
struct StickerSet{
	std::string name;
	std::string title;
	std::string sticker_type;
	bool is_animated;
	bool is_video;
	std::vector<std::shared_ptr<Sticker>> stickers;
	std::shared_ptr<PhotoSize> thumb;
};

//This object describes the position on faces where a mask should be placed by default.
struct MaskPosition{
	std::string point;
	float x_shift;
	float y_shift;
	float scale;
};

//This object represents an incoming inline query. When the user sends an empty query, your bot could return some default or trending results.
struct InlineQuery{
	std::string id;
	std::shared_ptr<User> from;
	std::string query;
	std::string offset;
	std::string chat_type;
	std::shared_ptr<Location> location;
};

//This object represents one result of an inline query. Telegram clients currently support results of the following 20 types:
struct InlineQueryResult{
	std::string type;
	std::string id;
	std::string title;
	std::shared_ptr<InputMessageContent> input_message_content;
	std::shared_ptr<InlineKeyboardMarkup> reply_markup;
	std::string url;
	bool hide_url;
	std::string description;
	std::string thumb_url;
	int thumb_width;
	int thumb_height;
};

//Represents a link to an article or web page.
struct InlineQueryResultArticle{
	std::string type;
	std::string id;
	std::string title;
	std::shared_ptr<InputMessageContent> input_message_content;
	std::shared_ptr<InlineKeyboardMarkup> reply_markup;
	std::string url;
	bool hide_url;
	std::string description;
	std::string thumb_url;
	int thumb_width;
	int thumb_height;
};

//Represents a link to a photo. By default, this photo will be sent by the user with optional caption. Alternatively, you can use <em>input_message_content</em> to send a message with the specified content instead of the photo.
struct InlineQueryResultPhoto{
	std::string type;
	std::string id;
	std::string photo_url;
	std::string thumb_url;
	int photo_width;
	int photo_height;
	std::string title;
	std::string description;
	std::string caption;
	std::string parse_mode;
	std::vector<std::shared_ptr<MessageEntity>> caption_entities;
	std::shared_ptr<InlineKeyboardMarkup> reply_markup;
	std::shared_ptr<InputMessageContent> input_message_content;
};

//Represents a link to an animated GIF file. By default, this animated GIF file will be sent by the user with optional caption. Alternatively, you can use <em>input_message_content</em> to send a message with the specified content instead of the animation.
struct InlineQueryResultGif{
	std::string type;
	std::string id;
	std::string gif_url;
	int gif_width;
	int gif_height;
	int gif_duration;
	std::string thumb_url;
	std::string thumb_mime_type;
	std::string title;
	std::string caption;
	std::string parse_mode;
	std::vector<std::shared_ptr<MessageEntity>> caption_entities;
	std::shared_ptr<InlineKeyboardMarkup> reply_markup;
	std::shared_ptr<InputMessageContent> input_message_content;
};

//Represents a link to a video animation (H.264/MPEG-4 AVC video without sound). By default, this animated MPEG-4 file will be sent by the user with optional caption. Alternatively, you can use <em>input_message_content</em> to send a message with the specified content instead of the animation.
struct InlineQueryResultMpeg4Gif{
	std::string type;
	std::string id;
	std::string mpeg4_url;
	int mpeg4_width;
	int mpeg4_height;
	int mpeg4_duration;
	std::string thumb_url;
	std::string thumb_mime_type;
	std::string title;
	std::string caption;
	std::string parse_mode;
	std::vector<std::shared_ptr<MessageEntity>> caption_entities;
	std::shared_ptr<InlineKeyboardMarkup> reply_markup;
	std::shared_ptr<InputMessageContent> input_message_content;
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
	std::vector<std::shared_ptr<MessageEntity>> caption_entities;
	int video_width;
	int video_height;
	int video_duration;
	std::string description;
	std::shared_ptr<InlineKeyboardMarkup> reply_markup;
	std::shared_ptr<InputMessageContent> input_message_content;
};

//Represents a link to an MP3 audio file. By default, this audio file will be sent by the user. Alternatively, you can use <em>input_message_content</em> to send a message with the specified content instead of the audio.
struct InlineQueryResultAudio{
	std::string type;
	std::string id;
	std::string audio_url;
	std::string title;
	std::string caption;
	std::string parse_mode;
	std::vector<std::shared_ptr<MessageEntity>> caption_entities;
	std::string performer;
	int audio_duration;
	std::shared_ptr<InlineKeyboardMarkup> reply_markup;
	std::shared_ptr<InputMessageContent> input_message_content;
};

//Represents a link to a voice recording in an .OGG container encoded with OPUS. By default, this voice recording will be sent by the user. Alternatively, you can use <em>input_message_content</em> to send a message with the specified content instead of the the voice message.
struct InlineQueryResultVoice{
	std::string type;
	std::string id;
	std::string voice_url;
	std::string title;
	std::string caption;
	std::string parse_mode;
	std::vector<std::shared_ptr<MessageEntity>> caption_entities;
	int voice_duration;
	std::shared_ptr<InlineKeyboardMarkup> reply_markup;
	std::shared_ptr<InputMessageContent> input_message_content;
};

//Represents a link to a file. By default, this file will be sent by the user with an optional caption. Alternatively, you can use <em>input_message_content</em> to send a message with the specified content instead of the file. Currently, only <strong>.PDF</strong> and <strong>.ZIP</strong> files can be sent using this method.
struct InlineQueryResultDocument{
	std::string type;
	std::string id;
	std::string title;
	std::string caption;
	std::string parse_mode;
	std::vector<std::shared_ptr<MessageEntity>> caption_entities;
	std::string document_url;
	std::string mime_type;
	std::string description;
	std::shared_ptr<InlineKeyboardMarkup> reply_markup;
	std::shared_ptr<InputMessageContent> input_message_content;
	std::string thumb_url;
	int thumb_width;
	int thumb_height;
};

//Represents a location on a map. By default, the location will be sent by the user. Alternatively, you can use <em>input_message_content</em> to send a message with the specified content instead of the location.
struct InlineQueryResultLocation{
	std::string type;
	std::string id;
	float latitude;
	float longitude;
	std::string title;
	float horizontal_accuracy;
	int live_period;
	int heading;
	int proximity_alert_radius;
	std::shared_ptr<InlineKeyboardMarkup> reply_markup;
	std::shared_ptr<InputMessageContent> input_message_content;
	std::string thumb_url;
	int thumb_width;
	int thumb_height;
};

//Represents a venue. By default, the venue will be sent by the user. Alternatively, you can use <em>input_message_content</em> to send a message with the specified content instead of the venue.
struct InlineQueryResultVenue{
	std::string type;
	std::string id;
	float latitude;
	float longitude;
	std::string title;
	std::string address;
	std::string foursquare_id;
	std::string foursquare_type;
	std::string google_place_id;
	std::string google_place_type;
	std::shared_ptr<InlineKeyboardMarkup> reply_markup;
	std::shared_ptr<InputMessageContent> input_message_content;
	std::string thumb_url;
	int thumb_width;
	int thumb_height;
};

//Represents a contact with a phone number. By default, this contact will be sent by the user. Alternatively, you can use <em>input_message_content</em> to send a message with the specified content instead of the contact.
struct InlineQueryResultContact{
	std::string type;
	std::string id;
	std::string phone_number;
	std::string first_name;
	std::string last_name;
	std::string vcard;
	std::shared_ptr<InlineKeyboardMarkup> reply_markup;
	std::shared_ptr<InputMessageContent> input_message_content;
	std::string thumb_url;
	int thumb_width;
	int thumb_height;
};

//Represents a <a href="#games">Game</a>.
struct InlineQueryResultGame{
	std::string type;
	std::string id;
	std::string game_short_name;
	std::shared_ptr<InlineKeyboardMarkup> reply_markup;
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
	std::vector<std::shared_ptr<MessageEntity>> caption_entities;
	std::shared_ptr<InlineKeyboardMarkup> reply_markup;
	std::shared_ptr<InputMessageContent> input_message_content;
};

//Represents a link to an animated GIF file stored on the Telegram servers. By default, this animated GIF file will be sent by the user with an optional caption. Alternatively, you can use <em>input_message_content</em> to send a message with specified content instead of the animation.
struct InlineQueryResultCachedGif{
	std::string type;
	std::string id;
	std::string gif_file_id;
	std::string title;
	std::string caption;
	std::string parse_mode;
	std::vector<std::shared_ptr<MessageEntity>> caption_entities;
	std::shared_ptr<InlineKeyboardMarkup> reply_markup;
	std::shared_ptr<InputMessageContent> input_message_content;
};

//Represents a link to a video animation (H.264/MPEG-4 AVC video without sound) stored on the Telegram servers. By default, this animated MPEG-4 file will be sent by the user with an optional caption. Alternatively, you can use <em>input_message_content</em> to send a message with the specified content instead of the animation.
struct InlineQueryResultCachedMpeg4Gif{
	std::string type;
	std::string id;
	std::string mpeg4_file_id;
	std::string title;
	std::string caption;
	std::string parse_mode;
	std::vector<std::shared_ptr<MessageEntity>> caption_entities;
	std::shared_ptr<InlineKeyboardMarkup> reply_markup;
	std::shared_ptr<InputMessageContent> input_message_content;
};

//Represents a link to a sticker stored on the Telegram servers. By default, this sticker will be sent by the user. Alternatively, you can use <em>input_message_content</em> to send a message with the specified content instead of the sticker.
struct InlineQueryResultCachedSticker{
	std::string type;
	std::string id;
	std::string sticker_file_id;
	std::shared_ptr<InlineKeyboardMarkup> reply_markup;
	std::shared_ptr<InputMessageContent> input_message_content;
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
	std::vector<std::shared_ptr<MessageEntity>> caption_entities;
	std::shared_ptr<InlineKeyboardMarkup> reply_markup;
	std::shared_ptr<InputMessageContent> input_message_content;
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
	std::vector<std::shared_ptr<MessageEntity>> caption_entities;
	std::shared_ptr<InlineKeyboardMarkup> reply_markup;
	std::shared_ptr<InputMessageContent> input_message_content;
};

//Represents a link to a voice message stored on the Telegram servers. By default, this voice message will be sent by the user. Alternatively, you can use <em>input_message_content</em> to send a message with the specified content instead of the voice message.
struct InlineQueryResultCachedVoice{
	std::string type;
	std::string id;
	std::string voice_file_id;
	std::string title;
	std::string caption;
	std::string parse_mode;
	std::vector<std::shared_ptr<MessageEntity>> caption_entities;
	std::shared_ptr<InlineKeyboardMarkup> reply_markup;
	std::shared_ptr<InputMessageContent> input_message_content;
};

//Represents a link to an MP3 audio file stored on the Telegram servers. By default, this audio file will be sent by the user. Alternatively, you can use <em>input_message_content</em> to send a message with the specified content instead of the audio.
struct InlineQueryResultCachedAudio{
	std::string type;
	std::string id;
	std::string audio_file_id;
	std::string caption;
	std::string parse_mode;
	std::vector<std::shared_ptr<MessageEntity>> caption_entities;
	std::shared_ptr<InlineKeyboardMarkup> reply_markup;
	std::shared_ptr<InputMessageContent> input_message_content;
};

//This object represents the content of a message to be sent as a result of an inline query. Telegram clients currently support the following 5 types:
struct InputMessageContent{
	std::string message_text;
	std::string parse_mode;
	std::vector<std::shared_ptr<MessageEntity>> entities;
	bool disable_web_page_preview;
};

//Represents the <a href="#inputmessagecontent">content</a> of a text message to be sent as the result of an inline query.
struct InputTextMessageContent{
	std::string message_text;
	std::string parse_mode;
	std::vector<std::shared_ptr<MessageEntity>> entities;
	bool disable_web_page_preview;
};

//Represents the <a href="#inputmessagecontent">content</a> of a location message to be sent as the result of an inline query.
struct InputLocationMessageContent{
	float latitude;
	float longitude;
	float horizontal_accuracy;
	int live_period;
	int heading;
	int proximity_alert_radius;
};

//Represents the <a href="#inputmessagecontent">content</a> of a venue message to be sent as the result of an inline query.
struct InputVenueMessageContent{
	float latitude;
	float longitude;
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
	std::vector<std::shared_ptr<LabeledPrice>> prices;
	int max_tip_amount;
	int suggested_tip_amounts;
	std::string provider_data;
	std::string photo_url;
	int photo_size;
	int photo_width;
	int photo_height;
	bool need_name;
	bool need_phone_number;
	bool need_email;
	bool need_shipping_address;
	bool send_phone_number_to_provider;
	bool send_email_to_provider;
	bool is_flexible;
};

//Represents a <a href="#inlinequeryresult">result</a> of an inline query that was chosen by the user and sent to their chat partner.
struct ChosenInlineResult{
	std::string result_id;
	std::shared_ptr<User> from;
	std::shared_ptr<Location> location;
	std::string inline_message_id;
	std::string query;
};

//Describes an inline message sent by a <a href="/bots/webapps">Web App</a> on behalf of a user.
struct SentWebAppMessage{
	std::string inline_message_id;
};

//Your bot can accept payments from Telegram users. Please see the <a href="/bots/payments">introduction to payments</a> for more details on the process and how to set up payments for your bot. Please note that users will need Telegram v.4.0 or higher to use payments (released on May 18, 2017).
struct Payments{
};

//This object represents a portion of the price for goods or services.
struct LabeledPrice{
	std::string label;
	int amount;
};

//This object contains basic information about an invoice.
struct Invoice{
	std::string title;
	std::string description;
	std::string start_parameter;
	std::string currency;
	int total_amount;
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
	std::shared_ptr<ShippingAddress> shipping_address;
};

//This object represents one shipping option.
struct ShippingOption{
	std::string id;
	std::string title;
	std::vector<std::shared_ptr<LabeledPrice>> prices;
};

//This object contains basic information about a successful payment.
struct SuccessfulPayment{
	std::string currency;
	int total_amount;
	std::string invoice_payload;
	std::string shipping_option_id;
	std::shared_ptr<OrderInfo> order_info;
	std::string telegram_payment_charge_id;
	std::string provider_payment_charge_id;
};

//This object contains information about an incoming shipping query.
struct ShippingQuery{
	std::string id;
	std::shared_ptr<User> from;
	std::string invoice_payload;
	std::shared_ptr<ShippingAddress> shipping_address;
};

//This object contains information about an incoming pre-checkout query.
struct PreCheckoutQuery{
	std::string id;
	std::shared_ptr<User> from;
	std::string currency;
	int total_amount;
	std::string invoice_payload;
	std::string shipping_option_id;
	std::shared_ptr<OrderInfo> order_info;
};

//Describes Telegram Passport data shared with the bot by the user.
struct PassportData{
	std::vector<std::shared_ptr<EncryptedPassportElement>> data;
	std::shared_ptr<EncryptedCredentials> credentials;
};

//This object represents a file uploaded to Telegram Passport. Currently all Telegram Passport files are in JPEG format when decrypted and don&#39;t exceed 10MB.
struct PassportFile{
	std::string file_id;
	std::string file_unique_id;
	int file_size;
	int file_date;
};

//Describes documents or other Telegram Passport elements shared with the bot by the user.
struct EncryptedPassportElement{
	std::string type;
	std::string data;
	std::string phone_number;
	std::string email;
	std::vector<std::shared_ptr<PassportFile>> files;
	std::shared_ptr<PassportFile> front_side;
	std::shared_ptr<PassportFile> reverse_side;
	std::shared_ptr<PassportFile> selfie;
	std::vector<std::shared_ptr<PassportFile>> translation;
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

//Your bot can offer users <strong>HTML5 games</strong> to play solo or to compete against each other in groups and one-on-one chats. Create games via <a href="https://t.me/botfather">@BotFather</a> using the <em>/newgame</em> command. Please note that this kind of power requires responsibility: you will need to accept the terms for each game that your bots will be offering.
struct Games{
};

//This object represents a game. Use BotFather to create and edit games, their short names will act as unique identifiers.
struct Game{
	std::string title;
	std::string description;
	std::vector<std::shared_ptr<PhotoSize>> photo;
	std::string text;
	std::vector<std::shared_ptr<MessageEntity>> text_entities;
	std::shared_ptr<Animation> animation;
};

//A placeholder, currently holds no information. Use <a href="https://t.me/botfather">BotFather</a> to set up your game.
struct CallbackGame{
};

//This object represents one row of the high scores table for a game.
struct GameHighScore{
	int position;
	std::shared_ptr<User> user;
	int score;
};

void from_json(const json& j, User& name);
void to_json(const  json& j, User& name);
void from_json(const json& j, Chat& name);
void to_json(const  json& j, Chat& name);
void from_json(const json& j, Message& name);
void to_json(const  json& j, Message& name);
void from_json(const json& j, MessageId& name);
void to_json(const  json& j, MessageId& name);
void from_json(const json& j, MessageEntity& name);
void to_json(const  json& j, MessageEntity& name);
void from_json(const json& j, PhotoSize& name);
void to_json(const  json& j, PhotoSize& name);
void from_json(const json& j, Animation& name);
void to_json(const  json& j, Animation& name);
void from_json(const json& j, Audio& name);
void to_json(const  json& j, Audio& name);
void from_json(const json& j, Document& name);
void to_json(const  json& j, Document& name);
void from_json(const json& j, Video& name);
void to_json(const  json& j, Video& name);
void from_json(const json& j, VideoNote& name);
void to_json(const  json& j, VideoNote& name);
void from_json(const json& j, Voice& name);
void to_json(const  json& j, Voice& name);
void from_json(const json& j, Contact& name);
void to_json(const  json& j, Contact& name);
void from_json(const json& j, Dice& name);
void to_json(const  json& j, Dice& name);
void from_json(const json& j, PollOption& name);
void to_json(const  json& j, PollOption& name);
void from_json(const json& j, PollAnswer& name);
void to_json(const  json& j, PollAnswer& name);
void from_json(const json& j, Poll& name);
void to_json(const  json& j, Poll& name);
void from_json(const json& j, Location& name);
void to_json(const  json& j, Location& name);
void from_json(const json& j, Venue& name);
void to_json(const  json& j, Venue& name);
void from_json(const json& j, WebAppData& name);
void to_json(const  json& j, WebAppData& name);
void from_json(const json& j, ProximityAlertTriggered& name);
void to_json(const  json& j, ProximityAlertTriggered& name);
void from_json(const json& j, MessageAutoDeleteTimerChanged& name);
void to_json(const  json& j, MessageAutoDeleteTimerChanged& name);
void from_json(const json& j, ForumTopicCreated& name);
void to_json(const  json& j, ForumTopicCreated& name);
void from_json(const json& j, ForumTopicClosed& name);
void to_json(const  json& j, ForumTopicClosed& name);
void from_json(const json& j, ForumTopicEdited& name);
void to_json(const  json& j, ForumTopicEdited& name);
void from_json(const json& j, ForumTopicReopened& name);
void to_json(const  json& j, ForumTopicReopened& name);
void from_json(const json& j, GeneralForumTopicHidden& name);
void to_json(const  json& j, GeneralForumTopicHidden& name);
void from_json(const json& j, GeneralForumTopicUnhidden& name);
void to_json(const  json& j, GeneralForumTopicUnhidden& name);
void from_json(const json& j, UserShared& name);
void to_json(const  json& j, UserShared& name);
void from_json(const json& j, ChatShared& name);
void to_json(const  json& j, ChatShared& name);
void from_json(const json& j, WriteAccessAllowed& name);
void to_json(const  json& j, WriteAccessAllowed& name);
void from_json(const json& j, VideoChatScheduled& name);
void to_json(const  json& j, VideoChatScheduled& name);
void from_json(const json& j, VideoChatStarted& name);
void to_json(const  json& j, VideoChatStarted& name);
void from_json(const json& j, VideoChatEnded& name);
void to_json(const  json& j, VideoChatEnded& name);
void from_json(const json& j, VideoChatParticipantsInvited& name);
void to_json(const  json& j, VideoChatParticipantsInvited& name);
void from_json(const json& j, UserProfilePhotos& name);
void to_json(const  json& j, UserProfilePhotos& name);
void from_json(const json& j, File& name);
void to_json(const  json& j, File& name);
void from_json(const json& j, WebAppInfo& name);
void to_json(const  json& j, WebAppInfo& name);
void from_json(const json& j, ReplyKeyboardMarkup& name);
void to_json(const  json& j, ReplyKeyboardMarkup& name);
void from_json(const json& j, KeyboardButton& name);
void to_json(const  json& j, KeyboardButton& name);
void from_json(const json& j, KeyboardButtonRequestUser& name);
void to_json(const  json& j, KeyboardButtonRequestUser& name);
void from_json(const json& j, KeyboardButtonRequestChat& name);
void to_json(const  json& j, KeyboardButtonRequestChat& name);
void from_json(const json& j, KeyboardButtonPollType& name);
void to_json(const  json& j, KeyboardButtonPollType& name);
void from_json(const json& j, ReplyKeyboardRemove& name);
void to_json(const  json& j, ReplyKeyboardRemove& name);
void from_json(const json& j, InlineKeyboardMarkup& name);
void to_json(const  json& j, InlineKeyboardMarkup& name);
void from_json(const json& j, InlineKeyboardButton& name);
void to_json(const  json& j, InlineKeyboardButton& name);
void from_json(const json& j, LoginUrl& name);
void to_json(const  json& j, LoginUrl& name);
void from_json(const json& j, CallbackQuery& name);
void to_json(const  json& j, CallbackQuery& name);
void from_json(const json& j, ForceReply& name);
void to_json(const  json& j, ForceReply& name);
void from_json(const json& j, ChatPhoto& name);
void to_json(const  json& j, ChatPhoto& name);
void from_json(const json& j, ChatInviteLink& name);
void to_json(const  json& j, ChatInviteLink& name);
void from_json(const json& j, ChatAdministratorRights& name);
void to_json(const  json& j, ChatAdministratorRights& name);
void from_json(const json& j, ChatMember& name);
void to_json(const  json& j, ChatMember& name);
void from_json(const json& j, ChatMemberOwner& name);
void to_json(const  json& j, ChatMemberOwner& name);
void from_json(const json& j, ChatMemberAdministrator& name);
void to_json(const  json& j, ChatMemberAdministrator& name);
void from_json(const json& j, ChatMemberMember& name);
void to_json(const  json& j, ChatMemberMember& name);
void from_json(const json& j, ChatMemberRestricted& name);
void to_json(const  json& j, ChatMemberRestricted& name);
void from_json(const json& j, ChatMemberLeft& name);
void to_json(const  json& j, ChatMemberLeft& name);
void from_json(const json& j, ChatMemberBanned& name);
void to_json(const  json& j, ChatMemberBanned& name);
void from_json(const json& j, ChatMemberUpdated& name);
void to_json(const  json& j, ChatMemberUpdated& name);
void from_json(const json& j, ChatJoinRequest& name);
void to_json(const  json& j, ChatJoinRequest& name);
void from_json(const json& j, ChatPermissions& name);
void to_json(const  json& j, ChatPermissions& name);
void from_json(const json& j, ChatLocation& name);
void to_json(const  json& j, ChatLocation& name);
void from_json(const json& j, ForumTopic& name);
void to_json(const  json& j, ForumTopic& name);
void from_json(const json& j, BotCommand& name);
void to_json(const  json& j, BotCommand& name);
void from_json(const json& j, BotCommandScope& name);
void to_json(const  json& j, BotCommandScope& name);
void from_json(const json& j, BotCommandScopeDefault& name);
void to_json(const  json& j, BotCommandScopeDefault& name);
void from_json(const json& j, BotCommandScopeAllPrivateChats& name);
void to_json(const  json& j, BotCommandScopeAllPrivateChats& name);
void from_json(const json& j, BotCommandScopeAllGroupChats& name);
void to_json(const  json& j, BotCommandScopeAllGroupChats& name);
void from_json(const json& j, BotCommandScopeAllChatAdministrators& name);
void to_json(const  json& j, BotCommandScopeAllChatAdministrators& name);
void from_json(const json& j, BotCommandScopeChat& name);
void to_json(const  json& j, BotCommandScopeChat& name);
void from_json(const json& j, BotCommandScopeChatAdministrators& name);
void to_json(const  json& j, BotCommandScopeChatAdministrators& name);
void from_json(const json& j, BotCommandScopeChatMember& name);
void to_json(const  json& j, BotCommandScopeChatMember& name);
void from_json(const json& j, MenuButton& name);
void to_json(const  json& j, MenuButton& name);
void from_json(const json& j, MenuButtonCommands& name);
void to_json(const  json& j, MenuButtonCommands& name);
void from_json(const json& j, MenuButtonWebApp& name);
void to_json(const  json& j, MenuButtonWebApp& name);
void from_json(const json& j, MenuButtonDefault& name);
void to_json(const  json& j, MenuButtonDefault& name);
void from_json(const json& j, ResponseParameters& name);
void to_json(const  json& j, ResponseParameters& name);
void from_json(const json& j, InputMedia& name);
void to_json(const  json& j, InputMedia& name);
void from_json(const json& j, InputMediaPhoto& name);
void to_json(const  json& j, InputMediaPhoto& name);
void from_json(const json& j, InputMediaVideo& name);
void to_json(const  json& j, InputMediaVideo& name);
void from_json(const json& j, InputMediaAnimation& name);
void to_json(const  json& j, InputMediaAnimation& name);
void from_json(const json& j, InputMediaAudio& name);
void to_json(const  json& j, InputMediaAudio& name);
void from_json(const json& j, InputMediaDocument& name);
void to_json(const  json& j, InputMediaDocument& name);
void from_json(const json& j, InputFile& name);
void to_json(const  json& j, InputFile& name);
void from_json(const json& j, Stickers& name);
void to_json(const  json& j, Stickers& name);
void from_json(const json& j, Sticker& name);
void to_json(const  json& j, Sticker& name);
void from_json(const json& j, StickerSet& name);
void to_json(const  json& j, StickerSet& name);
void from_json(const json& j, MaskPosition& name);
void to_json(const  json& j, MaskPosition& name);
void from_json(const json& j, InlineQuery& name);
void to_json(const  json& j, InlineQuery& name);
void from_json(const json& j, InlineQueryResult& name);
void to_json(const  json& j, InlineQueryResult& name);
void from_json(const json& j, InlineQueryResultArticle& name);
void to_json(const  json& j, InlineQueryResultArticle& name);
void from_json(const json& j, InlineQueryResultPhoto& name);
void to_json(const  json& j, InlineQueryResultPhoto& name);
void from_json(const json& j, InlineQueryResultGif& name);
void to_json(const  json& j, InlineQueryResultGif& name);
void from_json(const json& j, InlineQueryResultMpeg4Gif& name);
void to_json(const  json& j, InlineQueryResultMpeg4Gif& name);
void from_json(const json& j, InlineQueryResultVideo& name);
void to_json(const  json& j, InlineQueryResultVideo& name);
void from_json(const json& j, InlineQueryResultAudio& name);
void to_json(const  json& j, InlineQueryResultAudio& name);
void from_json(const json& j, InlineQueryResultVoice& name);
void to_json(const  json& j, InlineQueryResultVoice& name);
void from_json(const json& j, InlineQueryResultDocument& name);
void to_json(const  json& j, InlineQueryResultDocument& name);
void from_json(const json& j, InlineQueryResultLocation& name);
void to_json(const  json& j, InlineQueryResultLocation& name);
void from_json(const json& j, InlineQueryResultVenue& name);
void to_json(const  json& j, InlineQueryResultVenue& name);
void from_json(const json& j, InlineQueryResultContact& name);
void to_json(const  json& j, InlineQueryResultContact& name);
void from_json(const json& j, InlineQueryResultGame& name);
void to_json(const  json& j, InlineQueryResultGame& name);
void from_json(const json& j, InlineQueryResultCachedPhoto& name);
void to_json(const  json& j, InlineQueryResultCachedPhoto& name);
void from_json(const json& j, InlineQueryResultCachedGif& name);
void to_json(const  json& j, InlineQueryResultCachedGif& name);
void from_json(const json& j, InlineQueryResultCachedMpeg4Gif& name);
void to_json(const  json& j, InlineQueryResultCachedMpeg4Gif& name);
void from_json(const json& j, InlineQueryResultCachedSticker& name);
void to_json(const  json& j, InlineQueryResultCachedSticker& name);
void from_json(const json& j, InlineQueryResultCachedDocument& name);
void to_json(const  json& j, InlineQueryResultCachedDocument& name);
void from_json(const json& j, InlineQueryResultCachedVideo& name);
void to_json(const  json& j, InlineQueryResultCachedVideo& name);
void from_json(const json& j, InlineQueryResultCachedVoice& name);
void to_json(const  json& j, InlineQueryResultCachedVoice& name);
void from_json(const json& j, InlineQueryResultCachedAudio& name);
void to_json(const  json& j, InlineQueryResultCachedAudio& name);
void from_json(const json& j, InputMessageContent& name);
void to_json(const  json& j, InputMessageContent& name);
void from_json(const json& j, InputTextMessageContent& name);
void to_json(const  json& j, InputTextMessageContent& name);
void from_json(const json& j, InputLocationMessageContent& name);
void to_json(const  json& j, InputLocationMessageContent& name);
void from_json(const json& j, InputVenueMessageContent& name);
void to_json(const  json& j, InputVenueMessageContent& name);
void from_json(const json& j, InputContactMessageContent& name);
void to_json(const  json& j, InputContactMessageContent& name);
void from_json(const json& j, InputInvoiceMessageContent& name);
void to_json(const  json& j, InputInvoiceMessageContent& name);
void from_json(const json& j, ChosenInlineResult& name);
void to_json(const  json& j, ChosenInlineResult& name);
void from_json(const json& j, SentWebAppMessage& name);
void to_json(const  json& j, SentWebAppMessage& name);
void from_json(const json& j, Payments& name);
void to_json(const  json& j, Payments& name);
void from_json(const json& j, LabeledPrice& name);
void to_json(const  json& j, LabeledPrice& name);
void from_json(const json& j, Invoice& name);
void to_json(const  json& j, Invoice& name);
void from_json(const json& j, ShippingAddress& name);
void to_json(const  json& j, ShippingAddress& name);
void from_json(const json& j, OrderInfo& name);
void to_json(const  json& j, OrderInfo& name);
void from_json(const json& j, ShippingOption& name);
void to_json(const  json& j, ShippingOption& name);
void from_json(const json& j, SuccessfulPayment& name);
void to_json(const  json& j, SuccessfulPayment& name);
void from_json(const json& j, ShippingQuery& name);
void to_json(const  json& j, ShippingQuery& name);
void from_json(const json& j, PreCheckoutQuery& name);
void to_json(const  json& j, PreCheckoutQuery& name);
void from_json(const json& j, PassportData& name);
void to_json(const  json& j, PassportData& name);
void from_json(const json& j, PassportFile& name);
void to_json(const  json& j, PassportFile& name);
void from_json(const json& j, EncryptedPassportElement& name);
void to_json(const  json& j, EncryptedPassportElement& name);
void from_json(const json& j, EncryptedCredentials& name);
void to_json(const  json& j, EncryptedCredentials& name);
void from_json(const json& j, PassportElementError& name);
void to_json(const  json& j, PassportElementError& name);
void from_json(const json& j, PassportElementErrorDataField& name);
void to_json(const  json& j, PassportElementErrorDataField& name);
void from_json(const json& j, PassportElementErrorFrontSide& name);
void to_json(const  json& j, PassportElementErrorFrontSide& name);
void from_json(const json& j, PassportElementErrorReverseSide& name);
void to_json(const  json& j, PassportElementErrorReverseSide& name);
void from_json(const json& j, PassportElementErrorSelfie& name);
void to_json(const  json& j, PassportElementErrorSelfie& name);
void from_json(const json& j, PassportElementErrorFile& name);
void to_json(const  json& j, PassportElementErrorFile& name);
void from_json(const json& j, PassportElementErrorFiles& name);
void to_json(const  json& j, PassportElementErrorFiles& name);
void from_json(const json& j, PassportElementErrorTranslationFile& name);
void to_json(const  json& j, PassportElementErrorTranslationFile& name);
void from_json(const json& j, PassportElementErrorTranslationFiles& name);
void to_json(const  json& j, PassportElementErrorTranslationFiles& name);
void from_json(const json& j, PassportElementErrorUnspecified& name);
void to_json(const  json& j, PassportElementErrorUnspecified& name);
void from_json(const json& j, Games& name);
void to_json(const  json& j, Games& name);
void from_json(const json& j, Game& name);
void to_json(const  json& j, Game& name);
void from_json(const json& j, CallbackGame& name);
void to_json(const  json& j, CallbackGame& name);
void from_json(const json& j, GameHighScore& name);
void to_json(const  json& j, GameHighScore& name);
void from_json(const json& j, User& name){
	name.id=j.at("id").get<int>();
	name.is_bot=j.at("is_bot").get<bool>();
	name.first_name=j.at("first_name").get<std::string>();
	name.last_name=j.at("last_name").get<std::string>();
	name.username=j.at("username").get<std::string>();
	name.language_code=j.at("language_code").get<std::string>();
	name.is_premium=j.at("is_premium").get<bool>();
	name.added_to_attachment_menu=j.at("added_to_attachment_menu").get<bool>();
	name.can_join_groups=j.at("can_join_groups").get<bool>();
	name.can_read_all_group_messages=j.at("can_read_all_group_messages").get<bool>();
	name.supports_inline_queries=j.at("supports_inline_queries").get<bool>();
}
void to_json(const json& j, User& name){}
void from_json(const json& j, Chat& name){
	name.id=j.at("id").get<int>();
	name.type=j.at("type").get<std::string>();
	name.title=j.at("title").get<std::string>();
	name.username=j.at("username").get<std::string>();
	name.first_name=j.at("first_name").get<std::string>();
	name.last_name=j.at("last_name").get<std::string>();
	name.is_forum=j.at("is_forum").get<bool>();
	name.photo=std::make_shared<ChatPhoto >(j.at("photo").get<ChatPhoto>());
	name.active_usernames=j.at("active_usernames").get<std::string>();
	name.emoji_status_custom_emoji_id=j.at("emoji_status_custom_emoji_id").get<std::string>();
	name.bio=j.at("bio").get<std::string>();
	name.has_private_forwards=j.at("has_private_forwards").get<bool>();
	name.has_restricted_voice_and_video_messages=j.at("has_restricted_voice_and_video_messages").get<bool>();
	name.join_to_send_messages=j.at("join_to_send_messages").get<bool>();
	name.join_by_request=j.at("join_by_request").get<bool>();
	name.description=j.at("description").get<std::string>();
	name.invite_link=j.at("invite_link").get<std::string>();
	name.pinned_message=std::make_shared<Message >(j.at("pinned_message").get<Message>());
	name.permissions=std::make_shared<ChatPermissions >(j.at("permissions").get<ChatPermissions>());
	name.slow_mode_delay=j.at("slow_mode_delay").get<int>();
	name.message_auto_delete_time=j.at("message_auto_delete_time").get<int>();
	name.has_aggressive_anti_spam_enabled=j.at("has_aggressive_anti_spam_enabled").get<bool>();
	name.has_hidden_members=j.at("has_hidden_members").get<bool>();
	name.has_protected_content=j.at("has_protected_content").get<bool>();
	name.sticker_set_name=j.at("sticker_set_name").get<std::string>();
	name.can_set_sticker_set=j.at("can_set_sticker_set").get<bool>();
	name.linked_chat_id=j.at("linked_chat_id").get<int>();
	name.location=std::make_shared<ChatLocation >(j.at("location").get<ChatLocation>());
}
void to_json(const json& j, Chat& name){}
void from_json(const json& j, Message& name){
	name.message_id=j.at("message_id").get<int>();
	name.message_thread_id=j.at("message_thread_id").get<int>();
	name.from=std::make_shared<User >(j.at("from").get<User>());
	name.sender_chat=std::make_shared<Chat >(j.at("sender_chat").get<Chat>());
	name.date=j.at("date").get<int>();
	name.chat=std::make_shared<Chat >(j.at("chat").get<Chat>());
	name.forward_from=std::make_shared<User >(j.at("forward_from").get<User>());
	name.forward_from_chat=std::make_shared<Chat >(j.at("forward_from_chat").get<Chat>());
	name.forward_from_message_id=j.at("forward_from_message_id").get<int>();
	name.forward_signature=j.at("forward_signature").get<std::string>();
	name.forward_sender_name=j.at("forward_sender_name").get<std::string>();
	name.forward_date=j.at("forward_date").get<int>();
	name.is_topic_message=j.at("is_topic_message").get<bool>();
	name.is_automatic_forward=j.at("is_automatic_forward").get<bool>();
	name.reply_to_message=std::make_shared<Message >(j.at("reply_to_message").get<Message>());
	name.via_bot=std::make_shared<User >(j.at("via_bot").get<User>());
	name.edit_date=j.at("edit_date").get<int>();
	name.has_protected_content=j.at("has_protected_content").get<bool>();
	name.media_group_id=j.at("media_group_id").get<std::string>();
	name.author_signature=j.at("author_signature").get<std::string>();
	name.text=j.at("text").get<std::string>();
    std::vector<std::shared_ptr<std::vector<MessageEntity>>> p;
for(auto a:j.at("entities").get<std::vector<std::vector<MessageEntity>>>()){
p.push_back(std::make_shared<std::vector<MessageEntity>>(a));
    }	name.entities=std::make_shared<std::vector<MessageEntity> >(j.at("entities").get<std::vector<MessageEntity>>());
	name.animation=std::make_shared<Animation >(j.at("animation").get<Animation>());
	name.audio=std::make_shared<Audio >(j.at("audio").get<Audio>());
	name.document=std::make_shared<Document >(j.at("document").get<Document>());
    std::vector<std::shared_ptr<std::vector<PhotoSize>>> p;
for(auto a:j.at("photo").get<std::vector<std::vector<PhotoSize>>>()){
p.push_back(std::make_shared<std::vector<PhotoSize>>(a));
    }	name.photo=std::make_shared<std::vector<PhotoSize> >(j.at("photo").get<std::vector<PhotoSize>>());
	name.sticker=std::make_shared<Sticker >(j.at("sticker").get<Sticker>());
	name.video=std::make_shared<Video >(j.at("video").get<Video>());
	name.video_note=std::make_shared<VideoNote >(j.at("video_note").get<VideoNote>());
	name.voice=std::make_shared<Voice >(j.at("voice").get<Voice>());
	name.caption=j.at("caption").get<std::string>();
    std::vector<std::shared_ptr<std::vector<MessageEntity>>> p;
for(auto a:j.at("caption_entities").get<std::vector<std::vector<MessageEntity>>>()){
p.push_back(std::make_shared<std::vector<MessageEntity>>(a));
    }	name.caption_entities=std::make_shared<std::vector<MessageEntity> >(j.at("caption_entities").get<std::vector<MessageEntity>>());
	name.has_media_spoiler=j.at("has_media_spoiler").get<bool>();
	name.contact=std::make_shared<Contact >(j.at("contact").get<Contact>());
	name.dice=std::make_shared<Dice >(j.at("dice").get<Dice>());
	name.game=std::make_shared<Game >(j.at("game").get<Game>());
	name.poll=std::make_shared<Poll >(j.at("poll").get<Poll>());
	name.venue=std::make_shared<Venue >(j.at("venue").get<Venue>());
	name.location=std::make_shared<Location >(j.at("location").get<Location>());
    std::vector<std::shared_ptr<std::vector<User>>> p;
for(auto a:j.at("new_chat_members").get<std::vector<std::vector<User>>>()){
p.push_back(std::make_shared<std::vector<User>>(a));
    }	name.new_chat_members=std::make_shared<std::vector<User> >(j.at("new_chat_members").get<std::vector<User>>());
	name.left_chat_member=std::make_shared<User >(j.at("left_chat_member").get<User>());
	name.new_chat_title=j.at("new_chat_title").get<std::string>();
    std::vector<std::shared_ptr<std::vector<PhotoSize>>> p;
for(auto a:j.at("new_chat_photo").get<std::vector<std::vector<PhotoSize>>>()){
p.push_back(std::make_shared<std::vector<PhotoSize>>(a));
    }	name.new_chat_photo=std::make_shared<std::vector<PhotoSize> >(j.at("new_chat_photo").get<std::vector<PhotoSize>>());
	name.delete_chat_photo=j.at("delete_chat_photo").get<bool>();
	name.group_chat_created=j.at("group_chat_created").get<bool>();
	name.supergroup_chat_created=j.at("supergroup_chat_created").get<bool>();
	name.channel_chat_created=j.at("channel_chat_created").get<bool>();
	name.message_auto_delete_timer_changed=std::make_shared<MessageAutoDeleteTimerChanged >(j.at("message_auto_delete_timer_changed").get<MessageAutoDeleteTimerChanged>());
	name.migrate_to_chat_id=j.at("migrate_to_chat_id").get<int>();
	name.migrate_from_chat_id=j.at("migrate_from_chat_id").get<int>();
	name.pinned_message=std::make_shared<Message >(j.at("pinned_message").get<Message>());
	name.invoice=std::make_shared<Invoice >(j.at("invoice").get<Invoice>());
	name.successful_payment=std::make_shared<SuccessfulPayment >(j.at("successful_payment").get<SuccessfulPayment>());
	name.user_shared=std::make_shared<UserShared >(j.at("user_shared").get<UserShared>());
	name.chat_shared=std::make_shared<ChatShared >(j.at("chat_shared").get<ChatShared>());
	name.connected_website=j.at("connected_website").get<std::string>();
	name.write_access_allowed=std::make_shared<WriteAccessAllowed >(j.at("write_access_allowed").get<WriteAccessAllowed>());
	name.passport_data=std::make_shared<PassportData >(j.at("passport_data").get<PassportData>());
	name.proximity_alert_triggered=std::make_shared<ProximityAlertTriggered >(j.at("proximity_alert_triggered").get<ProximityAlertTriggered>());
	name.forum_topic_created=std::make_shared<ForumTopicCreated >(j.at("forum_topic_created").get<ForumTopicCreated>());
	name.forum_topic_edited=std::make_shared<ForumTopicEdited >(j.at("forum_topic_edited").get<ForumTopicEdited>());
	name.forum_topic_closed=std::make_shared<ForumTopicClosed >(j.at("forum_topic_closed").get<ForumTopicClosed>());
	name.forum_topic_reopened=std::make_shared<ForumTopicReopened >(j.at("forum_topic_reopened").get<ForumTopicReopened>());
	name.general_forum_topic_hidden=std::make_shared<GeneralForumTopicHidden >(j.at("general_forum_topic_hidden").get<GeneralForumTopicHidden>());
	name.general_forum_topic_unhidden=std::make_shared<GeneralForumTopicUnhidden >(j.at("general_forum_topic_unhidden").get<GeneralForumTopicUnhidden>());
	name.video_chat_scheduled=std::make_shared<VideoChatScheduled >(j.at("video_chat_scheduled").get<VideoChatScheduled>());
	name.video_chat_started=std::make_shared<VideoChatStarted >(j.at("video_chat_started").get<VideoChatStarted>());
	name.video_chat_ended=std::make_shared<VideoChatEnded >(j.at("video_chat_ended").get<VideoChatEnded>());
	name.video_chat_participants_invited=std::make_shared<VideoChatParticipantsInvited >(j.at("video_chat_participants_invited").get<VideoChatParticipantsInvited>());
	name.web_app_data=std::make_shared<WebAppData >(j.at("web_app_data").get<WebAppData>());
	name.reply_markup=std::make_shared<InlineKeyboardMarkup >(j.at("reply_markup").get<InlineKeyboardMarkup>());
}
void to_json(const json& j, Message& name){}
void from_json(const json& j, MessageId& name){
	name.message_id=j.at("message_id").get<int>();
}
void to_json(const json& j, MessageId& name){}
void from_json(const json& j, MessageEntity& name){
	name.type=j.at("type").get<std::string>();
	name.offset=j.at("offset").get<int>();
	name.length=j.at("length").get<int>();
	name.url=j.at("url").get<std::string>();
	name.user=std::make_shared<User >(j.at("user").get<User>());
	name.language=j.at("language").get<std::string>();
	name.custom_emoji_id=j.at("custom_emoji_id").get<std::string>();
}
void to_json(const json& j, MessageEntity& name){}
void from_json(const json& j, PhotoSize& name){
	name.file_id=j.at("file_id").get<std::string>();
	name.file_unique_id=j.at("file_unique_id").get<std::string>();
	name.width=j.at("width").get<int>();
	name.height=j.at("height").get<int>();
	name.file_size=j.at("file_size").get<int>();
}
void to_json(const json& j, PhotoSize& name){}
void from_json(const json& j, Animation& name){
	name.file_id=j.at("file_id").get<std::string>();
	name.file_unique_id=j.at("file_unique_id").get<std::string>();
	name.width=j.at("width").get<int>();
	name.height=j.at("height").get<int>();
	name.duration=j.at("duration").get<int>();
	name.thumb=std::make_shared<PhotoSize >(j.at("thumb").get<PhotoSize>());
	name.file_name=j.at("file_name").get<std::string>();
	name.mime_type=j.at("mime_type").get<std::string>();
	name.file_size=j.at("file_size").get<int>();
}
void to_json(const json& j, Animation& name){}
void from_json(const json& j, Audio& name){
	name.file_id=j.at("file_id").get<std::string>();
	name.file_unique_id=j.at("file_unique_id").get<std::string>();
	name.duration=j.at("duration").get<int>();
	name.performer=j.at("performer").get<std::string>();
	name.title=j.at("title").get<std::string>();
	name.file_name=j.at("file_name").get<std::string>();
	name.mime_type=j.at("mime_type").get<std::string>();
	name.file_size=j.at("file_size").get<int>();
	name.thumb=std::make_shared<PhotoSize >(j.at("thumb").get<PhotoSize>());
}
void to_json(const json& j, Audio& name){}
void from_json(const json& j, Document& name){
	name.file_id=j.at("file_id").get<std::string>();
	name.file_unique_id=j.at("file_unique_id").get<std::string>();
	name.thumb=std::make_shared<PhotoSize >(j.at("thumb").get<PhotoSize>());
	name.file_name=j.at("file_name").get<std::string>();
	name.mime_type=j.at("mime_type").get<std::string>();
	name.file_size=j.at("file_size").get<int>();
}
void to_json(const json& j, Document& name){}
void from_json(const json& j, Video& name){
	name.file_id=j.at("file_id").get<std::string>();
	name.file_unique_id=j.at("file_unique_id").get<std::string>();
	name.width=j.at("width").get<int>();
	name.height=j.at("height").get<int>();
	name.duration=j.at("duration").get<int>();
	name.thumb=std::make_shared<PhotoSize >(j.at("thumb").get<PhotoSize>());
	name.file_name=j.at("file_name").get<std::string>();
	name.mime_type=j.at("mime_type").get<std::string>();
	name.file_size=j.at("file_size").get<int>();
}
void to_json(const json& j, Video& name){}
void from_json(const json& j, VideoNote& name){
	name.file_id=j.at("file_id").get<std::string>();
	name.file_unique_id=j.at("file_unique_id").get<std::string>();
	name.length=j.at("length").get<int>();
	name.duration=j.at("duration").get<int>();
	name.thumb=std::make_shared<PhotoSize >(j.at("thumb").get<PhotoSize>());
	name.file_size=j.at("file_size").get<int>();
}
void to_json(const json& j, VideoNote& name){}
void from_json(const json& j, Voice& name){
	name.file_id=j.at("file_id").get<std::string>();
	name.file_unique_id=j.at("file_unique_id").get<std::string>();
	name.duration=j.at("duration").get<int>();
	name.mime_type=j.at("mime_type").get<std::string>();
	name.file_size=j.at("file_size").get<int>();
}
void to_json(const json& j, Voice& name){}
void from_json(const json& j, Contact& name){
	name.phone_number=j.at("phone_number").get<std::string>();
	name.first_name=j.at("first_name").get<std::string>();
	name.last_name=j.at("last_name").get<std::string>();
	name.user_id=j.at("user_id").get<int>();
	name.vcard=j.at("vcard").get<std::string>();
}
void to_json(const json& j, Contact& name){}
void from_json(const json& j, Dice& name){
	name.emoji=j.at("emoji").get<std::string>();
	name.value=j.at("value").get<int>();
}
void to_json(const json& j, Dice& name){}
void from_json(const json& j, PollOption& name){
	name.text=j.at("text").get<std::string>();
	name.voter_count=j.at("voter_count").get<int>();
}
void to_json(const json& j, PollOption& name){}
void from_json(const json& j, PollAnswer& name){
	name.poll_id=j.at("poll_id").get<std::string>();
	name.user=std::make_shared<User >(j.at("user").get<User>());
	name.option_ids=j.at("option_ids").get<int>();
}
void to_json(const json& j, PollAnswer& name){}
void from_json(const json& j, Poll& name){
	name.id=j.at("id").get<std::string>();
	name.question=j.at("question").get<std::string>();
    std::vector<std::shared_ptr<std::vector<PollOption>>> p;
for(auto a:j.at("options").get<std::vector<std::vector<PollOption>>>()){
p.push_back(std::make_shared<std::vector<PollOption>>(a));
    }	name.options=std::make_shared<std::vector<PollOption> >(j.at("options").get<std::vector<PollOption>>());
	name.total_voter_count=j.at("total_voter_count").get<int>();
	name.is_closed=j.at("is_closed").get<bool>();
	name.is_anonymous=j.at("is_anonymous").get<bool>();
	name.type=j.at("type").get<std::string>();
	name.allows_multiple_answers=j.at("allows_multiple_answers").get<bool>();
	name.correct_option_id=j.at("correct_option_id").get<int>();
	name.explanation=j.at("explanation").get<std::string>();
    std::vector<std::shared_ptr<std::vector<MessageEntity>>> p;
for(auto a:j.at("explanation_entities").get<std::vector<std::vector<MessageEntity>>>()){
p.push_back(std::make_shared<std::vector<MessageEntity>>(a));
    }	name.explanation_entities=std::make_shared<std::vector<MessageEntity> >(j.at("explanation_entities").get<std::vector<MessageEntity>>());
	name.open_period=j.at("open_period").get<int>();
	name.close_date=j.at("close_date").get<int>();
}
void to_json(const json& j, Poll& name){}
void from_json(const json& j, Location& name){
	name.longitude=j.at("longitude").get<float>();
	name.latitude=j.at("latitude").get<float>();
	name.horizontal_accuracy=j.at("horizontal_accuracy").get<float>();
	name.live_period=j.at("live_period").get<int>();
	name.heading=j.at("heading").get<int>();
	name.proximity_alert_radius=j.at("proximity_alert_radius").get<int>();
}
void to_json(const json& j, Location& name){}
void from_json(const json& j, Venue& name){
	name.location=std::make_shared<Location >(j.at("location").get<Location>());
	name.title=j.at("title").get<std::string>();
	name.address=j.at("address").get<std::string>();
	name.foursquare_id=j.at("foursquare_id").get<std::string>();
	name.foursquare_type=j.at("foursquare_type").get<std::string>();
	name.google_place_id=j.at("google_place_id").get<std::string>();
	name.google_place_type=j.at("google_place_type").get<std::string>();
}
void to_json(const json& j, Venue& name){}
void from_json(const json& j, WebAppData& name){
	name.data=j.at("data").get<std::string>();
	name.button_text=j.at("button_text").get<std::string>();
}
void to_json(const json& j, WebAppData& name){}
void from_json(const json& j, ProximityAlertTriggered& name){
	name.traveler=std::make_shared<User >(j.at("traveler").get<User>());
	name.watcher=std::make_shared<User >(j.at("watcher").get<User>());
	name.distance=j.at("distance").get<int>();
}
void to_json(const json& j, ProximityAlertTriggered& name){}
void from_json(const json& j, MessageAutoDeleteTimerChanged& name){
	name.message_auto_delete_time=j.at("message_auto_delete_time").get<int>();
}
void to_json(const json& j, MessageAutoDeleteTimerChanged& name){}
void from_json(const json& j, ForumTopicCreated& name){
	name.name=j.at("name").get<std::string>();
	name.icon_color=j.at("icon_color").get<int>();
	name.icon_custom_emoji_id=j.at("icon_custom_emoji_id").get<std::string>();
}
void to_json(const json& j, ForumTopicCreated& name){}
void from_json(const json& j, ForumTopicClosed& name){
}
void to_json(const json& j, ForumTopicClosed& name){}
void from_json(const json& j, ForumTopicEdited& name){
	name.name=j.at("name").get<std::string>();
	name.icon_custom_emoji_id=j.at("icon_custom_emoji_id").get<std::string>();
}
void to_json(const json& j, ForumTopicEdited& name){}
void from_json(const json& j, ForumTopicReopened& name){
}
void to_json(const json& j, ForumTopicReopened& name){}
void from_json(const json& j, GeneralForumTopicHidden& name){
}
void to_json(const json& j, GeneralForumTopicHidden& name){}
void from_json(const json& j, GeneralForumTopicUnhidden& name){
}
void to_json(const json& j, GeneralForumTopicUnhidden& name){}
void from_json(const json& j, UserShared& name){
	name.request_id=j.at("request_id").get<int>();
	name.user_id=j.at("user_id").get<int>();
}
void to_json(const json& j, UserShared& name){}
void from_json(const json& j, ChatShared& name){
	name.request_id=j.at("request_id").get<int>();
	name.chat_id=j.at("chat_id").get<int>();
}
void to_json(const json& j, ChatShared& name){}
void from_json(const json& j, WriteAccessAllowed& name){
}
void to_json(const json& j, WriteAccessAllowed& name){}
void from_json(const json& j, VideoChatScheduled& name){
	name.start_date=j.at("start_date").get<int>();
}
void to_json(const json& j, VideoChatScheduled& name){}
void from_json(const json& j, VideoChatStarted& name){
}
void to_json(const json& j, VideoChatStarted& name){}
void from_json(const json& j, VideoChatEnded& name){
	name.duration=j.at("duration").get<int>();
}
void to_json(const json& j, VideoChatEnded& name){}
void from_json(const json& j, VideoChatParticipantsInvited& name){
    std::vector<std::shared_ptr<std::vector<User>>> p;
for(auto a:j.at("users").get<std::vector<std::vector<User>>>()){
p.push_back(std::make_shared<std::vector<User>>(a));
    }	name.users=std::make_shared<std::vector<User> >(j.at("users").get<std::vector<User>>());
}
void to_json(const json& j, VideoChatParticipantsInvited& name){}
void from_json(const json& j, UserProfilePhotos& name){
	name.total_count=j.at("total_count").get<int>();
    std::vector<std::shared_ptr<std::vector<PhotoSize>>> p;
for(auto a:j.at("photos").get<std::vector<std::vector<PhotoSize>>>()){
p.push_back(std::make_shared<std::vector<PhotoSize>>(a));
    }	name.photos=std::make_shared<std::vector<PhotoSize> >(j.at("photos").get<std::vector<PhotoSize>>());
}
void to_json(const json& j, UserProfilePhotos& name){}
void from_json(const json& j, File& name){
	name.file_id=j.at("file_id").get<std::string>();
	name.file_unique_id=j.at("file_unique_id").get<std::string>();
	name.file_size=j.at("file_size").get<int>();
	name.file_path=j.at("file_path").get<std::string>();
}
void to_json(const json& j, File& name){}
void from_json(const json& j, WebAppInfo& name){
	name.url=j.at("url").get<std::string>();
}
void to_json(const json& j, WebAppInfo& name){}
void from_json(const json& j, ReplyKeyboardMarkup& name){
    std::vector<std::shared_ptr<std::vector<KeyboardButton>>> p;
for(auto a:j.at("keyboard").get<std::vector<std::vector<KeyboardButton>>>()){
p.push_back(std::make_shared<std::vector<KeyboardButton>>(a));
    }	name.keyboard=std::make_shared<std::vector<KeyboardButton> >(j.at("keyboard").get<std::vector<KeyboardButton>>());
	name.is_persistent=j.at("is_persistent").get<bool>();
	name.resize_keyboard=j.at("resize_keyboard").get<bool>();
	name.one_time_keyboard=j.at("one_time_keyboard").get<bool>();
	name.input_field_placeholder=j.at("input_field_placeholder").get<std::string>();
	name.selective=j.at("selective").get<bool>();
}
void to_json(const json& j, ReplyKeyboardMarkup& name){}
void from_json(const json& j, KeyboardButton& name){
	name.text=j.at("text").get<std::string>();
	name.request_user=std::make_shared<KeyboardButtonRequestUser >(j.at("request_user").get<KeyboardButtonRequestUser>());
	name.request_chat=std::make_shared<KeyboardButtonRequestChat >(j.at("request_chat").get<KeyboardButtonRequestChat>());
	name.request_contact=j.at("request_contact").get<bool>();
	name.request_location=j.at("request_location").get<bool>();
	name.request_poll=std::make_shared<KeyboardButtonPollType >(j.at("request_poll").get<KeyboardButtonPollType>());
	name.web_app=std::make_shared<WebAppInfo >(j.at("web_app").get<WebAppInfo>());
}
void to_json(const json& j, KeyboardButton& name){}
void from_json(const json& j, KeyboardButtonRequestUser& name){
	name.request_id=j.at("request_id").get<int>();
	name.user_is_bot=j.at("user_is_bot").get<bool>();
	name.user_is_premium=j.at("user_is_premium").get<bool>();
}
void to_json(const json& j, KeyboardButtonRequestUser& name){}
void from_json(const json& j, KeyboardButtonRequestChat& name){
	name.request_id=j.at("request_id").get<int>();
	name.chat_is_channel=j.at("chat_is_channel").get<bool>();
	name.chat_is_forum=j.at("chat_is_forum").get<bool>();
	name.chat_has_username=j.at("chat_has_username").get<bool>();
	name.chat_is_created=j.at("chat_is_created").get<bool>();
	name.user_administrator_rights=std::make_shared<ChatAdministratorRights >(j.at("user_administrator_rights").get<ChatAdministratorRights>());
	name.bot_administrator_rights=std::make_shared<ChatAdministratorRights >(j.at("bot_administrator_rights").get<ChatAdministratorRights>());
	name.bot_is_member=j.at("bot_is_member").get<bool>();
}
void to_json(const json& j, KeyboardButtonRequestChat& name){}
void from_json(const json& j, KeyboardButtonPollType& name){
	name.type=j.at("type").get<std::string>();
}
void to_json(const json& j, KeyboardButtonPollType& name){}
void from_json(const json& j, ReplyKeyboardRemove& name){
}
void to_json(const json& j, ReplyKeyboardRemove& name){}
void from_json(const json& j, InlineKeyboardMarkup& name){
    std::vector<std::shared_ptr<std::vector<InlineKeyboardButton>>> p;
for(auto a:j.at("inline_keyboard").get<std::vector<std::vector<InlineKeyboardButton>>>()){
p.push_back(std::make_shared<std::vector<InlineKeyboardButton>>(a));
    }	name.inline_keyboard=std::make_shared<std::vector<InlineKeyboardButton> >(j.at("inline_keyboard").get<std::vector<InlineKeyboardButton>>());
}
void to_json(const json& j, InlineKeyboardMarkup& name){}
void from_json(const json& j, InlineKeyboardButton& name){
	name.text=j.at("text").get<std::string>();
	name.url=j.at("url").get<std::string>();
	name.callback_data=j.at("callback_data").get<std::string>();
	name.web_app=std::make_shared<WebAppInfo >(j.at("web_app").get<WebAppInfo>());
	name.login_url=std::make_shared<LoginUrl >(j.at("login_url").get<LoginUrl>());
	name.switch_inline_query=j.at("switch_inline_query").get<std::string>();
	name.switch_inline_query_current_chat=j.at("switch_inline_query_current_chat").get<std::string>();
	name.callback_game=std::make_shared<CallbackGame >(j.at("callback_game").get<CallbackGame>());
	name.pay=j.at("pay").get<bool>();
}
void to_json(const json& j, InlineKeyboardButton& name){}
void from_json(const json& j, LoginUrl& name){
	name.url=j.at("url").get<std::string>();
	name.forward_text=j.at("forward_text").get<std::string>();
	name.bot_username=j.at("bot_username").get<std::string>();
	name.request_write_access=j.at("request_write_access").get<bool>();
}
void to_json(const json& j, LoginUrl& name){}
void from_json(const json& j, CallbackQuery& name){
	name.id=j.at("id").get<std::string>();
	name.from=std::make_shared<User >(j.at("from").get<User>());
	name.message=std::make_shared<Message >(j.at("message").get<Message>());
	name.inline_message_id=j.at("inline_message_id").get<std::string>();
	name.chat_instance=j.at("chat_instance").get<std::string>();
	name.data=j.at("data").get<std::string>();
	name.game_short_name=j.at("game_short_name").get<std::string>();
}
void to_json(const json& j, CallbackQuery& name){}
void from_json(const json& j, ForceReply& name){
}
void to_json(const json& j, ForceReply& name){}
void from_json(const json& j, ChatPhoto& name){
	name.small_file_id=j.at("small_file_id").get<std::string>();
	name.small_file_unique_id=j.at("small_file_unique_id").get<std::string>();
	name.big_file_id=j.at("big_file_id").get<std::string>();
	name.big_file_unique_id=j.at("big_file_unique_id").get<std::string>();
}
void to_json(const json& j, ChatPhoto& name){}
void from_json(const json& j, ChatInviteLink& name){
	name.invite_link=j.at("invite_link").get<std::string>();
	name.creator=std::make_shared<User >(j.at("creator").get<User>());
	name.creates_join_request=j.at("creates_join_request").get<bool>();
	name.is_primary=j.at("is_primary").get<bool>();
	name.is_revoked=j.at("is_revoked").get<bool>();
	name.name=j.at("name").get<std::string>();
	name.expire_date=j.at("expire_date").get<int>();
	name.member_limit=j.at("member_limit").get<int>();
	name.pending_join_request_count=j.at("pending_join_request_count").get<int>();
}
void to_json(const json& j, ChatInviteLink& name){}
void from_json(const json& j, ChatAdministratorRights& name){
	name.is_anonymous=j.at("is_anonymous").get<bool>();
	name.can_manage_chat=j.at("can_manage_chat").get<bool>();
	name.can_delete_messages=j.at("can_delete_messages").get<bool>();
	name.can_manage_video_chats=j.at("can_manage_video_chats").get<bool>();
	name.can_restrict_members=j.at("can_restrict_members").get<bool>();
	name.can_promote_members=j.at("can_promote_members").get<bool>();
	name.can_change_info=j.at("can_change_info").get<bool>();
	name.can_invite_users=j.at("can_invite_users").get<bool>();
	name.can_post_messages=j.at("can_post_messages").get<bool>();
	name.can_edit_messages=j.at("can_edit_messages").get<bool>();
	name.can_pin_messages=j.at("can_pin_messages").get<bool>();
	name.can_manage_topics=j.at("can_manage_topics").get<bool>();
}
void to_json(const json& j, ChatAdministratorRights& name){}
void from_json(const json& j, ChatMember& name){
	name.status=j.at("status").get<std::string>();
	name.user=std::make_shared<User >(j.at("user").get<User>());
	name.is_anonymous=j.at("is_anonymous").get<bool>();
	name.custom_title=j.at("custom_title").get<std::string>();
}
void to_json(const json& j, ChatMember& name){}
void from_json(const json& j, ChatMemberOwner& name){
	name.status=j.at("status").get<std::string>();
	name.user=std::make_shared<User >(j.at("user").get<User>());
	name.is_anonymous=j.at("is_anonymous").get<bool>();
	name.custom_title=j.at("custom_title").get<std::string>();
}
void to_json(const json& j, ChatMemberOwner& name){}
void from_json(const json& j, ChatMemberAdministrator& name){
	name.status=j.at("status").get<std::string>();
	name.user=std::make_shared<User >(j.at("user").get<User>());
	name.can_be_edited=j.at("can_be_edited").get<bool>();
	name.is_anonymous=j.at("is_anonymous").get<bool>();
	name.can_manage_chat=j.at("can_manage_chat").get<bool>();
	name.can_delete_messages=j.at("can_delete_messages").get<bool>();
	name.can_manage_video_chats=j.at("can_manage_video_chats").get<bool>();
	name.can_restrict_members=j.at("can_restrict_members").get<bool>();
	name.can_promote_members=j.at("can_promote_members").get<bool>();
	name.can_change_info=j.at("can_change_info").get<bool>();
	name.can_invite_users=j.at("can_invite_users").get<bool>();
	name.can_post_messages=j.at("can_post_messages").get<bool>();
	name.can_edit_messages=j.at("can_edit_messages").get<bool>();
	name.can_pin_messages=j.at("can_pin_messages").get<bool>();
	name.can_manage_topics=j.at("can_manage_topics").get<bool>();
	name.custom_title=j.at("custom_title").get<std::string>();
}
void to_json(const json& j, ChatMemberAdministrator& name){}
void from_json(const json& j, ChatMemberMember& name){
	name.status=j.at("status").get<std::string>();
	name.user=std::make_shared<User >(j.at("user").get<User>());
}
void to_json(const json& j, ChatMemberMember& name){}
void from_json(const json& j, ChatMemberRestricted& name){
	name.status=j.at("status").get<std::string>();
	name.user=std::make_shared<User >(j.at("user").get<User>());
	name.is_member=j.at("is_member").get<bool>();
	name.can_send_messages=j.at("can_send_messages").get<bool>();
	name.can_send_audios=j.at("can_send_audios").get<bool>();
	name.can_send_documents=j.at("can_send_documents").get<bool>();
	name.can_send_photos=j.at("can_send_photos").get<bool>();
	name.can_send_videos=j.at("can_send_videos").get<bool>();
	name.can_send_video_notes=j.at("can_send_video_notes").get<bool>();
	name.can_send_voice_notes=j.at("can_send_voice_notes").get<bool>();
	name.can_send_polls=j.at("can_send_polls").get<bool>();
	name.can_send_other_messages=j.at("can_send_other_messages").get<bool>();
	name.can_add_web_page_previews=j.at("can_add_web_page_previews").get<bool>();
	name.can_change_info=j.at("can_change_info").get<bool>();
	name.can_invite_users=j.at("can_invite_users").get<bool>();
	name.can_pin_messages=j.at("can_pin_messages").get<bool>();
	name.can_manage_topics=j.at("can_manage_topics").get<bool>();
	name.until_date=j.at("until_date").get<int>();
}
void to_json(const json& j, ChatMemberRestricted& name){}
void from_json(const json& j, ChatMemberLeft& name){
	name.status=j.at("status").get<std::string>();
	name.user=std::make_shared<User >(j.at("user").get<User>());
}
void to_json(const json& j, ChatMemberLeft& name){}
void from_json(const json& j, ChatMemberBanned& name){
	name.status=j.at("status").get<std::string>();
	name.user=std::make_shared<User >(j.at("user").get<User>());
	name.until_date=j.at("until_date").get<int>();
}
void to_json(const json& j, ChatMemberBanned& name){}
void from_json(const json& j, ChatMemberUpdated& name){
	name.chat=std::make_shared<Chat >(j.at("chat").get<Chat>());
	name.from=std::make_shared<User >(j.at("from").get<User>());
	name.date=j.at("date").get<int>();
	name.old_chat_member=std::make_shared<ChatMember >(j.at("old_chat_member").get<ChatMember>());
	name.new_chat_member=std::make_shared<ChatMember >(j.at("new_chat_member").get<ChatMember>());
	name.invite_link=std::make_shared<ChatInviteLink >(j.at("invite_link").get<ChatInviteLink>());
}
void to_json(const json& j, ChatMemberUpdated& name){}
void from_json(const json& j, ChatJoinRequest& name){
	name.chat=std::make_shared<Chat >(j.at("chat").get<Chat>());
	name.from=std::make_shared<User >(j.at("from").get<User>());
	name.user_chat_id=j.at("user_chat_id").get<int>();
	name.date=j.at("date").get<int>();
	name.bio=j.at("bio").get<std::string>();
	name.invite_link=std::make_shared<ChatInviteLink >(j.at("invite_link").get<ChatInviteLink>());
}
void to_json(const json& j, ChatJoinRequest& name){}
void from_json(const json& j, ChatPermissions& name){
	name.can_send_messages=j.at("can_send_messages").get<bool>();
	name.can_send_audios=j.at("can_send_audios").get<bool>();
	name.can_send_documents=j.at("can_send_documents").get<bool>();
	name.can_send_photos=j.at("can_send_photos").get<bool>();
	name.can_send_videos=j.at("can_send_videos").get<bool>();
	name.can_send_video_notes=j.at("can_send_video_notes").get<bool>();
	name.can_send_voice_notes=j.at("can_send_voice_notes").get<bool>();
	name.can_send_polls=j.at("can_send_polls").get<bool>();
	name.can_send_other_messages=j.at("can_send_other_messages").get<bool>();
	name.can_add_web_page_previews=j.at("can_add_web_page_previews").get<bool>();
	name.can_change_info=j.at("can_change_info").get<bool>();
	name.can_invite_users=j.at("can_invite_users").get<bool>();
	name.can_pin_messages=j.at("can_pin_messages").get<bool>();
	name.can_manage_topics=j.at("can_manage_topics").get<bool>();
}
void to_json(const json& j, ChatPermissions& name){}
void from_json(const json& j, ChatLocation& name){
	name.location=std::make_shared<Location >(j.at("location").get<Location>());
	name.address=j.at("address").get<std::string>();
}
void to_json(const json& j, ChatLocation& name){}
void from_json(const json& j, ForumTopic& name){
	name.message_thread_id=j.at("message_thread_id").get<int>();
	name.name=j.at("name").get<std::string>();
	name.icon_color=j.at("icon_color").get<int>();
	name.icon_custom_emoji_id=j.at("icon_custom_emoji_id").get<std::string>();
}
void to_json(const json& j, ForumTopic& name){}
void from_json(const json& j, BotCommand& name){
	name.command=j.at("command").get<std::string>();
	name.description=j.at("description").get<std::string>();
}
void to_json(const json& j, BotCommand& name){}
void from_json(const json& j, BotCommandScope& name){
	name.type=j.at("type").get<std::string>();
}
void to_json(const json& j, BotCommandScope& name){}
void from_json(const json& j, BotCommandScopeDefault& name){
	name.type=j.at("type").get<std::string>();
}
void to_json(const json& j, BotCommandScopeDefault& name){}
void from_json(const json& j, BotCommandScopeAllPrivateChats& name){
	name.type=j.at("type").get<std::string>();
}
void to_json(const json& j, BotCommandScopeAllPrivateChats& name){}
void from_json(const json& j, BotCommandScopeAllGroupChats& name){
	name.type=j.at("type").get<std::string>();
}
void to_json(const json& j, BotCommandScopeAllGroupChats& name){}
void from_json(const json& j, BotCommandScopeAllChatAdministrators& name){
	name.type=j.at("type").get<std::string>();
}
void to_json(const json& j, BotCommandScopeAllChatAdministrators& name){}
void from_json(const json& j, BotCommandScopeChat& name){
	name.type=j.at("type").get<std::string>();
	name.chat_id=j.at("chat_id").get<int>();
}
void to_json(const json& j, BotCommandScopeChat& name){}
void from_json(const json& j, BotCommandScopeChatAdministrators& name){
	name.type=j.at("type").get<std::string>();
	name.chat_id=j.at("chat_id").get<int>();
}
void to_json(const json& j, BotCommandScopeChatAdministrators& name){}
void from_json(const json& j, BotCommandScopeChatMember& name){
	name.type=j.at("type").get<std::string>();
	name.chat_id=j.at("chat_id").get<int>();
	name.user_id=j.at("user_id").get<int>();
}
void to_json(const json& j, BotCommandScopeChatMember& name){}
void from_json(const json& j, MenuButton& name){
	name.type=j.at("type").get<std::string>();
}
void to_json(const json& j, MenuButton& name){}
void from_json(const json& j, MenuButtonCommands& name){
	name.type=j.at("type").get<std::string>();
}
void to_json(const json& j, MenuButtonCommands& name){}
void from_json(const json& j, MenuButtonWebApp& name){
	name.type=j.at("type").get<std::string>();
	name.text=j.at("text").get<std::string>();
	name.web_app=std::make_shared<WebAppInfo >(j.at("web_app").get<WebAppInfo>());
}
void to_json(const json& j, MenuButtonWebApp& name){}
void from_json(const json& j, MenuButtonDefault& name){
	name.type=j.at("type").get<std::string>();
}
void to_json(const json& j, MenuButtonDefault& name){}
void from_json(const json& j, ResponseParameters& name){
	name.migrate_to_chat_id=j.at("migrate_to_chat_id").get<int>();
	name.retry_after=j.at("retry_after").get<int>();
}
void to_json(const json& j, ResponseParameters& name){}
void from_json(const json& j, InputMedia& name){
	name.type=j.at("type").get<std::string>();
	name.media=j.at("media").get<std::string>();
	name.caption=j.at("caption").get<std::string>();
	name.parse_mode=j.at("parse_mode").get<std::string>();
    std::vector<std::shared_ptr<std::vector<MessageEntity>>> p;
for(auto a:j.at("caption_entities").get<std::vector<std::vector<MessageEntity>>>()){
p.push_back(std::make_shared<std::vector<MessageEntity>>(a));
    }	name.caption_entities=std::make_shared<std::vector<MessageEntity> >(j.at("caption_entities").get<std::vector<MessageEntity>>());
	name.has_spoiler=j.at("has_spoiler").get<bool>();
}
void to_json(const json& j, InputMedia& name){}
void from_json(const json& j, InputMediaPhoto& name){
	name.type=j.at("type").get<std::string>();
	name.media=j.at("media").get<std::string>();
	name.caption=j.at("caption").get<std::string>();
	name.parse_mode=j.at("parse_mode").get<std::string>();
    std::vector<std::shared_ptr<std::vector<MessageEntity>>> p;
for(auto a:j.at("caption_entities").get<std::vector<std::vector<MessageEntity>>>()){
p.push_back(std::make_shared<std::vector<MessageEntity>>(a));
    }	name.caption_entities=std::make_shared<std::vector<MessageEntity> >(j.at("caption_entities").get<std::vector<MessageEntity>>());
	name.has_spoiler=j.at("has_spoiler").get<bool>();
}
void to_json(const json& j, InputMediaPhoto& name){}
void from_json(const json& j, InputMediaVideo& name){
	name.type=j.at("type").get<std::string>();
	name.media=j.at("media").get<std::string>();
	name.thumb=j.at("thumb").get<std::string>();
	name.caption=j.at("caption").get<std::string>();
	name.parse_mode=j.at("parse_mode").get<std::string>();
    std::vector<std::shared_ptr<std::vector<MessageEntity>>> p;
for(auto a:j.at("caption_entities").get<std::vector<std::vector<MessageEntity>>>()){
p.push_back(std::make_shared<std::vector<MessageEntity>>(a));
    }	name.caption_entities=std::make_shared<std::vector<MessageEntity> >(j.at("caption_entities").get<std::vector<MessageEntity>>());
	name.width=j.at("width").get<int>();
	name.height=j.at("height").get<int>();
	name.duration=j.at("duration").get<int>();
	name.supports_streaming=j.at("supports_streaming").get<bool>();
	name.has_spoiler=j.at("has_spoiler").get<bool>();
}
void to_json(const json& j, InputMediaVideo& name){}
void from_json(const json& j, InputMediaAnimation& name){
	name.type=j.at("type").get<std::string>();
	name.media=j.at("media").get<std::string>();
	name.thumb=j.at("thumb").get<std::string>();
	name.caption=j.at("caption").get<std::string>();
	name.parse_mode=j.at("parse_mode").get<std::string>();
    std::vector<std::shared_ptr<std::vector<MessageEntity>>> p;
for(auto a:j.at("caption_entities").get<std::vector<std::vector<MessageEntity>>>()){
p.push_back(std::make_shared<std::vector<MessageEntity>>(a));
    }	name.caption_entities=std::make_shared<std::vector<MessageEntity> >(j.at("caption_entities").get<std::vector<MessageEntity>>());
	name.width=j.at("width").get<int>();
	name.height=j.at("height").get<int>();
	name.duration=j.at("duration").get<int>();
	name.has_spoiler=j.at("has_spoiler").get<bool>();
}
void to_json(const json& j, InputMediaAnimation& name){}
void from_json(const json& j, InputMediaAudio& name){
	name.type=j.at("type").get<std::string>();
	name.media=j.at("media").get<std::string>();
	name.thumb=j.at("thumb").get<std::string>();
	name.caption=j.at("caption").get<std::string>();
	name.parse_mode=j.at("parse_mode").get<std::string>();
    std::vector<std::shared_ptr<std::vector<MessageEntity>>> p;
for(auto a:j.at("caption_entities").get<std::vector<std::vector<MessageEntity>>>()){
p.push_back(std::make_shared<std::vector<MessageEntity>>(a));
    }	name.caption_entities=std::make_shared<std::vector<MessageEntity> >(j.at("caption_entities").get<std::vector<MessageEntity>>());
	name.duration=j.at("duration").get<int>();
	name.performer=j.at("performer").get<std::string>();
	name.title=j.at("title").get<std::string>();
}
void to_json(const json& j, InputMediaAudio& name){}
void from_json(const json& j, InputMediaDocument& name){
	name.type=j.at("type").get<std::string>();
	name.media=j.at("media").get<std::string>();
	name.thumb=j.at("thumb").get<std::string>();
	name.caption=j.at("caption").get<std::string>();
	name.parse_mode=j.at("parse_mode").get<std::string>();
    std::vector<std::shared_ptr<std::vector<MessageEntity>>> p;
for(auto a:j.at("caption_entities").get<std::vector<std::vector<MessageEntity>>>()){
p.push_back(std::make_shared<std::vector<MessageEntity>>(a));
    }	name.caption_entities=std::make_shared<std::vector<MessageEntity> >(j.at("caption_entities").get<std::vector<MessageEntity>>());
	name.disable_content_type_detection=j.at("disable_content_type_detection").get<bool>();
}
void to_json(const json& j, InputMediaDocument& name){}
void from_json(const json& j, InputFile& name){
	name.chat_id=j.at("chat_id").get<int>();
	name.message_thread_id=j.at("message_thread_id").get<int>();
	name.text=j.at("text").get<std::string>();
	name.parse_mode=j.at("parse_mode").get<std::string>();
    std::vector<std::shared_ptr<std::vector<MessageEntity>>> p;
for(auto a:j.at("entities").get<std::vector<std::vector<MessageEntity>>>()){
p.push_back(std::make_shared<std::vector<MessageEntity>>(a));
    }	name.entities=std::make_shared<std::vector<MessageEntity> >(j.at("entities").get<std::vector<MessageEntity>>());
	name.disable_web_page_preview=j.at("disable_web_page_preview").get<bool>();
	name.disable_notification=j.at("disable_notification").get<bool>();
	name.protect_content=j.at("protect_content").get<bool>();
	name.reply_to_message_id=j.at("reply_to_message_id").get<int>();
	name.allow_sending_without_reply=j.at("allow_sending_without_reply").get<bool>();
	name.reply_markup=std::make_shared<InlineKeyboardMarkup >(j.at("reply_markup").get<InlineKeyboardMarkup>());
}
void to_json(const json& j, InputFile& name){}
void from_json(const json& j, Stickers& name){
}
void to_json(const json& j, Stickers& name){}
void from_json(const json& j, Sticker& name){
	name.file_id=j.at("file_id").get<std::string>();
	name.file_unique_id=j.at("file_unique_id").get<std::string>();
	name.type=j.at("type").get<std::string>();
	name.width=j.at("width").get<int>();
	name.height=j.at("height").get<int>();
	name.is_animated=j.at("is_animated").get<bool>();
	name.is_video=j.at("is_video").get<bool>();
	name.thumb=std::make_shared<PhotoSize >(j.at("thumb").get<PhotoSize>());
	name.emoji=j.at("emoji").get<std::string>();
	name.set_name=j.at("set_name").get<std::string>();
	name.premium_animation=std::make_shared<File >(j.at("premium_animation").get<File>());
	name.mask_position=std::make_shared<MaskPosition >(j.at("mask_position").get<MaskPosition>());
	name.custom_emoji_id=j.at("custom_emoji_id").get<std::string>();
	name.file_size=j.at("file_size").get<int>();
}
void to_json(const json& j, Sticker& name){}
void from_json(const json& j, StickerSet& name){
	name.name=j.at("name").get<std::string>();
	name.title=j.at("title").get<std::string>();
	name.sticker_type=j.at("sticker_type").get<std::string>();
	name.is_animated=j.at("is_animated").get<bool>();
	name.is_video=j.at("is_video").get<bool>();
    std::vector<std::shared_ptr<std::vector<Sticker>>> p;
for(auto a:j.at("stickers").get<std::vector<std::vector<Sticker>>>()){
p.push_back(std::make_shared<std::vector<Sticker>>(a));
    }	name.stickers=std::make_shared<std::vector<Sticker> >(j.at("stickers").get<std::vector<Sticker>>());
	name.thumb=std::make_shared<PhotoSize >(j.at("thumb").get<PhotoSize>());
}
void to_json(const json& j, StickerSet& name){}
void from_json(const json& j, MaskPosition& name){
	name.point=j.at("point").get<std::string>();
	name.x_shift=j.at("x_shift").get<float>();
	name.y_shift=j.at("y_shift").get<float>();
	name.scale=j.at("scale").get<float>();
}
void to_json(const json& j, MaskPosition& name){}
void from_json(const json& j, InlineQuery& name){
	name.id=j.at("id").get<std::string>();
	name.from=std::make_shared<User >(j.at("from").get<User>());
	name.query=j.at("query").get<std::string>();
	name.offset=j.at("offset").get<std::string>();
	name.chat_type=j.at("chat_type").get<std::string>();
	name.location=std::make_shared<Location >(j.at("location").get<Location>());
}
void to_json(const json& j, InlineQuery& name){}
void from_json(const json& j, InlineQueryResult& name){
	name.type=j.at("type").get<std::string>();
	name.id=j.at("id").get<std::string>();
	name.title=j.at("title").get<std::string>();
	name.input_message_content=std::make_shared<InputMessageContent >(j.at("input_message_content").get<InputMessageContent>());
	name.reply_markup=std::make_shared<InlineKeyboardMarkup >(j.at("reply_markup").get<InlineKeyboardMarkup>());
	name.url=j.at("url").get<std::string>();
	name.hide_url=j.at("hide_url").get<bool>();
	name.description=j.at("description").get<std::string>();
	name.thumb_url=j.at("thumb_url").get<std::string>();
	name.thumb_width=j.at("thumb_width").get<int>();
	name.thumb_height=j.at("thumb_height").get<int>();
}
void to_json(const json& j, InlineQueryResult& name){}
void from_json(const json& j, InlineQueryResultArticle& name){
	name.type=j.at("type").get<std::string>();
	name.id=j.at("id").get<std::string>();
	name.title=j.at("title").get<std::string>();
	name.input_message_content=std::make_shared<InputMessageContent >(j.at("input_message_content").get<InputMessageContent>());
	name.reply_markup=std::make_shared<InlineKeyboardMarkup >(j.at("reply_markup").get<InlineKeyboardMarkup>());
	name.url=j.at("url").get<std::string>();
	name.hide_url=j.at("hide_url").get<bool>();
	name.description=j.at("description").get<std::string>();
	name.thumb_url=j.at("thumb_url").get<std::string>();
	name.thumb_width=j.at("thumb_width").get<int>();
	name.thumb_height=j.at("thumb_height").get<int>();
}
void to_json(const json& j, InlineQueryResultArticle& name){}
void from_json(const json& j, InlineQueryResultPhoto& name){
	name.type=j.at("type").get<std::string>();
	name.id=j.at("id").get<std::string>();
	name.photo_url=j.at("photo_url").get<std::string>();
	name.thumb_url=j.at("thumb_url").get<std::string>();
	name.photo_width=j.at("photo_width").get<int>();
	name.photo_height=j.at("photo_height").get<int>();
	name.title=j.at("title").get<std::string>();
	name.description=j.at("description").get<std::string>();
	name.caption=j.at("caption").get<std::string>();
	name.parse_mode=j.at("parse_mode").get<std::string>();
    std::vector<std::shared_ptr<std::vector<MessageEntity>>> p;
for(auto a:j.at("caption_entities").get<std::vector<std::vector<MessageEntity>>>()){
p.push_back(std::make_shared<std::vector<MessageEntity>>(a));
    }	name.caption_entities=std::make_shared<std::vector<MessageEntity> >(j.at("caption_entities").get<std::vector<MessageEntity>>());
	name.reply_markup=std::make_shared<InlineKeyboardMarkup >(j.at("reply_markup").get<InlineKeyboardMarkup>());
	name.input_message_content=std::make_shared<InputMessageContent >(j.at("input_message_content").get<InputMessageContent>());
}
void to_json(const json& j, InlineQueryResultPhoto& name){}
void from_json(const json& j, InlineQueryResultGif& name){
	name.type=j.at("type").get<std::string>();
	name.id=j.at("id").get<std::string>();
	name.gif_url=j.at("gif_url").get<std::string>();
	name.gif_width=j.at("gif_width").get<int>();
	name.gif_height=j.at("gif_height").get<int>();
	name.gif_duration=j.at("gif_duration").get<int>();
	name.thumb_url=j.at("thumb_url").get<std::string>();
	name.thumb_mime_type=j.at("thumb_mime_type").get<std::string>();
	name.title=j.at("title").get<std::string>();
	name.caption=j.at("caption").get<std::string>();
	name.parse_mode=j.at("parse_mode").get<std::string>();
    std::vector<std::shared_ptr<std::vector<MessageEntity>>> p;
for(auto a:j.at("caption_entities").get<std::vector<std::vector<MessageEntity>>>()){
p.push_back(std::make_shared<std::vector<MessageEntity>>(a));
    }	name.caption_entities=std::make_shared<std::vector<MessageEntity> >(j.at("caption_entities").get<std::vector<MessageEntity>>());
	name.reply_markup=std::make_shared<InlineKeyboardMarkup >(j.at("reply_markup").get<InlineKeyboardMarkup>());
	name.input_message_content=std::make_shared<InputMessageContent >(j.at("input_message_content").get<InputMessageContent>());
}
void to_json(const json& j, InlineQueryResultGif& name){}
void from_json(const json& j, InlineQueryResultMpeg4Gif& name){
	name.type=j.at("type").get<std::string>();
	name.id=j.at("id").get<std::string>();
	name.mpeg4_url=j.at("mpeg4_url").get<std::string>();
	name.mpeg4_width=j.at("mpeg4_width").get<int>();
	name.mpeg4_height=j.at("mpeg4_height").get<int>();
	name.mpeg4_duration=j.at("mpeg4_duration").get<int>();
	name.thumb_url=j.at("thumb_url").get<std::string>();
	name.thumb_mime_type=j.at("thumb_mime_type").get<std::string>();
	name.title=j.at("title").get<std::string>();
	name.caption=j.at("caption").get<std::string>();
	name.parse_mode=j.at("parse_mode").get<std::string>();
    std::vector<std::shared_ptr<std::vector<MessageEntity>>> p;
for(auto a:j.at("caption_entities").get<std::vector<std::vector<MessageEntity>>>()){
p.push_back(std::make_shared<std::vector<MessageEntity>>(a));
    }	name.caption_entities=std::make_shared<std::vector<MessageEntity> >(j.at("caption_entities").get<std::vector<MessageEntity>>());
	name.reply_markup=std::make_shared<InlineKeyboardMarkup >(j.at("reply_markup").get<InlineKeyboardMarkup>());
	name.input_message_content=std::make_shared<InputMessageContent >(j.at("input_message_content").get<InputMessageContent>());
}
void to_json(const json& j, InlineQueryResultMpeg4Gif& name){}
void from_json(const json& j, InlineQueryResultVideo& name){
	name.type=j.at("type").get<std::string>();
	name.id=j.at("id").get<std::string>();
	name.video_url=j.at("video_url").get<std::string>();
	name.mime_type=j.at("mime_type").get<std::string>();
	name.thumb_url=j.at("thumb_url").get<std::string>();
	name.title=j.at("title").get<std::string>();
	name.caption=j.at("caption").get<std::string>();
	name.parse_mode=j.at("parse_mode").get<std::string>();
    std::vector<std::shared_ptr<std::vector<MessageEntity>>> p;
for(auto a:j.at("caption_entities").get<std::vector<std::vector<MessageEntity>>>()){
p.push_back(std::make_shared<std::vector<MessageEntity>>(a));
    }	name.caption_entities=std::make_shared<std::vector<MessageEntity> >(j.at("caption_entities").get<std::vector<MessageEntity>>());
	name.video_width=j.at("video_width").get<int>();
	name.video_height=j.at("video_height").get<int>();
	name.video_duration=j.at("video_duration").get<int>();
	name.description=j.at("description").get<std::string>();
	name.reply_markup=std::make_shared<InlineKeyboardMarkup >(j.at("reply_markup").get<InlineKeyboardMarkup>());
	name.input_message_content=std::make_shared<InputMessageContent >(j.at("input_message_content").get<InputMessageContent>());
}
void to_json(const json& j, InlineQueryResultVideo& name){}
void from_json(const json& j, InlineQueryResultAudio& name){
	name.type=j.at("type").get<std::string>();
	name.id=j.at("id").get<std::string>();
	name.audio_url=j.at("audio_url").get<std::string>();
	name.title=j.at("title").get<std::string>();
	name.caption=j.at("caption").get<std::string>();
	name.parse_mode=j.at("parse_mode").get<std::string>();
    std::vector<std::shared_ptr<std::vector<MessageEntity>>> p;
for(auto a:j.at("caption_entities").get<std::vector<std::vector<MessageEntity>>>()){
p.push_back(std::make_shared<std::vector<MessageEntity>>(a));
    }	name.caption_entities=std::make_shared<std::vector<MessageEntity> >(j.at("caption_entities").get<std::vector<MessageEntity>>());
	name.performer=j.at("performer").get<std::string>();
	name.audio_duration=j.at("audio_duration").get<int>();
	name.reply_markup=std::make_shared<InlineKeyboardMarkup >(j.at("reply_markup").get<InlineKeyboardMarkup>());
	name.input_message_content=std::make_shared<InputMessageContent >(j.at("input_message_content").get<InputMessageContent>());
}
void to_json(const json& j, InlineQueryResultAudio& name){}
void from_json(const json& j, InlineQueryResultVoice& name){
	name.type=j.at("type").get<std::string>();
	name.id=j.at("id").get<std::string>();
	name.voice_url=j.at("voice_url").get<std::string>();
	name.title=j.at("title").get<std::string>();
	name.caption=j.at("caption").get<std::string>();
	name.parse_mode=j.at("parse_mode").get<std::string>();
    std::vector<std::shared_ptr<std::vector<MessageEntity>>> p;
for(auto a:j.at("caption_entities").get<std::vector<std::vector<MessageEntity>>>()){
p.push_back(std::make_shared<std::vector<MessageEntity>>(a));
    }	name.caption_entities=std::make_shared<std::vector<MessageEntity> >(j.at("caption_entities").get<std::vector<MessageEntity>>());
	name.voice_duration=j.at("voice_duration").get<int>();
	name.reply_markup=std::make_shared<InlineKeyboardMarkup >(j.at("reply_markup").get<InlineKeyboardMarkup>());
	name.input_message_content=std::make_shared<InputMessageContent >(j.at("input_message_content").get<InputMessageContent>());
}
void to_json(const json& j, InlineQueryResultVoice& name){}
void from_json(const json& j, InlineQueryResultDocument& name){
	name.type=j.at("type").get<std::string>();
	name.id=j.at("id").get<std::string>();
	name.title=j.at("title").get<std::string>();
	name.caption=j.at("caption").get<std::string>();
	name.parse_mode=j.at("parse_mode").get<std::string>();
    std::vector<std::shared_ptr<std::vector<MessageEntity>>> p;
for(auto a:j.at("caption_entities").get<std::vector<std::vector<MessageEntity>>>()){
p.push_back(std::make_shared<std::vector<MessageEntity>>(a));
    }	name.caption_entities=std::make_shared<std::vector<MessageEntity> >(j.at("caption_entities").get<std::vector<MessageEntity>>());
	name.document_url=j.at("document_url").get<std::string>();
	name.mime_type=j.at("mime_type").get<std::string>();
	name.description=j.at("description").get<std::string>();
	name.reply_markup=std::make_shared<InlineKeyboardMarkup >(j.at("reply_markup").get<InlineKeyboardMarkup>());
	name.input_message_content=std::make_shared<InputMessageContent >(j.at("input_message_content").get<InputMessageContent>());
	name.thumb_url=j.at("thumb_url").get<std::string>();
	name.thumb_width=j.at("thumb_width").get<int>();
	name.thumb_height=j.at("thumb_height").get<int>();
}
void to_json(const json& j, InlineQueryResultDocument& name){}
void from_json(const json& j, InlineQueryResultLocation& name){
	name.type=j.at("type").get<std::string>();
	name.id=j.at("id").get<std::string>();
	name.latitude=j.at("latitude").get<float>();
	name.longitude=j.at("longitude").get<float>();
	name.title=j.at("title").get<std::string>();
	name.horizontal_accuracy=j.at("horizontal_accuracy").get<float>();
	name.live_period=j.at("live_period").get<int>();
	name.heading=j.at("heading").get<int>();
	name.proximity_alert_radius=j.at("proximity_alert_radius").get<int>();
	name.reply_markup=std::make_shared<InlineKeyboardMarkup >(j.at("reply_markup").get<InlineKeyboardMarkup>());
	name.input_message_content=std::make_shared<InputMessageContent >(j.at("input_message_content").get<InputMessageContent>());
	name.thumb_url=j.at("thumb_url").get<std::string>();
	name.thumb_width=j.at("thumb_width").get<int>();
	name.thumb_height=j.at("thumb_height").get<int>();
}
void to_json(const json& j, InlineQueryResultLocation& name){}
void from_json(const json& j, InlineQueryResultVenue& name){
	name.type=j.at("type").get<std::string>();
	name.id=j.at("id").get<std::string>();
	name.latitude=j.at("latitude").get<float>();
	name.longitude=j.at("longitude").get<float>();
	name.title=j.at("title").get<std::string>();
	name.address=j.at("address").get<std::string>();
	name.foursquare_id=j.at("foursquare_id").get<std::string>();
	name.foursquare_type=j.at("foursquare_type").get<std::string>();
	name.google_place_id=j.at("google_place_id").get<std::string>();
	name.google_place_type=j.at("google_place_type").get<std::string>();
	name.reply_markup=std::make_shared<InlineKeyboardMarkup >(j.at("reply_markup").get<InlineKeyboardMarkup>());
	name.input_message_content=std::make_shared<InputMessageContent >(j.at("input_message_content").get<InputMessageContent>());
	name.thumb_url=j.at("thumb_url").get<std::string>();
	name.thumb_width=j.at("thumb_width").get<int>();
	name.thumb_height=j.at("thumb_height").get<int>();
}
void to_json(const json& j, InlineQueryResultVenue& name){}
void from_json(const json& j, InlineQueryResultContact& name){
	name.type=j.at("type").get<std::string>();
	name.id=j.at("id").get<std::string>();
	name.phone_number=j.at("phone_number").get<std::string>();
	name.first_name=j.at("first_name").get<std::string>();
	name.last_name=j.at("last_name").get<std::string>();
	name.vcard=j.at("vcard").get<std::string>();
	name.reply_markup=std::make_shared<InlineKeyboardMarkup >(j.at("reply_markup").get<InlineKeyboardMarkup>());
	name.input_message_content=std::make_shared<InputMessageContent >(j.at("input_message_content").get<InputMessageContent>());
	name.thumb_url=j.at("thumb_url").get<std::string>();
	name.thumb_width=j.at("thumb_width").get<int>();
	name.thumb_height=j.at("thumb_height").get<int>();
}
void to_json(const json& j, InlineQueryResultContact& name){}
void from_json(const json& j, InlineQueryResultGame& name){
	name.type=j.at("type").get<std::string>();
	name.id=j.at("id").get<std::string>();
	name.game_short_name=j.at("game_short_name").get<std::string>();
	name.reply_markup=std::make_shared<InlineKeyboardMarkup >(j.at("reply_markup").get<InlineKeyboardMarkup>());
}
void to_json(const json& j, InlineQueryResultGame& name){}
void from_json(const json& j, InlineQueryResultCachedPhoto& name){
	name.type=j.at("type").get<std::string>();
	name.id=j.at("id").get<std::string>();
	name.photo_file_id=j.at("photo_file_id").get<std::string>();
	name.title=j.at("title").get<std::string>();
	name.description=j.at("description").get<std::string>();
	name.caption=j.at("caption").get<std::string>();
	name.parse_mode=j.at("parse_mode").get<std::string>();
    std::vector<std::shared_ptr<std::vector<MessageEntity>>> p;
for(auto a:j.at("caption_entities").get<std::vector<std::vector<MessageEntity>>>()){
p.push_back(std::make_shared<std::vector<MessageEntity>>(a));
    }	name.caption_entities=std::make_shared<std::vector<MessageEntity> >(j.at("caption_entities").get<std::vector<MessageEntity>>());
	name.reply_markup=std::make_shared<InlineKeyboardMarkup >(j.at("reply_markup").get<InlineKeyboardMarkup>());
	name.input_message_content=std::make_shared<InputMessageContent >(j.at("input_message_content").get<InputMessageContent>());
}
void to_json(const json& j, InlineQueryResultCachedPhoto& name){}
void from_json(const json& j, InlineQueryResultCachedGif& name){
	name.type=j.at("type").get<std::string>();
	name.id=j.at("id").get<std::string>();
	name.gif_file_id=j.at("gif_file_id").get<std::string>();
	name.title=j.at("title").get<std::string>();
	name.caption=j.at("caption").get<std::string>();
	name.parse_mode=j.at("parse_mode").get<std::string>();
    std::vector<std::shared_ptr<std::vector<MessageEntity>>> p;
for(auto a:j.at("caption_entities").get<std::vector<std::vector<MessageEntity>>>()){
p.push_back(std::make_shared<std::vector<MessageEntity>>(a));
    }	name.caption_entities=std::make_shared<std::vector<MessageEntity> >(j.at("caption_entities").get<std::vector<MessageEntity>>());
	name.reply_markup=std::make_shared<InlineKeyboardMarkup >(j.at("reply_markup").get<InlineKeyboardMarkup>());
	name.input_message_content=std::make_shared<InputMessageContent >(j.at("input_message_content").get<InputMessageContent>());
}
void to_json(const json& j, InlineQueryResultCachedGif& name){}
void from_json(const json& j, InlineQueryResultCachedMpeg4Gif& name){
	name.type=j.at("type").get<std::string>();
	name.id=j.at("id").get<std::string>();
	name.mpeg4_file_id=j.at("mpeg4_file_id").get<std::string>();
	name.title=j.at("title").get<std::string>();
	name.caption=j.at("caption").get<std::string>();
	name.parse_mode=j.at("parse_mode").get<std::string>();
    std::vector<std::shared_ptr<std::vector<MessageEntity>>> p;
for(auto a:j.at("caption_entities").get<std::vector<std::vector<MessageEntity>>>()){
p.push_back(std::make_shared<std::vector<MessageEntity>>(a));
    }	name.caption_entities=std::make_shared<std::vector<MessageEntity> >(j.at("caption_entities").get<std::vector<MessageEntity>>());
	name.reply_markup=std::make_shared<InlineKeyboardMarkup >(j.at("reply_markup").get<InlineKeyboardMarkup>());
	name.input_message_content=std::make_shared<InputMessageContent >(j.at("input_message_content").get<InputMessageContent>());
}
void to_json(const json& j, InlineQueryResultCachedMpeg4Gif& name){}
void from_json(const json& j, InlineQueryResultCachedSticker& name){
	name.type=j.at("type").get<std::string>();
	name.id=j.at("id").get<std::string>();
	name.sticker_file_id=j.at("sticker_file_id").get<std::string>();
	name.reply_markup=std::make_shared<InlineKeyboardMarkup >(j.at("reply_markup").get<InlineKeyboardMarkup>());
	name.input_message_content=std::make_shared<InputMessageContent >(j.at("input_message_content").get<InputMessageContent>());
}
void to_json(const json& j, InlineQueryResultCachedSticker& name){}
void from_json(const json& j, InlineQueryResultCachedDocument& name){
	name.type=j.at("type").get<std::string>();
	name.id=j.at("id").get<std::string>();
	name.title=j.at("title").get<std::string>();
	name.document_file_id=j.at("document_file_id").get<std::string>();
	name.description=j.at("description").get<std::string>();
	name.caption=j.at("caption").get<std::string>();
	name.parse_mode=j.at("parse_mode").get<std::string>();
    std::vector<std::shared_ptr<std::vector<MessageEntity>>> p;
for(auto a:j.at("caption_entities").get<std::vector<std::vector<MessageEntity>>>()){
p.push_back(std::make_shared<std::vector<MessageEntity>>(a));
    }	name.caption_entities=std::make_shared<std::vector<MessageEntity> >(j.at("caption_entities").get<std::vector<MessageEntity>>());
	name.reply_markup=std::make_shared<InlineKeyboardMarkup >(j.at("reply_markup").get<InlineKeyboardMarkup>());
	name.input_message_content=std::make_shared<InputMessageContent >(j.at("input_message_content").get<InputMessageContent>());
}
void to_json(const json& j, InlineQueryResultCachedDocument& name){}
void from_json(const json& j, InlineQueryResultCachedVideo& name){
	name.type=j.at("type").get<std::string>();
	name.id=j.at("id").get<std::string>();
	name.video_file_id=j.at("video_file_id").get<std::string>();
	name.title=j.at("title").get<std::string>();
	name.description=j.at("description").get<std::string>();
	name.caption=j.at("caption").get<std::string>();
	name.parse_mode=j.at("parse_mode").get<std::string>();
    std::vector<std::shared_ptr<std::vector<MessageEntity>>> p;
for(auto a:j.at("caption_entities").get<std::vector<std::vector<MessageEntity>>>()){
p.push_back(std::make_shared<std::vector<MessageEntity>>(a));
    }	name.caption_entities=std::make_shared<std::vector<MessageEntity> >(j.at("caption_entities").get<std::vector<MessageEntity>>());
	name.reply_markup=std::make_shared<InlineKeyboardMarkup >(j.at("reply_markup").get<InlineKeyboardMarkup>());
	name.input_message_content=std::make_shared<InputMessageContent >(j.at("input_message_content").get<InputMessageContent>());
}
void to_json(const json& j, InlineQueryResultCachedVideo& name){}
void from_json(const json& j, InlineQueryResultCachedVoice& name){
	name.type=j.at("type").get<std::string>();
	name.id=j.at("id").get<std::string>();
	name.voice_file_id=j.at("voice_file_id").get<std::string>();
	name.title=j.at("title").get<std::string>();
	name.caption=j.at("caption").get<std::string>();
	name.parse_mode=j.at("parse_mode").get<std::string>();
    std::vector<std::shared_ptr<std::vector<MessageEntity>>> p;
for(auto a:j.at("caption_entities").get<std::vector<std::vector<MessageEntity>>>()){
p.push_back(std::make_shared<std::vector<MessageEntity>>(a));
    }	name.caption_entities=std::make_shared<std::vector<MessageEntity> >(j.at("caption_entities").get<std::vector<MessageEntity>>());
	name.reply_markup=std::make_shared<InlineKeyboardMarkup >(j.at("reply_markup").get<InlineKeyboardMarkup>());
	name.input_message_content=std::make_shared<InputMessageContent >(j.at("input_message_content").get<InputMessageContent>());
}
void to_json(const json& j, InlineQueryResultCachedVoice& name){}
void from_json(const json& j, InlineQueryResultCachedAudio& name){
	name.type=j.at("type").get<std::string>();
	name.id=j.at("id").get<std::string>();
	name.audio_file_id=j.at("audio_file_id").get<std::string>();
	name.caption=j.at("caption").get<std::string>();
	name.parse_mode=j.at("parse_mode").get<std::string>();
    std::vector<std::shared_ptr<std::vector<MessageEntity>>> p;
for(auto a:j.at("caption_entities").get<std::vector<std::vector<MessageEntity>>>()){
p.push_back(std::make_shared<std::vector<MessageEntity>>(a));
    }	name.caption_entities=std::make_shared<std::vector<MessageEntity> >(j.at("caption_entities").get<std::vector<MessageEntity>>());
	name.reply_markup=std::make_shared<InlineKeyboardMarkup >(j.at("reply_markup").get<InlineKeyboardMarkup>());
	name.input_message_content=std::make_shared<InputMessageContent >(j.at("input_message_content").get<InputMessageContent>());
}
void to_json(const json& j, InlineQueryResultCachedAudio& name){}
void from_json(const json& j, InputMessageContent& name){
	name.message_text=j.at("message_text").get<std::string>();
	name.parse_mode=j.at("parse_mode").get<std::string>();
    std::vector<std::shared_ptr<std::vector<MessageEntity>>> p;
for(auto a:j.at("entities").get<std::vector<std::vector<MessageEntity>>>()){
p.push_back(std::make_shared<std::vector<MessageEntity>>(a));
    }	name.entities=std::make_shared<std::vector<MessageEntity> >(j.at("entities").get<std::vector<MessageEntity>>());
	name.disable_web_page_preview=j.at("disable_web_page_preview").get<bool>();
}
void to_json(const json& j, InputMessageContent& name){}
void from_json(const json& j, InputTextMessageContent& name){
	name.message_text=j.at("message_text").get<std::string>();
	name.parse_mode=j.at("parse_mode").get<std::string>();
    std::vector<std::shared_ptr<std::vector<MessageEntity>>> p;
for(auto a:j.at("entities").get<std::vector<std::vector<MessageEntity>>>()){
p.push_back(std::make_shared<std::vector<MessageEntity>>(a));
    }	name.entities=std::make_shared<std::vector<MessageEntity> >(j.at("entities").get<std::vector<MessageEntity>>());
	name.disable_web_page_preview=j.at("disable_web_page_preview").get<bool>();
}
void to_json(const json& j, InputTextMessageContent& name){}
void from_json(const json& j, InputLocationMessageContent& name){
	name.latitude=j.at("latitude").get<float>();
	name.longitude=j.at("longitude").get<float>();
	name.horizontal_accuracy=j.at("horizontal_accuracy").get<float>();
	name.live_period=j.at("live_period").get<int>();
	name.heading=j.at("heading").get<int>();
	name.proximity_alert_radius=j.at("proximity_alert_radius").get<int>();
}
void to_json(const json& j, InputLocationMessageContent& name){}
void from_json(const json& j, InputVenueMessageContent& name){
	name.latitude=j.at("latitude").get<float>();
	name.longitude=j.at("longitude").get<float>();
	name.title=j.at("title").get<std::string>();
	name.address=j.at("address").get<std::string>();
	name.foursquare_id=j.at("foursquare_id").get<std::string>();
	name.foursquare_type=j.at("foursquare_type").get<std::string>();
	name.google_place_id=j.at("google_place_id").get<std::string>();
	name.google_place_type=j.at("google_place_type").get<std::string>();
}
void to_json(const json& j, InputVenueMessageContent& name){}
void from_json(const json& j, InputContactMessageContent& name){
	name.phone_number=j.at("phone_number").get<std::string>();
	name.first_name=j.at("first_name").get<std::string>();
	name.last_name=j.at("last_name").get<std::string>();
	name.vcard=j.at("vcard").get<std::string>();
}
void to_json(const json& j, InputContactMessageContent& name){}
void from_json(const json& j, InputInvoiceMessageContent& name){
	name.title=j.at("title").get<std::string>();
	name.description=j.at("description").get<std::string>();
	name.payload=j.at("payload").get<std::string>();
	name.provider_token=j.at("provider_token").get<std::string>();
	name.currency=j.at("currency").get<std::string>();
    std::vector<std::shared_ptr<std::vector<LabeledPrice>>> p;
for(auto a:j.at("prices").get<std::vector<std::vector<LabeledPrice>>>()){
p.push_back(std::make_shared<std::vector<LabeledPrice>>(a));
    }	name.prices=std::make_shared<std::vector<LabeledPrice> >(j.at("prices").get<std::vector<LabeledPrice>>());
	name.max_tip_amount=j.at("max_tip_amount").get<int>();
	name.suggested_tip_amounts=j.at("suggested_tip_amounts").get<int>();
	name.provider_data=j.at("provider_data").get<std::string>();
	name.photo_url=j.at("photo_url").get<std::string>();
	name.photo_size=j.at("photo_size").get<int>();
	name.photo_width=j.at("photo_width").get<int>();
	name.photo_height=j.at("photo_height").get<int>();
	name.need_name=j.at("need_name").get<bool>();
	name.need_phone_number=j.at("need_phone_number").get<bool>();
	name.need_email=j.at("need_email").get<bool>();
	name.need_shipping_address=j.at("need_shipping_address").get<bool>();
	name.send_phone_number_to_provider=j.at("send_phone_number_to_provider").get<bool>();
	name.send_email_to_provider=j.at("send_email_to_provider").get<bool>();
	name.is_flexible=j.at("is_flexible").get<bool>();
}
void to_json(const json& j, InputInvoiceMessageContent& name){}
void from_json(const json& j, ChosenInlineResult& name){
	name.result_id=j.at("result_id").get<std::string>();
	name.from=std::make_shared<User >(j.at("from").get<User>());
	name.location=std::make_shared<Location >(j.at("location").get<Location>());
	name.inline_message_id=j.at("inline_message_id").get<std::string>();
	name.query=j.at("query").get<std::string>();
}
void to_json(const json& j, ChosenInlineResult& name){}
void from_json(const json& j, SentWebAppMessage& name){
	name.inline_message_id=j.at("inline_message_id").get<std::string>();
}
void to_json(const json& j, SentWebAppMessage& name){}
void from_json(const json& j, Payments& name){
}
void to_json(const json& j, Payments& name){}
void from_json(const json& j, LabeledPrice& name){
	name.label=j.at("label").get<std::string>();
	name.amount=j.at("amount").get<int>();
}
void to_json(const json& j, LabeledPrice& name){}
void from_json(const json& j, Invoice& name){
	name.title=j.at("title").get<std::string>();
	name.description=j.at("description").get<std::string>();
	name.start_parameter=j.at("start_parameter").get<std::string>();
	name.currency=j.at("currency").get<std::string>();
	name.total_amount=j.at("total_amount").get<int>();
}
void to_json(const json& j, Invoice& name){}
void from_json(const json& j, ShippingAddress& name){
	name.country_code=j.at("country_code").get<std::string>();
	name.state=j.at("state").get<std::string>();
	name.city=j.at("city").get<std::string>();
	name.street_line1=j.at("street_line1").get<std::string>();
	name.street_line2=j.at("street_line2").get<std::string>();
	name.post_code=j.at("post_code").get<std::string>();
}
void to_json(const json& j, ShippingAddress& name){}
void from_json(const json& j, OrderInfo& name){
	name.name=j.at("name").get<std::string>();
	name.phone_number=j.at("phone_number").get<std::string>();
	name.email=j.at("email").get<std::string>();
	name.shipping_address=std::make_shared<ShippingAddress >(j.at("shipping_address").get<ShippingAddress>());
}
void to_json(const json& j, OrderInfo& name){}
void from_json(const json& j, ShippingOption& name){
	name.id=j.at("id").get<std::string>();
	name.title=j.at("title").get<std::string>();
    std::vector<std::shared_ptr<std::vector<LabeledPrice>>> p;
for(auto a:j.at("prices").get<std::vector<std::vector<LabeledPrice>>>()){
p.push_back(std::make_shared<std::vector<LabeledPrice>>(a));
    }	name.prices=std::make_shared<std::vector<LabeledPrice> >(j.at("prices").get<std::vector<LabeledPrice>>());
}
void to_json(const json& j, ShippingOption& name){}
void from_json(const json& j, SuccessfulPayment& name){
	name.currency=j.at("currency").get<std::string>();
	name.total_amount=j.at("total_amount").get<int>();
	name.invoice_payload=j.at("invoice_payload").get<std::string>();
	name.shipping_option_id=j.at("shipping_option_id").get<std::string>();
	name.order_info=std::make_shared<OrderInfo >(j.at("order_info").get<OrderInfo>());
	name.telegram_payment_charge_id=j.at("telegram_payment_charge_id").get<std::string>();
	name.provider_payment_charge_id=j.at("provider_payment_charge_id").get<std::string>();
}
void to_json(const json& j, SuccessfulPayment& name){}
void from_json(const json& j, ShippingQuery& name){
	name.id=j.at("id").get<std::string>();
	name.from=std::make_shared<User >(j.at("from").get<User>());
	name.invoice_payload=j.at("invoice_payload").get<std::string>();
	name.shipping_address=std::make_shared<ShippingAddress >(j.at("shipping_address").get<ShippingAddress>());
}
void to_json(const json& j, ShippingQuery& name){}
void from_json(const json& j, PreCheckoutQuery& name){
	name.id=j.at("id").get<std::string>();
	name.from=std::make_shared<User >(j.at("from").get<User>());
	name.currency=j.at("currency").get<std::string>();
	name.total_amount=j.at("total_amount").get<int>();
	name.invoice_payload=j.at("invoice_payload").get<std::string>();
	name.shipping_option_id=j.at("shipping_option_id").get<std::string>();
	name.order_info=std::make_shared<OrderInfo >(j.at("order_info").get<OrderInfo>());
}
void to_json(const json& j, PreCheckoutQuery& name){}
void from_json(const json& j, PassportData& name){
    std::vector<std::shared_ptr<std::vector<EncryptedPassportElement>>> p;
for(auto a:j.at("data").get<std::vector<std::vector<EncryptedPassportElement>>>()){
p.push_back(std::make_shared<std::vector<EncryptedPassportElement>>(a));
    }	name.data=std::make_shared<std::vector<EncryptedPassportElement> >(j.at("data").get<std::vector<EncryptedPassportElement>>());
	name.credentials=std::make_shared<EncryptedCredentials >(j.at("credentials").get<EncryptedCredentials>());
}
void to_json(const json& j, PassportData& name){}
void from_json(const json& j, PassportFile& name){
	name.file_id=j.at("file_id").get<std::string>();
	name.file_unique_id=j.at("file_unique_id").get<std::string>();
	name.file_size=j.at("file_size").get<int>();
	name.file_date=j.at("file_date").get<int>();
}
void to_json(const json& j, PassportFile& name){}
void from_json(const json& j, EncryptedPassportElement& name){
	name.type=j.at("type").get<std::string>();
	name.data=j.at("data").get<std::string>();
	name.phone_number=j.at("phone_number").get<std::string>();
	name.email=j.at("email").get<std::string>();
    std::vector<std::shared_ptr<std::vector<PassportFile>>> p;
for(auto a:j.at("files").get<std::vector<std::vector<PassportFile>>>()){
p.push_back(std::make_shared<std::vector<PassportFile>>(a));
    }	name.files=std::make_shared<std::vector<PassportFile> >(j.at("files").get<std::vector<PassportFile>>());
	name.front_side=std::make_shared<PassportFile >(j.at("front_side").get<PassportFile>());
	name.reverse_side=std::make_shared<PassportFile >(j.at("reverse_side").get<PassportFile>());
	name.selfie=std::make_shared<PassportFile >(j.at("selfie").get<PassportFile>());
    std::vector<std::shared_ptr<std::vector<PassportFile>>> p;
for(auto a:j.at("translation").get<std::vector<std::vector<PassportFile>>>()){
p.push_back(std::make_shared<std::vector<PassportFile>>(a));
    }	name.translation=std::make_shared<std::vector<PassportFile> >(j.at("translation").get<std::vector<PassportFile>>());
	name.hash=j.at("hash").get<std::string>();
}
void to_json(const json& j, EncryptedPassportElement& name){}
void from_json(const json& j, EncryptedCredentials& name){
	name.data=j.at("data").get<std::string>();
	name.hash=j.at("hash").get<std::string>();
	name.secret=j.at("secret").get<std::string>();
}
void to_json(const json& j, EncryptedCredentials& name){}
void from_json(const json& j, PassportElementError& name){
	name.source=j.at("source").get<std::string>();
	name.type=j.at("type").get<std::string>();
	name.field_name=j.at("field_name").get<std::string>();
	name.data_hash=j.at("data_hash").get<std::string>();
	name.message=j.at("message").get<std::string>();
}
void to_json(const json& j, PassportElementError& name){}
void from_json(const json& j, PassportElementErrorDataField& name){
	name.source=j.at("source").get<std::string>();
	name.type=j.at("type").get<std::string>();
	name.field_name=j.at("field_name").get<std::string>();
	name.data_hash=j.at("data_hash").get<std::string>();
	name.message=j.at("message").get<std::string>();
}
void to_json(const json& j, PassportElementErrorDataField& name){}
void from_json(const json& j, PassportElementErrorFrontSide& name){
	name.source=j.at("source").get<std::string>();
	name.type=j.at("type").get<std::string>();
	name.file_hash=j.at("file_hash").get<std::string>();
	name.message=j.at("message").get<std::string>();
}
void to_json(const json& j, PassportElementErrorFrontSide& name){}
void from_json(const json& j, PassportElementErrorReverseSide& name){
	name.source=j.at("source").get<std::string>();
	name.type=j.at("type").get<std::string>();
	name.file_hash=j.at("file_hash").get<std::string>();
	name.message=j.at("message").get<std::string>();
}
void to_json(const json& j, PassportElementErrorReverseSide& name){}
void from_json(const json& j, PassportElementErrorSelfie& name){
	name.source=j.at("source").get<std::string>();
	name.type=j.at("type").get<std::string>();
	name.file_hash=j.at("file_hash").get<std::string>();
	name.message=j.at("message").get<std::string>();
}
void to_json(const json& j, PassportElementErrorSelfie& name){}
void from_json(const json& j, PassportElementErrorFile& name){
	name.source=j.at("source").get<std::string>();
	name.type=j.at("type").get<std::string>();
	name.file_hash=j.at("file_hash").get<std::string>();
	name.message=j.at("message").get<std::string>();
}
void to_json(const json& j, PassportElementErrorFile& name){}
void from_json(const json& j, PassportElementErrorFiles& name){
	name.source=j.at("source").get<std::string>();
	name.type=j.at("type").get<std::string>();
	name.file_hashes=j.at("file_hashes").get<std::string>();
	name.message=j.at("message").get<std::string>();
}
void to_json(const json& j, PassportElementErrorFiles& name){}
void from_json(const json& j, PassportElementErrorTranslationFile& name){
	name.source=j.at("source").get<std::string>();
	name.type=j.at("type").get<std::string>();
	name.file_hash=j.at("file_hash").get<std::string>();
	name.message=j.at("message").get<std::string>();
}
void to_json(const json& j, PassportElementErrorTranslationFile& name){}
void from_json(const json& j, PassportElementErrorTranslationFiles& name){
	name.source=j.at("source").get<std::string>();
	name.type=j.at("type").get<std::string>();
	name.file_hashes=j.at("file_hashes").get<std::string>();
	name.message=j.at("message").get<std::string>();
}
void to_json(const json& j, PassportElementErrorTranslationFiles& name){}
void from_json(const json& j, PassportElementErrorUnspecified& name){
	name.source=j.at("source").get<std::string>();
	name.type=j.at("type").get<std::string>();
	name.element_hash=j.at("element_hash").get<std::string>();
	name.message=j.at("message").get<std::string>();
}
void to_json(const json& j, PassportElementErrorUnspecified& name){}
void from_json(const json& j, Games& name){
}
void to_json(const json& j, Games& name){}
void from_json(const json& j, Game& name){
	name.title=j.at("title").get<std::string>();
	name.description=j.at("description").get<std::string>();
    std::vector<std::shared_ptr<std::vector<PhotoSize>>> p;
for(auto a:j.at("photo").get<std::vector<std::vector<PhotoSize>>>()){
p.push_back(std::make_shared<std::vector<PhotoSize>>(a));
    }	name.photo=std::make_shared<std::vector<PhotoSize> >(j.at("photo").get<std::vector<PhotoSize>>());
	name.text=j.at("text").get<std::string>();
    std::vector<std::shared_ptr<std::vector<MessageEntity>>> p;
for(auto a:j.at("text_entities").get<std::vector<std::vector<MessageEntity>>>()){
p.push_back(std::make_shared<std::vector<MessageEntity>>(a));
    }	name.text_entities=std::make_shared<std::vector<MessageEntity> >(j.at("text_entities").get<std::vector<MessageEntity>>());
	name.animation=std::make_shared<Animation >(j.at("animation").get<Animation>());
}
void to_json(const json& j, Game& name){}
void from_json(const json& j, CallbackGame& name){
}
void to_json(const json& j, CallbackGame& name){}
void from_json(const json& j, GameHighScore& name){
	name.position=j.at("position").get<int>();
	name.user=std::make_shared<User >(j.at("user").get<User>());
	name.score=j.at("score").get<int>();
}
void to_json(const json& j, GameHighScore& name){}
