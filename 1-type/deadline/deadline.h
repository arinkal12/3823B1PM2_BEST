int get_score(short score, int start, int stop, int now) { 
    if (now <= start){
        return score;
    }
    else if (((now<stop)) &&  (now>start)){
        int raznns = now - start;
        int res = score-((raznns*score)/(2*(stop-start)));
        
    }
     
    else if (now>=stop){
        if (score%2==1)
            return (score/2)+1;
        else
            return score/2;
    }

    

}

