#include <stdbool.h>
#include <ctype.h>

bool is_digit(char x) {
    //char smiley = '☺';
    //int ascii_code = (int)smiley;
    return  ((x >= '0' && x <= '9'));
    
}

bool is_letter(char x) {
    return ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'));
}

bool is_punctuation(char x) {
    
    return ( ((x >= '!' && x<= '/') || (x>= ':' && x <= '@') || (x>='[' && x<= '`') || (x>='{' && x<='~'))); 
    //|| (x=='!') || (x=='"') || (x=='#') || (x=='!') || (x=='"') || (x=='$') || (x=='!') || (x=='"') || (x=='#') || (x == '%') ||(x == '&')||(x == '(') || (x =='\'') ||(x == ')') ||(x == '*')||(x == '+') ||(x == ',') ||(x == '-') ||(x == '.') ||(x == '/') );
}

 //char ylib = 'u263A';

int get_ascii_code(char first, char second, char third) {
    int result = first;  
    result = (result * 1000) + second;  
    result = (result * 1000) + third;  

}


