/* user and group to drop privileges to */
static const char *user  = "nate";
static const char *group = "users";

static const char *colorname[NUMCOLS][2] = {
	/*     bg         fg       */
	[INIT] =   { "#0b1726", "#fff6e6" },  /* after initialization */
	[INPUT] =  { "#e9986d", "#0b1726" },  /* during input */
	[FAILED] = { "#c20f47", "#fff6e6" },  /* wrong password */
	[PAM] =    { "#5d92bf", "#0b1726" },  /* waiting for PAM */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* default message */
static const char * default_message = "Enter password to unlock.";

/* pam message */
static const char * pam_message = "Authenticating...";

/* text size (must be a valid size) */
static const char * font_name = "InconsolataGo Nerd Font Mono:size=20:antialias=true:autohint=true";

/* time in seconds before the monitor shuts down */
static const int monitortime = 60;

/* PAM service that's used for authentication */
static const char* pam_service = "login";
