#include <math.h>
bool compare_double(double x, double y) {
    if (fabs(x - y) < 0.000001) {
        return true;
    } else {
        return false;
    }
    
}

int get_nearest_int(double x) {
     if (x >= 0) {
        return (int)(x + 0.5);
    } else {
        return (int)(x - 0.5);
    }
    
}

double get_fractional(double x) {
    return x - floor(x);
}
