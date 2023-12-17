//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"  ", "bash /home/lucy/.dwm/volume.sh",	1,		0},
  {"  ", "bash /home/lucy/.dwm/spot_playing.sh | tr -d '\n'", 1, 1},
	{"  ", "date '+%d.%m.%Y | %H:%M'",					5,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
