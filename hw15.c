#include "stdio.h"
#include "string.h"

int main()
{
    int i;
    char str[100];
   
   while(scanf("%s",str)!=EOF)
   {    
            int out[127]={0},len=strlen(str);
       for(i=0;i<len;i++)
       {
           out[str[i]]++;
       }
       int min=1;
       for(i=0;i<len-1;i++)
       {
           if(out[str[i]]!=0&&out[str[i]]<min)
               min=out[str[i]];
       }
        for(i=0;i<len;i++)
       {
          if(out[str[i]]>min)
               printf("%c",str[i]);
       }
       printf("\n");
   }
}
