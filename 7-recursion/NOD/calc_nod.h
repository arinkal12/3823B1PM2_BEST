#include <math.h>

int nod(int first, int second){
    if (first == second)return first;
    if ((first == 0) || (second==0) || (first <0) || (second<0)) return -1;
    if (first>second){
        return nod(first-second,second);
    }
    else{
        return nod(first, second-first);
    }
}
