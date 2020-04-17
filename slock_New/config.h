/* user and group to drop privileges to */
static const char *user  = "roidujeu";
static const char *group = "wheel";

static const char *colorname[NUMCOLS] = {
	/* allow control key to trigger fail on clear */
	[INIT] =   "#000000",     /* after initialization */
	[INPUT] =  "#00ff77",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
static const int controlkeyclear = 0;
