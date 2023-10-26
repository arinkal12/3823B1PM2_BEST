int get_years(int seconds) {
    int sec = 31*60*24*60*12;// sek v 1 gody
    int god = seconds/sec;
    int otvgod = 1970 + god;
    return otvgod;
}

int get_month(int seconds) {
    int sec = 31*60*24*60;// sek v 1 mes
    int mes= seconds / sec;
    int otvmes = mes%12;
    return otvmes;
}

int get_day(int seconds) {
    int days = seconds / (24 * 60 * 60);
    days  = days%31;
    return (days % 31) ;
}

int get_hours(int seconds) {
    int ostsek = seconds % (24 * 60 * 60);
    int hours = ostsek / (60 * 60);
    return hours;
}

int get_minutes(int seconds) {
    int ostsek = seconds % (24 * 60 * 60);
    int minutes = (ostsek % (60 * 60)) / 60;
    return minutes;
}

int get_seconds(int seconds) {
    int ostsek = seconds % (24 * 60 * 60);
    int second = ostsek % 60;
    return second;
}


int get_magical_value(int seconds) {
    int year = get_years(seconds);
    int month = get_month(seconds);
    int day = get_day(seconds);
    int hours = get_hours(seconds);
    int minutes = get_minutes(seconds);
    int second = get_seconds(seconds);
    int result = ((year + month) / (1 + day + second)) * ((year + month) / (1 + day + second));
    
    result += (minutes + (minutes / (1 + hours))) / (1 + hours);
    return result;
    //return (((year+month)/((1+day+second)*(1+day+second))) + (minutes + () )); 
}

