bool compare_double(double x, double y) {
    double pogr = 0.1
    #include <math.h>
    if ((abs(x) - abs(y))<=pogr){
        return true; 
    }
    else {
        return false;
    }
}
int get_nearest_int(double x) {
    #include <math.h>
    return (int)round(x);
}

double get_fractional(double x) {
    #include <math.h>
    return fmod(x,1.0);
}

