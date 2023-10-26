#include <stdint.h>
unsigned char max_byte(unsigned short number) {
    uint8_t max1 = number; 
    number >>= 8; 
    uint8_t max2 = number; 

    if (max1 > max2) return max1; 
    else return max2; 
}

  