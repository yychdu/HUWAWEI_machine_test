#include "stdio.h"
#include "string.h"
#include "ctype.h"
int chongfu(char *str)
{
    char temp[4];
    temp[3]='\0';
    for(;*(str+2)!='\0';str++)
    {
        memcpy(temp,str,3);
        if(strstr(str+3,temp)!=NULL)
            return 1;
    }
    return 0;
}


int repeat_check(char *str)
{
    char temp[4];
    temp[3] = '\0';
    for(;*(str+2) != '\0'; str++)
    {
        memcpy(temp, str, 3);
        if (strstr(str+3, temp)!=NULL)
        {
            return -1;
        }
    }
    return 0;
}
int main()
{
    char str[100];
    while(scanf("%s",str)!=EOF)
    {    
        int cnt,i,dz,xz,sz,other,s=0;
        int len=strlen(str);
        if(len<=8)
            printf("NG\n");
        else 
        {
           for(i=0;i<len-1;i++)
            {
                if(isdigit(str[i]))
                    {
                    	cnt++;
                    	break;
					}
                else if(isupper(str[i]))
                   {
                    	cnt++;
                    	break;
					}
                else if(islower(str[i]))
                    {
                    	cnt++;
                    	break;
					}
                else if(!isalnum(str[i]))
					{
                    	cnt++;
                    	break;
					}
            }
//            cnt=xz+dz+sz+other;
            
            printf("%d\n",cnt);
            
             if(cnt>=3)
			{
				   s++;
            }
            if(chongfu(str)==0)
            {
                s++;
            }
             if(s==2)
                 printf("OK\n");
                
              else    printf("NG\n");
           memset(str,0,sizeof(char));
                
        }
    }
}
