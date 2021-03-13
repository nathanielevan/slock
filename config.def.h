/* user and group to drop privileges to */
static const char *user  = "nate";
static const char *group = "users";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#2E3440",     /* after initialization */
	[INPUT] =  "#5E81AC",   /* during input */
	[FAILED] = "#BF616A",   /* wrong password */
	[PAM] =    "#8FBCBB",   /* waiting for PAM */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* default message */
static const char * message = "Enter password to unlock.";

/* text color */
static const char * text_color = "#d8dee9";

/* text size (must be a valid size) */
static const char * font_name = "6x13";

/* time in seconds before the monitor shuts down */
static const int monitortime = 60;

/* PAM service that's used for authentication */
static const char* pam_service = "login";
