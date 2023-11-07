#include <math.h>

int calc_percent(int matrix[], int size){
    int max = 0;
    int min = 0;
    for( int i =0; i !=size; i++){
        if( matrix[i]> max){
            max= matrix[i];
        }
        if (matrix[i]<min){
            min = matrix[i];
        }

    }
    int r = (max-min)/2;
    int count = 0;
    for(int i =0; i !=size; i++){
        if (matrix[i]>r){
            count++;
        }
    }
    
    return (count * 100)/size;
}