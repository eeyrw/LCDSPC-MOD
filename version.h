#ifndef VERSION_H
#define VERSION_H

	//Date Version Types
	static const char SPC_DATE[] = "24";
	static const char SPC_MONTH[] = "09";
	static const char SPC_YEAR[] = "2020";
	static const char SPC_UBUNTU_VERSION_STYLE[] =  "20.09";
	
	//Software Status
	static const char SPC_STATUS[] =  "Alpha";
	static const char SPC_STATUS_SHORT[] =  "a";
	
	//Standard Version Type
	static const long SPC_MAJOR  = 1;
	static const long SPC_MINOR  = 0;
	static const long SPC_BUILD  = 46;
	static const long SPC_REVISION  = 275;
	
	//Miscellaneous Version Types
	static const long SPC_BUILDS_COUNT  = 52;
	#define SPC_RC_FILEVERSION 1,0,46,275
	#define SPC_RC_FILEVERSION_STRING "1, 0, 46, 275\0"
	static const char SPC_FULLVERSION_STRING [] = "1.0.46.275";
	
	//These values are to keep track of your versioning state, don't modify them.
	static const long SPC_BUILD_HISTORY  = 46;
	

#endif //VERSION_H
