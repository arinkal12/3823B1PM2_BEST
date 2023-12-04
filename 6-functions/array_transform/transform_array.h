#include <math.h>
#include <stdlib.h>

void transform(double* array, int size, int* comands, int comands_count){
    double sr_ar = 0.0;
    int summ_el=0;
    for (int i = 0; i<size;i++){
        summ_el+= array[i];
    }
    sr_ar = summ_el/size;
    
    for (int i = 0; i<comands_count;i++){
        if (comands[i] == 1){
            for (int k =0; k<size;k++){
                array[k]+=1;
            }
        }
        if (comands[i] == 2){
            for(int c = 0; c< size; c++){
                array[c] = sqrt(fabs(array[c]));
            }
        }
        if (comands[i] == 3){
            double sum=0;
            for (int i=0; i<size; i++){
                sum+=array[i];  
            }

            for (int i=0; i<size; i++){
                array[i]=pow((fabs)(array[i]),(sum/size));
            }

        }
        if (comands[i]==4){
            for(int j =0; j<size;j++){
                if ( ((int)fabs(array[j]))%2 ==0){
                    array[j]*= (-1);
                }
                else if ( ((int)fabs(array[j]))%2 !=0) {
                    array[j] = 1/array[j];
                }
            }
        }
        if (comands[i]==5){
            for(int a = 0; a<size;a++){
                if((a%2 ==0) && (((int)fabs(array[a]))%2 ==0)){
                    array[a] = 0;
                }
            }
        }
        if (comands[i] == 6){
            for (int j = 0; j < size; j++){
                if (j < size / 2 + 1)
                    array[j] = -10;
                else
                    array[j] = 10;
                }
            }

        

    }   


    return;
}
