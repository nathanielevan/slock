/* user and group to drop privileges to */
static const char *user  = "nate";
static const char *group = "users";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#0b1726",     /* after initialization */
	[INPUT] =  "#e9986d",   /* during input */
	[FAILED] = "#c20f47",   /* wrong password */
	[PAM] =    "#5d92bf",   /* waiting for PAM */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* time in seconds before the monitor shuts down */
static const int monitortime = 60;

/* PAM service that's used for authentication */
static const char* pam_service = "login";
