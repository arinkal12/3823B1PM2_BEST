int icecream(int x){
    if ((x < 3) || (x==4)){
        return 0 ;
    }
    else if (((x % 3 == 0) || (x % 5 == 0)||(x%8==0)))
    {
        return 1;
    }
    
}