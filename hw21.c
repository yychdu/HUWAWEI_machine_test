输出7有关数字的个数，包括7的倍数，还有包含7的数字
（如17，27，37...70，71，72，73...）
的个数（一组测试用例里可能有多组数据，请注意处理）

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "ctype.h"
int main()
{
    char str[10];
 
    int n,i;

    while(scanf("%d",&n)!=EOF)
    {
        int cnt=0,j;
        for(i=0;i<n;i++)
        {
            if(i%7==0)
            {
                cnt++;
                break;
            }
            sprintf(str, "%d",i);
           for(j=0;str[j]!='\0';j++)
           {
                if(str[j]=='7')
                {
                    cnt++;
                    break;
                }
           }
        }
        printf("%d\n",cnt);
    }
}