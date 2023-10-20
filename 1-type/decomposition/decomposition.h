int reverse(int number) {
    int revers = 0;
    while (number != 0) {
        revers = revers * 10 + number % 10;
        number /= 10;
    }
    return revers;
}

double decomposition(int number) {
    int tis,cotni, desatki,edenici,srg;
    tis = (number/1000)*1000;
    number = number%1000;
    cotni = (number/100)*100;
    number = number%100;
    desatki = (number/10)*10;
    edenici = number%10;
    double sum = 0;
    sum += 1.0 / tis;
    sum += 1.0 / cotni;
    sum += 1.0 / desatki;
    sum += 1.0 / edenici;
    return 4.0 / sum;
}

int append(int number, int start, int end) {
    int chiclo =0;
    if (start<0){
        chiclo = (chiclo +start) * 10000;
        chiclo -= number;
        chiclo*=10;
        chiclo-=end;
    }
    if (start>=0){
        chiclo = (chiclo +start) * 10000;
        chiclo += number;
        chiclo*=10;
        chiclo+=end;
    }
    
    
    return chiclo;
}
