int chess_rook(char a, int b, char c, int d){
    if ((a==c && b==d)||(a!=c && b!=d) || a>72||c>72||b>8||d>8){
        return 0;
    }
    else if (((a==c) && (b!=d))||((a!=c) && (b==d)))
    {
        return 1;
    }
    
 
}