long long change(int a, int b, int c, int d){
    int q = -1;
    if (c<a) {
       
        return q;
    }
    int ruba = a * 100;
    int copa = b;
    int rubc = c * 100;
    int copc = b;
    if (c>100000){
        if ((c- a)>-1 && ((copc-copa)>-1) ){
        return (((c- a)+(copc-copa))*100 );
        }
    }
    if ((rubc- ruba)>-1 && ((copc-copa)>-1) && (rubc<1215752192) ){
        return((rubc- ruba)+(copc-copa));
    }
    if (b == 99){
        return 1;
    }

}