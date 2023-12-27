#include <math.h>
#include <string.h>
#include <stdio.h>

typedef struct 
{
    unsigned char day;
    unsigned char month;
    unsigned int year;
} BornDate;

typedef struct 
{
    char name[10];
    char surname[20];
    BornDate borndate;
} Person;



double calc_avg_age(Person* persons, int num_persons){
    double sr_vozr = 0;
    int god = 2023;
    //int god_chel = 0;
    for(int i = 0; i<num_persons;i++){
        int god_chel = god - persons[i].borndate.year;
        sr_vozr+=god_chel;

    }
    return sr_vozr/num_persons;
}
