int num_invers(int num){
    if (num<0) return 0;
    int b = 0;
    while (num!=0){
        b = b*10+(num%10);
        num /=10;
    }
    return b;
}