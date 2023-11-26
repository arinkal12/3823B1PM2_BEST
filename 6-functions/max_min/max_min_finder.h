#include <math.h>

void get_max_min(int* array, int size, int* pMax, int* pMin){
    *pMax = -79875;
    *pMin = 94948;
    for (int i = 0; i< size;i++){
        if (*pMax<array[i]) *pMax = array[i];
        if (*pMin> array[i]) *pMin = array[i];
    }
    return;
}
