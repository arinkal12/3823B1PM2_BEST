#include <math.h>

int scalar_product(int* vec1, int* vec2, int size){
    int skal_priz = 0;
    for (int i = 0; i<size; i++){
        skal_priz+= vec1[1]*vec2[i];
    }
    double  res = acos(skal_priz/size*size);
    return res;
}
