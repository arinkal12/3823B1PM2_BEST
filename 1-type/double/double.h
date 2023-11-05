#include <math.h>
bool compare_double(double x, double y) {
    double pogr = 0.1;
    if ((abs(x) - abs(y))<=pogr){
        return true; 
    }
    else {
        return false;
    }
}
int get_nearest_int(double x) {
    return (int)round(x);
}

double get_fractional(double x) {
    return fmod(x,1.0);
}

