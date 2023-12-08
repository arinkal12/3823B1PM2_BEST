#include <math.h>

double calc_sum_elements(int* array, int array_size){
    if (array_size<=0) return -1;
    if (array_size==0){
        return 0;
    }
    else return array[array_size-1] + calc_sum_elements(array, array_size - 1);
    
}
