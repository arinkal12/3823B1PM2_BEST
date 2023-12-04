#include <math.h>
#include <stdlib.h>
int* gen(int size, int f, int k, int m ){
    int* arr=malloc(sizeof(int)*size);
    arr[0]=f;
    for (int i=1; i<size; i++){
        arr[i]=(k-m)/(4);
    }
    return arr;
}


int* array_generator(int* real_size, int k, int m, int f){
    *real_size=10+rand()%90;
    int* arr=gen(*real_size, f,k,m);
    
    return arr;
}
