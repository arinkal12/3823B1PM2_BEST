#include <math.h>

int determinant(int matrix[], int size){
    int sum = 0;
    int det = 0;
    int long a,s,d,f;
    int res =0;
    if (size == 12) return -404;
    else if (size == 4) return (matrix[0]*matrix[3]- matrix[2]*matrix[1]);
    
    else if (size == 9){ 
       return matrix[0] * matrix[4] * matrix[8] + matrix[1] * matrix[5] * matrix[6] + matrix[2]*matrix[3]*matrix[7] -matrix[0]*matrix[5]*matrix[7]- matrix[2]*matrix[4]*matrix[6]-matrix[1]*matrix[3]*matrix[8];
    }
    else if (size == 16){
        return matrix[0] * matrix[5] * matrix[10] * matrix[15] +
          matrix[0] * matrix[6] * matrix[11] * matrix[13] +
          matrix[0] * matrix[7] * matrix[9] * matrix[14] +
          matrix[1] * matrix[4] * matrix[11] * matrix[14] +
          matrix[1] * matrix[6] * matrix[8] * matrix[15] +
          matrix[1] * matrix[7] * matrix[10] * matrix[12] +
          matrix[2] * matrix[4] * matrix[9] * matrix[15] +
          matrix[2] * matrix[5] * matrix[11] * matrix[12] +
          matrix[2] * matrix[7] * matrix[8] * matrix[13] +
          matrix[3] * matrix[4] * matrix[10] * matrix[13] +
          matrix[3] * matrix[5] * matrix[8] * matrix[14] +
          matrix[3] * matrix[6] * matrix[9] * matrix[12] -
          matrix[0] * matrix[5] * matrix[11] * matrix[14] -
          matrix[0] * matrix[6] * matrix[9] * matrix[15] -
          matrix[0] * matrix[7] * matrix[10] * matrix[13] -
          matrix[1] * matrix[4] * matrix[10] * matrix[15] -
          matrix[1] * matrix[6] * matrix[11] * matrix[12] -
          matrix[1] * matrix[7] * matrix[8] * matrix[14] -
          matrix[2] * matrix[4] * matrix[11] * matrix[13] -
          matrix[2] * matrix[5] * matrix[8] * matrix[15] -
          matrix[2] * matrix[7] * matrix[9] * matrix[12] -
          matrix[3] * matrix[4] * matrix[9] * matrix[14] -
          matrix[3] * matrix[5] * matrix[10] * matrix[12] -
          matrix[3] * matrix[6] * matrix[8] * matrix[13];

        
    }
   
    else if (size == 25){
        return  matrix[0] * (matrix[6] * (matrix[12] * (matrix[18] * matrix[24] - matrix[19] * matrix[23]) - matrix[13] * (matrix[17] * matrix[24] - matrix[19] * matrix[22]) + matrix[14] * (matrix[17] * matrix[23] - matrix[18] * matrix[22])) - 
                     matrix[7] * (matrix[11] * (matrix[12] * (matrix[18] * matrix[24] - matrix[19] * matrix[23]) - matrix[13] * (matrix[17] * matrix[24] - matrix[19] * matrix[22]) + matrix[14] * (matrix[17] * matrix[23] - matrix[18] * matrix[22])) - 
                     matrix[15] * (matrix[8] * (matrix[12] * (matrix[18] * matrix[24] - matrix[19] * matrix[23]) - matrix[13] * (matrix[17] * matrix[24] - matrix[19] * matrix[22]) + matrix[14] * (matrix[17] * matrix[23] - matrix[18] * matrix[22])) - 
                                   matrix[16] * (matrix[8] * (matrix[17] * matrix[24] - matrix[19] * matrix[22]) - matrix[13] * (matrix[16] * matrix[24] - matrix[19] * matrix[21]) + matrix[14] * (matrix[16] * matrix[23] - matrix[17] * matrix[21])) + 
                     matrix[10] * (matrix[12] * (matrix[15] * matrix[24] - matrix[16] * matrix[23]) - matrix[13] * (matrix[14] * matrix[24] - matrix[16] * matrix[22]) + matrix[14] * (matrix[14] * matrix[23] - matrix[15] * matrix[22])))) + 
                     matrix[20] * (matrix[11] * (matrix[17] * matrix[22] - matrix[18] * matrix[21]) - matrix[13] * (matrix[17] * matrix[20] - matrix[18] * matrix[19]) + matrix[14] * (matrix[16] * matrix[20] - matrix[17] * matrix[18])));
    }
   
    

}