//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/	 	/*Update Interval*/	/*Update Signal*/
  //    {" 🐧 ", "/home/konner/.local/bin/kernel",		    360,		        2},

  {" ", "/home/konner/.local/bin/volumestat",			1,		            10},

  //  {" ", "/home/konner/.local/bin/upt",		        60,		            2},

  //  {" ", "/home/konner/.local/bin/pacupdate",		360,		        9},
	
  {" ", "/home/konner/.local/bin/cpustat",                     5,                          1},

  {" ", "/home/konner/.local/bin/memory",	                5,		            1},

  {" ", "$HOME/.local/bin/battery",                             5,                          1},
  
  {"", "/home/konner/.local/bin/weather",                       60,                         2},
	
  {" ", "/home/konner/.local/bin/clock",			1,		            0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
