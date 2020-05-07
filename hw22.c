完全数（Perfect number），又称完美数或完备数，是一些特殊的自然数。

它所有的真因子（即除了自身以外的约数）的和（即因子函数），恰好等于它本身。

例如：28，它有约数1、2、4、7、14、28，除去它本身28外，其余5个数相加，1+2+4+7+14=28。

给定函数count(int n),用于计算n以内(含n)完全数的个数。计算范围, 0 < n <= 500000

返回n以内完全数的个数。 异常情况返回-1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "ctype.h"
unsigned int pr[99999999];
void is_suu(int N)
{
        
        unsigned int n=(unsigned int)sqrt (N+0.5);
        int i=0;
        int j=0;
        memset (pr,0,sizeof(pr));
        //从最小素数开始全部筛选一遍到N
        for (i=2;i<=n;i++)
        {
                if(pr[i]==0)//最小的素数是2，
                {
                    for (j=i*i;j<=N;j+=i)//不是素数全置位1
                             pr[j]=1;
                }
        }
}
int main()
{
    is_suu(500000);
    int num;
    while(scanf("%d",&num)!=EOF)
    {
        int sum=0,i,cnt=0;
        for( i=0;i<num;i++)
        {
            if(pr[i]==0)
            {
                sum+=i;
            }

        }
        if(sum==num)
        {
            printf("ERROR");
        }
    }
}