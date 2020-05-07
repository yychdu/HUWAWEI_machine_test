// 有一只兔子，从出生后第3个月起每个月都生一只兔子，
// 小兔子长到第三个月后每个月又生一只兔子，
// 假如兔子都不死，问每个月的兔子总数为多少？

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int mon,a=1,b=0,c=0;
    while(scanf("%d", &mon)!=EOF)
    {
       while(--mon)
        {
            c+=b;
            b=a;
            a=c
        }
        printf("%d\n",a+b+c);
    }
}