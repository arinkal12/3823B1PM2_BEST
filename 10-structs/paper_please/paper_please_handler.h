#include <math.h>
#include <string.h>
#include <stdio.h>

struct BornDate {
    unsigned char day;
    unsigned char month;
    unsigned int year;
};

struct Pasport{
    char* name;
    char* surname;
    char gender; //M or F
    struct BornDate bornDate;
    char* country; // strana
};

struct Person
{
    char driver_license;// vod prava
    struct Pasport pasport;
    char* working_specialty;//cpec
};



unsigned char paper_please_game(struct Person* persons, unsigned char size){
    for (int i = 0; i < size; i++) {
        if (persons[i].pasport.bornDate.year >= 1983 &&
            (strcmp(persons[i].pasport.country, "Arstocka") == 0 || strcmp(persons[i].pasport.country, "Arcanistan") == 0) &&
            (strcmp(persons[i].working_specialty, "programmist") == 0 || strcmp(persons[i].working_specialty, "major") == 0 || strcmp(persons[i].working_specialty, "collective farmer") == 0) &&
            persons[i].driver_license == 'B') {
        }
    }
    //return 0; // как ставить отметку в файле???(((((

}
