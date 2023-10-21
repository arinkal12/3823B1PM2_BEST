int chocolate(int n, int m, int k){
    if (n<=0 || m<=0 || k > n*m || (n>1&& m>1&&k==1)||(k%n!=0)){
        return 0;
    }
    else if ((k%n==0))
    {
        return 1;
    }
    
   
}