long long calc_row(int n, long long k){
    if (k<-10) return 0;
    int q=0;
    long long sum = 0;
    while (q!=n)
    {
        q++;
        sum += q*k;
    }
    
    return sum;
}