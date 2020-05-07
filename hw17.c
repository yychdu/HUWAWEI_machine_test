

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    unsigned int a,b,c,d;
    while(scanf("%d.%d.%d.%d",&a,&b,&c,&d)!=EOF)
    {
        int ip[4],i=0;
        unsigned long  num,sum;
        scanf("%ld",&num);
        sum=(a<<24)|(b<<16)|(c<<8)|d;
        printf("%ld\n",sum);
        ip[0]=((num&0xff000000)>>24);
        ip[1]=((num&0x00ff0000)>>16);
        ip[2]=((num&0x00000ff00)>>8);
        ip[3]=(num&0x000000ff);
        for(i=0;i<3;i++)
            printf("%d.",ip[i]);
        printf("%d\n",ip[3]);
    }
}
