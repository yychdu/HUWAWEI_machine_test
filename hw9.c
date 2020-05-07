#include "stdio.h"
#include "string.h"
int main()
{
    char    strin[100];
    int sz[1000]={0},i;
  scanf("%s",strin);
    for(i=strlen(strin)-1;;i--)
    {    
        
        sz[strin[i]]++;
        if(sz[strin[i]]==1)
            printf("%c",strin[i]);
        if(i==0)
            break;
    }
//    for(i=0;i<10;i++)
//	printf("\n%d ",sz[i+'0']);
//	
////printf("\n%d",'5');
}
