#include <ColorPair.h>

extern void ColorPairToString(const ColorPair* colorPair, char* buffer);
extern ColorPair GetColorFromPairNumber(int pairNumber);
extern void testNumberToPair(int pairNumber,    enum MajorColor expectedMajor,    enum MinorColor expectedMinor);
