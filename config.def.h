/* user and group to drop privileges to */
static const char *user  = "nate";
static const char *group = "users";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#282828",     /* after initialization */
	[INPUT] =  "#d8a657",   /* during input */
	[FAILED] = "#ea6962",   /* wrong password */
	[PAM] =    "#a9b665",   /* waiting for PAM */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* time in seconds before the monitor shuts down */
static const int monitortime = 60;

/* PAM service that's used for authentication */
static const char* pam_service = "login";
