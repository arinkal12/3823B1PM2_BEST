#include <math.h>
#include <string.h>
#include <stdlib.h>
int num(char* str){
    int res = 0;
    int num = 0;
    char operatorr = '+';
    int i;
    int len = strlen(str);
    for (i = 0; i <= len; i++) {
        if (str[i]== '+' && str[i+1]=='-') return -1;
        if (str[i] >= '0' && str[i] <= '9') {
            num = num * 10 + (int)(str[i] - '0');
        } else {
            if (operatorr == '+') {
                res += num;
            } else {
                res -= num;
            }
            num = 0;
            if(str[i] == '+' || str[i] == '-')
            {
                operatorr =str[i];
            }
        }
    }
    
    return res;
}
int calculate_expression(char expression[]){

    return num(expression);
}
