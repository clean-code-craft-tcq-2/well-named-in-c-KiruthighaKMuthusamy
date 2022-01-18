#include "ColorPair.h"

void ColorNamesToString(const ColorPair* colorPair, char* Majorbuffer, char* Minorbuffer)
 {
    sprintf(bufferMajorbuffer, "%s",
        MajorColorNames[colorPair->majorColor]);
	sprintf(bufferMajorbuffer, "%s",
        MinorColorNames[colorPair->minorColor]);
 }


void PrintManual()
 {
  TotalColorPairNum = numberOfMajorColors * numberOfMinorColors;
  printf("~~~~~~~~~~~~~COLOR CODE MANUAL~~~~~~~~~~~~~~~\n");
	for (int ColorNumber= 1 ; i<=TotalColorPairNum ; ColorNumber++)
	{
	  ColorPair colorPair = GetColorFromPairNumber(ColorNumber);
	  char MajorColorName[MAX_COLORPAIR_NAME_CHARS/2], MinorColorName[MAX_COLORPAIR_NAME_CHARS/2];  
	  ColorNamesToString(ColorPair,MajorColorName,MinorColorName);
	  printf("Pair Number: %d Major and Minor Color Names: %s ,%s\n", ColorNumber, MajorColorName, MinorColorName);
	  
	}
 }

