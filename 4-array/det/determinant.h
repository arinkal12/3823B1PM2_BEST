#include <math.h>

int determinant(int matrix[], int size){
    if (size == 4) return (matrix[0]*matrix[3]- matrix[2]*matrix[1]);
    return 0;
}