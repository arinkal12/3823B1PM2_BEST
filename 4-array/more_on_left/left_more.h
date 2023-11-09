char left_more(double input[], unsigned int size){
    int col =0;
    for (int i=1; i<size; i++){
        if (input[i] > input[i - 1]) col++;
    }
    return col;
}