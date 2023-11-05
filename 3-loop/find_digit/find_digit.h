#include <math.h>
#include <stdio.h>

char find_digit(double number, char digit){
    char str[100];
    sprintf(str, "%f", number); 
    int length = strlen(str);
    
    for (int i = 0; i < length; i++) {
        if (str[i] == digit) {
            return i + 1; 
        }
    
    }
}