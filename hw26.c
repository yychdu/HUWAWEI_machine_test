#include <stdio.h>
#include <string.h>
  
int main()
{ char a[100];
 int i,flag,cnt,count,index;
     char *buf1[] = {"reset", "board",
                     "board", "add",
                      "board", "delet",
                      "reboot", "backplane",
                      "backplane", "abort"};
    char *buf2[]= {"board fault",
                      "where to add",
                      "no board at all",
                      "impossible",
                      "install first"};
 while(gets(a))
 {flag=0;
  count=0;
  index=0;
  cnt=0;
  for(i=0;a[i]!='\0';i++)
  {
      if(a[i]==' ')
      {
          flag=1;
          cnt=i;
          break;
      }
  }
  if(flag)
  {
    for(i=0;i<5;i++)
    {
        if(strncmp(buf1[2*i],a,cnt)==0&&strncmp(buf1[2*i+1],a+cnt+1,strlen(a)-cnt-1)==0)
        {
            count++;
            index =i;
        }
    }
     if(count==1)
            {
                printf("%s\n", buf2[index]);
            }
           
     else
            {
                printf("unkown command\n");
            }
  }
            else if(strncmp("reset",a,strlen(a))==0)
            {
                printf("reset what\n");
            }
            else
            {
                printf("unkown command\n");
            }
  }
return 0;
}