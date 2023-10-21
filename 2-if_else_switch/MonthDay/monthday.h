int monthday(int month, int year){
        int day;
        if (year%4==0){
            month=29;
        }
        else{
            month = 28;
        }
        switch (month)
        {
        case 1: day = 31; break;
        case 28: day = 28; break;
        case 29: day = 29; break;
        case 3: day = 31; break;
        case 4: day = 30; break;
        case 5: day = 31; break;
        case 6: day = 30; break;
        case 7: day = 31; break;
        case 8: day = 31; break;
        case 9: day = 30; break;
        case 10: day = 31; break;
        case 11: day = 30; break;
        case 12: day = 31; break;
      
        }
    return day;
}