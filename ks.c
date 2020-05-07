#include "stdio.h"
#include "string.h"
#include "ctype.h"
int main() 
{
    char s[1024],str[1024];
    int a[1000],i,j=0,cnt=0,num,symbol,space=0,f=0,k=0,p=0;
    while(gets(s)!=NULL)
    {
        for(i=0;i<strlen(s);i++)
        {
            if(s[i]=='5'&&s[i+1]=='a')
            {
                cnt++;
                p++;
                a[k++]=i;
            }
            printf("sym=%d ",a[k]);
            if(cnt==2)
            {
                
                for(j=1+a[k-2];;j++)
                {
                    if(s[j]==' ')
                    {
                        space++;
                        if(s[j+1]=='5'&&s[j+2]=='b'&&s[j+4]=='b')
                        {
                            if(s[j+5]=='a')
                            {
                                space--;
                            }
                            else if(s[j+5]=='b')
                            {
                                space--;
                            }
                        }
                    }
                    if(s[j]=='5'&&s[j+1]=='a')
                    {
                        num=s[j-2]-'0'+(s[j-3]-'0')*16;
                        printf("j=%d\n",j);
                        break;
                    }

                }
                printf("s=%d ",space);
                
                if(space==num+2)
                {

                    if(f==0)
                    {
                        strncpy(str,s,j+2);
                        printf("%s\n",str);
                    }
                    space=0;
                }
                cnt=1;
            }
        }
        printf("\n");
        // printf("%s\n",str);
        
    }
}
