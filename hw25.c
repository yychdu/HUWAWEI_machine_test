

#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[500]={0};
    int num;
    int bst[500]={0};
    while(gets(str))
    {
        scanf("%d",&num);
        int len;
        len=strlen(str);
        int i,j;
        int count=0;
        int k=0;
        for(i=0;i<=len-num;i++)
        {
            for(j=i;j<i+num;j++)
            {
                if(str[j]=='C'||str[j]=='G')
                {
                    count++;
                    //printf("%d",count);
                }
            }
            bst[i]=count;
            count=0;
        }                       //接下来比较bst里的大小 
     /*   for(i=0;i<len;i++)
        {
            printf("%d",bst[i]);
         } */
         int max=0;
         int x=0;
        for(i=0;i<len;i++)    //获得最大子列 
        {
            if(bst[i]>max)
            {
                max=bst[i];
                x=i;
            }
          }  
    //  printf("%d",max);
    //  printf("%d",x); 
        for(i=x;i<x+num;i++)
        {
            printf("%c",str[i]);
         } 
    }
    return 0;
}