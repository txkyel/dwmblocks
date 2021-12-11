//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",		"sb-cpu",		5,			0},
	{"",		"sb-memory",		5,			0},
	{"",		"sb-brightness",	0,			2},
	{"",		"sb-volume",		0,			1},
	{"",		"sb-battery",		15,			0},
	{"", 		"sb-time",		60,			0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
