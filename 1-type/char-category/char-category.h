#include <stdbool.h>
#include <ctype.h>

bool is_digit(char x) {
    return ('0' <= x && x <= '9');
}

bool is_letter(char x) {
    return (('a' <= x && x <= 'z') || ('A' <= x && x <= 'Z'));
}

bool is_punctuation(char x) {
    return (('!' <= x && x <= '/') || (':' <= x && x <= '@') || ('[' <= x && x <= '`') || ('{' <= x && x <= '~'));
}

int get_ascii_code(char first, char second, char third) {
    int f,s,t;
    //f = int(first);
    //if 
    //return ; 
}

