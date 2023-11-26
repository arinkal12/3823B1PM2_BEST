#include <math.h>
#include <stdint.h> 


unsigned long long pack_ull(unsigned char arr[], int size){
   if (size > 8) {
        return 0;  
    }
    unsigned long long ypakovka = 0;
    for (int i = 0; i < size; i++) {
        ypakovka |= (unsigned long long)arr[i] << (i * 8); 
    } 
    return  ypakovka;
} 

unsigned char unpack_ull(unsigned long long input){
    unsigned char res = input >> 32;
    return res;
}

