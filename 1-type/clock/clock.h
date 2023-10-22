int get_time(long long angle) {
    int chas = angle/(360*60);
    int vsp = angle % (360 * 60);
    int min = vsp / 360;
    int sek = (vsp % 360) / 6;
    return chas*10000+ min*100+sek; // Not implementation
}