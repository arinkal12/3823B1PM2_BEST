int maxmin(int input[], int size){
    int col = 0;
    int max=0;
    for (int i =1; i< size;i++){
        if ((input[i]<input[i+1]) && (input[i]<input[i-1])) {
            if (max< input[i]) max = input[i];

        }
    if (input[size]<input[size-1]){
        if (max <input[size] ) max = input[size];
    }
    if (input[0]<input[1]){
        if (max <input[0] ) max = input[0];
    }    
        


    }
    return max;
}