#include <math.h>
int sum_ar(int* arr, int size){
    if (size==0){
        return 0;
    }
    else {
        return arr[size-1] + sum_ar(arr, size - 1);
    }

}

double calc_sum_elements(int* array, int array_size){
    if (array_size<=0) return -1;
    else return sum_ar(array, array_size);
}
