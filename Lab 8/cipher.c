char* cipher(int k, char* s) {
    int n=strlen(s);
    char* result=malloc((n-k)*sizeof(char));
    result[0]='1';
    if(s[0]=='0'){
        result[0]='0';
    }
    for(int i=1;i<k;i++){
        if(s[i]=='0'){
            result[i]='1';
        }
        else{
            result[i]='0';
        }
    }
    for(int i=k;i<n-k+1;i++){
        int zeros=0;
        int ones=0;
        for(int j=1;j<k;j++){
            if(result[i-j]=='0'){
                zeros++;
            }
            else{
                ones++;
            }
        }
        if(ones%2==0){
            if(s[i]=='0'){
                result[i]='0';
            }
            else{
                result[i]='1';
            }
        }
        if(ones%2==1){
            if(s[i]=='0'){
                result[i]='1';
            }
            else{
                result[i]='0';
            }
        }
    }
    return result;
}