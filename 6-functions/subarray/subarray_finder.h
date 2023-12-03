#include <math.h>
int podmass(int *array, int size1, int *subArray, int size2) {
    for (int i = 0; i <= size1 - size2; i++) {
        int j;
        for (j = 0; j < size2; j++) {
            if (array[i + j] != subArray[j]) {
                break;
            }
        }
        if (j == size2) {
            return i;
        }
    }
    return -1;
}

int find_subarray(int* array, int array_size, int* subarray1, int subarray_size1, int* subarray2, int subarray_size2, int* subarray3, int subarray_size3){
    int index1 = podmass(array, array_size, subarray1, subarray_size1);
    int index2 = podmass(array, array_size, subarray2, subarray_size2);
    int index3 = podmass(array, array_size, subarray3, subarray_size3);
    return index1+index2+index3;
}
