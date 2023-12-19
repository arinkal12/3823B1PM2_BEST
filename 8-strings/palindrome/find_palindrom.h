#include <math.h>
#include <string.h>

int is_palindrom(char text[]){
    int len = strlen(text);
    int j = len-1;
    int len_now =0;
    char now_text[];
    for (int i =0; i<len;i++){
        if (text[i]!= ' '){
            now_text[j] = text[i];
            j++;

        }
    }
    now_text[j] = '\0';
    int q = strlen(now_text)-1;
    if (len ==0) return 1;
    else{
        for( int i =0; i<j;i++,j--){
            if (now_text[i]!= now_text[j]){
                return 0;
            }
            else return 1;
        }
    }
    
}
