#include <math.h>
#include <stdio.h>

double sum_series(int n){
    
   // if (n<=0){
        // return-1;
        
   // }
    if (n == 0) {
        return 0;
    } else {
        return (1.0 / n) +  sum_series(n - 1);
    }
    
}
