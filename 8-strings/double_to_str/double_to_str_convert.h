#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* convert(double number){
    char* str =(char*)malloc(20 * sizeof(char));
    sprintf(str, "%f", number); 
    return str;
}






    /*char* str= (char*)(malloc(sizeof(number)));
    int cel_cast = int(number);
    double pr = number - cel_cast;
    double p = number - cel_cast;
    int count = 0;
    int integer = (int)pr; 
    while (integer != pr) //кол-во знаокв после занятой
    {
        pr *= 10; 
        count++;
        integer = (int)pr;
    }
    int posl_zap = 0;
    if (count == 1){
        posl_zap = 10*p;
    }
    else if (count == 2)
    {
        posl_zap = 100*p;
    }
    else if (count == 3)
    {
        posl_zap = 1000*p;
    }
    else if (count == 4)
    {
        posl_zap = 10000*p;
    }
    for (int i = 0; i<count;i++){
        str[i] = 
    }
  */  

