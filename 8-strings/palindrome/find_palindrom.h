#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int is_palindrom(char text[]){
    int len = strlen(text);
    int j = 0;
    int len_now =0;

    char* now_text=(char*)malloc(len*sizeof(char));
    for (int i =0; i<len;i++){
        if (text[i]!= ' '){
            now_text[j] = (char)tolower(text[i]);
            j++;

        }
    }
    now_text[j] = '\0';
    j--;
    if (len ==0) return 1;
    else{
        for( int i =0; i<(j/2);i++,j--){
            if (now_text[i]!= now_text[j]){
                free(now_text);
                return 0;
            }
            else{
                free(now_text);
                return 1;
            } 
        }
    }
    
    
}

