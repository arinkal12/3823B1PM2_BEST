#include <math.h>


int calcsize(void* memory){
    int size=0;
    char* arr=memory;
    int el1=0;
    int el2=0;
    for(int i=0;;i++){
        if (arr[i]==11){
            el1=i;
            break;
        }
    }
    for(int i=0;;i++){
        if (arr[i]==47){
            el2=i;
            break;
        } 
    }
    int raz=el2-el1;
    size=el2+raz;

    return size;
}
    

