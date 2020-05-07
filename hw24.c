输入n个整数，输出其中最小的k个。
输入描述:
输入说明 
1 输入两个整数 
2 输入一个整数数组

输出描述:
输出一个整数数组

#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "ctype.h"
int main()
{
    unsigned int i,j,t,n,mn,buf[8192]={0};
    while(scanf("%d%d",&n,&mn)!=EOF)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",buf+i);
        }      
        for(i=0;i<n-1;i++)
            for(j=0;j<n-i-1;j++)
            {
                if(buf[j]>buf[j+1])
                {
                    t = buf[j];
                    buf[j] = buf[j+1];
                    buf[j+1] = t;
                }
            }
        for(i=0;i<mn-1;i++)
            printf("%d ",buf[i]);
        printf("%d\n",buf[i]);
    }  
}
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "ctype.h"

int main()
{

    int n,k,i,time=0,j;
    
    scanf("%d %d",&n,&k);
    int table[n],a[1000]={0},b[1000];
    for( i=0;i<n;i++)
    {
       scanf("%d",table+i);
    }

     for( i=0;i<n;i++)
    {
    //    printf("%d",*(table+i));
        a[table[i]] ++;

    }
    for( i=0;i<1000;i++)
    {
        if(time==k)
        {
            break;
        }
        if(a[i]!=0)
        {
             for(j=0;j<*(a+i);j++)
             {
                 printf("%d ",i);
             time++;
             }
        }
    }
    printf("\n");


}