#include <math.h>

double kramer_method(int* matrix, int* vector, int size){
    double det_ocn = 0;
    double detX=0;
    double detY=0;
    double detZ=0;
    if (size==4){
        det_ocn=(double)(matrix[0] * matrix[3] - matrix[1] * matrix[2]);
        detX = (double)(vector[0] * matrix[3] - vector[1] * matrix[1]);
        detY = (double)(matrix[0] * vector[1] - matrix[2] * vector[0]);
    }
    else if (size == 9)
    {
        det_ocn = (double)(matrix[0] * matrix[4] * matrix[8] + matrix[1] * matrix[5] * matrix[6] +
                       matrix[2] * matrix[3] * matrix[7] - matrix[2] * matrix[4] * matrix[6] -
                       matrix[0] * matrix[5] * matrix[7] - matrix[1] * matrix[3] * matrix[8]);
                  
        detX = (double)(vector[0] * (matrix[4] * matrix[8] - matrix[5] * matrix[7]) -
                       vector[1] * (matrix[1] * matrix[8] - matrix[2] * matrix[7]) +
                       vector[2] * (matrix[1] * matrix[5] - matrix[2] * matrix[4]));
        detY =  (double)((matrix[0] * vector[1] - matrix[1] * vector[0]) * matrix[8] -
                       (matrix[3] * vector[1] - matrix[4] * vector[0]) * matrix[6] +(matrix[3] * vector[0] - matrix[0] * vector[1]) * matrix[7]);
        detZ =(double)((matrix[0] * matrix[5] - matrix[3] * matrix[2]) * vector[2] -
                       (matrix[1] * matrix[5] - matrix[4] * matrix[2]) * vector[1] +
                       (matrix[1] * matrix[3] - matrix[0] * matrix[4]) * vector[0]);

    }
    double x = detX / det_ocn;
    double y = detY / det_ocn;
    double z = detZ / det_ocn;
    if(det_ocn == 0){
        return -1;
    }
    else if(size == 4){
        return x+y;
    }
    else if (size == 9)
    {
        return x+y+z;
    }
}

