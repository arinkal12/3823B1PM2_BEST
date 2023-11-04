#include <math.h>

double limit(double eps, int n_max){
    double tek = 0.0;
    double pred = 0.0;
    
    for (int n = 1; n <= n_max; n++) {
        pred = tek;
        double znam = sqrt(n * n + n);
        if (znam != 0) {
            tek = (double)n / znam;
        } else {
            break;
        }

        if (fabs(tek - pred) < eps) {
            break;
        }
    }
    return tek;
}