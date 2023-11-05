#include <math.h>
#include<stdlib.h>
#include <stdlib.h>
#include <stdio.h>

<<<<<<< HEAD
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

=======
char count_max_digit(long long int number){

    long long int maks = 0;
    long long int proc = 0;
    long long int del = number;
    long long int lelll= number;
    if (number<0){
        int num = number*(-1);
        del = num;
        lelll= num;

    }
    while (lelll!=0){
        proc = lelll%10;
       
        if (proc > maks){
            maks = proc;
        }
        lelll = lelll / 10;
    } 
    int max_chislo = maks;
  
    int count = 0;
    while (del!=0){
        int chislo = del%10;
        if (chislo == max_chislo){
             count ++;
        }
        del = del / 10;
    }


>>>>>>> 97e3d84d0d468907da135b1ca1017c02e3adc962
    return count;
}