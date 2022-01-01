/* user and group to drop privileges to */
static const char *user  = "nate";
static const char *group = "users";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#0b1726",     /* after initialization */
	[INPUT] =  "#e9986d",   /* during input */
	[FAILED] = "#c20f47",   /* wrong password */
	[PAM] =    "#25a37e",   /* waiting for PAM */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* default message */
static const char * message = "Enter password to unlock.";

/* text color */
static const char * text_color = "#fff6e6";

/* text size (must be a valid size) */
static const char * font_name = "Iosevka Nerd Font Mono:pixelsize=24:antialias=true:autohint=true";

/* time in seconds before the monitor shuts down */
static const int monitortime = 60;

/* PAM service that's used for authentication */
static const char* pam_service = "login";
