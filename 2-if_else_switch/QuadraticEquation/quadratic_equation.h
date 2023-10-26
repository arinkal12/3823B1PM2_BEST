#include <math.h>
int QuadraticEquation(double a, double b, double c){
    double discr =b*b-4*a*c;
    if(discr>0){
		double x1=(-b+sqrt(discr))/(2*a);
		double x2=(-b-sqrt(discr))/(2*a);
		return x1+x2;
    }
    else if(discr==0)
		return -b/(2*a);
	else{
		double x1=(-b)/(2*a) + (sqrt(fabs(discr))) / (2 * a);
		double x2=(-b)/(2*a) - (sqrt(fabs(discr))) / (2 * a);
        return (int)(x1 + x2);
    }
   
}