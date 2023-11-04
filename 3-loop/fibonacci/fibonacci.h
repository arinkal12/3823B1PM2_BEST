long fib(int m){
    if (m<1) return (-1);
    int sum = 0;
    int k0=0;
    int k1 = 1;
    int k2 = 1;
    while (k2<=m)
    {
        sum  +=k2;
        k0 = k1;
        k1 = k2;
        k2 = k0+k1;
    }
    sum+=1;
    return sum;
}