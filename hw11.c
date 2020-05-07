

#include<stdio.h>
#include<string.h>
int main()
{
    char s[1024];
    while( gets(s)){
    int len=strlen(s),i,j,k;
        for(i=len-1;i>=0;i--)
        {
            if(s[i-1]==' ')
            {  
                //
                for(j=i;j<len;j++)
                    {
                    printf("%c",s[j]);
                }
                i--;
                len=i;
                    printf(" ");
            }
            if(i==0)
            {
                for(j=0;j<len;j++)
                {printf("%c",s[j]);}
            }
    }      
}
}
