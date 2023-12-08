#include <math.h>

void reverse_array(int* array, int array_size){
    if (array_size <= 0 ) {
        return;
    }
    int p = array[0];
    array[0] = array[array_size - 1];
    array[array_size - 1] = p;

    reverse_array(array + 1, array_size - 2);

}
