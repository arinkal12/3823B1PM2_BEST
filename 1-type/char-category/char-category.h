#include <stdbool.h>


bool is_digit(char x) {
    return ("0" <= x && x <= "9");
}

bool is_letter(char x) {
    return ((x>="a" && x<= "z")||(x>="A" && x<= "Z")); // No implementation
}

bool is_punctuation(char x) {
    return ((x>="!" && x<= "/")|| (x>=":" && x<= "@")||(x>="[" && x<= "`")||(x>="{" && x<= "~")); // No implementation
}

int get_ascii_code(char first, char second, char third) {
    int f,s,t;
    //f = int(first);
    //if 
    //return ; 
}

