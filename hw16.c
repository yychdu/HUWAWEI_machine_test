
#include <stdio.h>
#include <string.h>
 
int main(void)
{
    char str[1000]={0},temp[1000]={0};
     
    while(gets(str))
    {
        int i,j,k=0;
        char temp[1000]={0};
        for(i=0;i<26;i++)
        {
            for(j=0;j<strlen(str);j++)
            {
                if(str[j] == 'a'+i || str[j] == 'A'+i)
                    temp[k++] = str[j];
            }
        }
        k=0;
        for(i=0;i<strlen(str);i++)
        {
            if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
                str[i] = temp[k++];
        }
        printf("%s\n",str);
    }
    return 0;
}