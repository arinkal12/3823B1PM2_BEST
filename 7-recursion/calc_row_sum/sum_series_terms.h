#include <math.h>
#include <stdio.h>

double posl(int n){
    if (n == 0) {
        return 0;
    } else {
        return 1.0/n + posl(n-1);
    }

}
double sum_series(int n){
    if (n <=0) {
        return -1;
    }
    else return posl(n);
    
}
