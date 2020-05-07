#include<stdio.h>
#include<stdlib.h>
 
int main(void){
     
    char str[1000];
    int len, i, temp;
     
    while(gets(str) != NULL){
         
        len = strlen(str);
         
        for(i=len-1; i>=0; i--){
            if(str[i] == ' '){
                temp = i;
                temp++;
                for(;;temp++){
                    if(str[temp] == ' ' || str[temp] == '\0'){
                        break;
                    }else{
                        printf("%c", str[temp]);
                    }
                }
                printf(" ");
            }
        }
         
        i=0;
        while(str[i] != ' '){
            printf("%c",str[i]);
            i++;
        }
    }
    return 0;
}