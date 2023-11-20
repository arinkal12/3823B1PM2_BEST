#include <math.h>

int scalar_product(int* vec1, int* vec2, int size){
    double ob_proizw = 0.0;
    double pr1 = 0.0;
    double pr2 = 0.0;
    for (int i = 0; i < size; i++){
        ob_proizw += vec1[i] * vec2[i];
        pr1 += vec1[i] * vec1[i];
        pr2 += vec2[i] * vec2[i];
    }
    double koren = sqrt(pr1 * pr2);
    double rad = acos(ob_proizw /koren);
    double grad = rad * 180 /3.1415;
    return (int)grad;
}

   