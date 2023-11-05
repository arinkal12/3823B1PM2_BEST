#include <math.h>
#include<stdlib.h>
#include <stdlib.h>
#include <stdio.h>

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


    return count;
}