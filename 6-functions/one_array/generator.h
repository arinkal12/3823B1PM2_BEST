#include <math.h>
#include <stdlib.h>

int* array_generator(int* real_size, int k, int m, int f){
    int a = 55;
    *real_size=a;
    int* mass = malloc(a*sizeof(int));
    mass[0]= f;
    for (int i = 1; i< a; i++){
        mass[i]=0;
    }
    
    return mass;
}
