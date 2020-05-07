
#include<stdio.h>        
         int main()        
         {        
         int n;        
         while(scanf("%d",&n)!=EOF)        
         {        
         int a[1000],b[1001]={0},i;        
         for(i=0;i<n;i++)        
         scanf("%d",&a[i]);        
         for(i=0;i<n;i++)        
         b[a[i]]++;        
         for(i=0;i<1001;i++)        
         {        
         
         if(b[i]!=0)        
         printf("%d\n",i);        
         }        
        
         }        
         return 0;        
         }        
