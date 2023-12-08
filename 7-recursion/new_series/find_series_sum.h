#include <math.h>
double posl(int k) {
    if (k == 0) {
        return 0;
    } else {
        return (posl(k - 1) + 1) / k;
    }
}
double find_sum_elements_series(int k){
    if (k<0) return -1;
    double sum =0;
    if (k ==0) return 0;
    
    else{
        for (int i = 0; i<k;i++){
            sum+=posl(i);

        }
        
       
    }
    return sum;
    
}
