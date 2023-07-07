char* counterGame(long int n) {

    if(n==1){
        return "Richard";
    }
    int count=0;
    while(n>0 && n%2==0){
        n=n/2;
        count++;
    }
    while(n>0){
        if(n%2==1){
            count++;
        }
        n=n/2;
    }  
    
    if(count%2==0){
        return ("Louise");
    }
    return ("Richard");

}
