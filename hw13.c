
#include "stdio.h"

int main()
{
    int n,ans=0;
   scanf("%d",&n);
    while(n>0)
    {
        ans+=(n%2);
        n/=2;
    }
    printf("%d",ans);
    return 0;
}