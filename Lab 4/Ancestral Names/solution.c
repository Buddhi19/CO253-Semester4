#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

static int roman_to_integer(char c)
{
    switch(c) {
    case 'I':  
        return 1;  
    case 'V':  
        return 5;  
    case 'X':  
        return 10;  
    case 'L':  
        return 50;   
    default:
        return 0;
    }
}

int roman_to_int (char *s)
{
    int i, int_num = roman_to_integer(s[0]);

    for (i = 1; s[i] != '\0'; i++) {
        int prev_num = roman_to_integer(s[i - 1]);
        int cur_num = roman_to_integer(s[i]);
        if (prev_num < cur_num) {
            int_num = int_num - prev_num + (cur_num - prev_num);
        } else {
            int_num += cur_num;
        }
    }
    return int_num;
}

int extractnum(char *s){
    int n=strlen(s);
    int stop;
    for (int i=0;i<n;i++){
        int check = isspace(s[i]);
        if (check!=0){
            stop=i;
            break;
        }
    }
    // printf("%d\n",n);
    char* num=malloc((n-stop-1)*sizeof(char));
    for (int j=stop+1;j<n;j++){
        num[j-stop-1]=s[j];
        // printf("%s\n",num);
    }
    int number_to_return=roman_to_int(num);
    // printf("%d\n",number_to_return);
    return number_to_return;
}

char* extractname(char* s){
    int n=strlen(s);
    int stop;
    for (int i=0;i<n;i++){
        int check = isspace(s[i]);
        if (check!=0){
            stop=i;
            break;
        }
    }
    char* name=malloc(stop*sizeof(char));
    for (int i=0;i<stop;i++){
        name[i]=s[i];
    }
    // printf("%s\n",name);
    return name;
}

char** sorting(char** matrix,int n){
    for (int i = 0; i < n; i++){
        for (int j=i+1;j<n;j++){
            int value_i=extractnum(matrix[i]);
            int value_j=extractnum(matrix[j]);

            char* name_i=extractname(matrix[i]);
            char* name_j=extractname(matrix[j]);

            if (strcmp(name_i,name_j) > 0){
                char* temp=matrix[i];
                matrix[i]=matrix[j];
                matrix[j]=temp;
            }
            else if (strcmp(name_i,name_j) == 0){
                if(value_i>value_j){
                    char* temp=matrix[i];
                    matrix[i]=matrix[j];
                    matrix[j]=temp;
                }
                
            }
        }
    }
    return matrix;
    
}


int main(){
    int n;
    scanf("%d",&n);
    char* matrix[n];
    for(int i=0;i<n+1;i++){
        char* string=calloc(1,sizeof(char));
        char character;

        while (scanf("%c",&character)==1){
            if(character== '\n'){
                break;
            }
            int len=strlen(string);
            string=realloc(string,len+1);
            *(string+len)=character;
            *(string+len+1)='\0';
        }
        if(i>0){
        matrix[i-1]=string;
        }

    }
    //prints input names

    // for(int i=0;i<n;i++){
    //     printf("%s\n",matrix[i]);
    // }
    char** matrix_sol=sorting(matrix,n);

    for(int i=0;i<n;i++){
        printf("%s\n",matrix_sol[i]);
    }

    return 0;
}