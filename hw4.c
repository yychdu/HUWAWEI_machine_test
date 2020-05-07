
#include<stdio.h>   
#include "string.h"    
int main(){ 
   
		 char str[99];
	
		 int i;

while(scanf("%s",str)!=EOF)
{
		
		 int b[1000]={0};
		 for(i=0;str[i]!='\0';i++)
		 {
			
			b[str[i]]++;
			if(b[str[i]]==1)
			printf("%c",str[i]);
		 }
	
	}
}

/* #include <stdio.h>
int main()
{
	int i=0; 
    char str[101];
    while (scanf("%s", str) != EOF)
    {
        int a[256] = { 0 };
        for (i = 0; str[i] != '\0'; i++)
        {      
            a[str[i]] ++;
            if (a[str[i]] == 1)
                printf("%c", str[i]);
        }
        printf("\n");
    }
    return 0;
} */
