#include <stdio.h>
#include <stdlib.h>


void isDivisible(char name[]){
    int i=0;
    while(name[i]!='\0'){
        int j=0;
        while(name[j]!='\0'){
            int k=0;
            while (name[k]!='\0')
            {
                if (i!=j && i!=k && j!=k){
                    int num100=name[i]-'0';
                    int num10=name[j]-'0';
                    int num1=name[k]-'0';
                    printf("combinations of last three digits %d\n",(num100*100 + num10*10 +num1));
                    if((num100*100 + num10*10 +num1)%8==0){
                        printf("YES\n");
                        return;
                    }
                }
            k++;
            }
            
        j++;
        }
    i++;
    }
    printf("NO\n");
}

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        char name[110];
        scanf("%s",name);
        printf("enterd name is %s\n",name);
        isDivisible(name);
    }
    return 0;
}