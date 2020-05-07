// 输入一行字符，分别统计出包含英文字母、空格、数字和其它字符的个数
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "ctype.h"
main()
{
    
    char s[1000];
    while(gets(s)!=NULL)
    {
        int i=0,alpha=0,spaces=0,num=0,other=0;
    for(i=0;s[i]!='\0';i++)
    {
        if(isalpha(s[i]))
        {
            alpha++;
        }
        else if(isspace(s[i]))
        {
            spaces++;
        }
        else if(isdigit(s[i]))
        {
            num++;
        }
        else
        {
            
            other++;
        }
        
    }
    printf("%d\n", alpha);
    printf("%d\n", spaces);
    printf("%d\n", num);
    printf("%d\n", other);
    }
}