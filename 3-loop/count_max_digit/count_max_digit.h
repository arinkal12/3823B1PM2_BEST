#include <math.h>

char count_max_digit(long long int num){
    if (num<0) num = num*(-1);
    long long int cisl = num;
    int max = 0;
    int count = 0;
    while(num!=0){
        if ( max <(num%10)) {
            max = num%10;
        }
        num/=10;     
    }
    while(cisl!=0){
        if (max == (cisl%10)) count++;
        cisl/=10;
    }

    return count;
}