#include <math.h>

unsigned int little_big_convert(unsigned int input){
    unsigned char bait1 = (unsigned char)(input >> 24);
    unsigned char bait2 = (unsigned char)(input >> 16);
    unsigned char bait3 = (unsigned char)(input >> 8);
    unsigned char bait4 = (unsigned char)input;
    return bait1 +bait2*256 +bait3*256*256 +bait4*256*256*256;
}