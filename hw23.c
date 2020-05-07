#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   int val;
   char str[20];
   
   strcpy(str, "9876543210");
   val = atolf(str);
   printf("字符串值 = %s, 整型值 = %lld\n", str, val);

   strcpy(str, "runoob.com");
   val = atoi(str);
   printf("字符串值 = %s, 整型值 = %d\n", str, val);

   return(0);
}
//     else 
//     {
//         strcpy(buf1,str1);
//     }
//     if(str2[0]=='-')
//     {
//         for(i=0;str2[i]!='\0';i++)
//             buf2[i]=str2[i+1];
//     }
//     else
//     {
//         strcpy(buf2,str2);
//     }
//      printf("%s\n", buf1);
//     n1=atof(buf1);
//     n2=atoi(buf2);
//     printf("%d\n", n1);
   


// }
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "ctype.h"

int main()
{
    char str1[100];
    char str2[100];
    char buf1[100];
    char buf2[100];
    long long int n1,n2;
    int i,j;
    scanf("%s", str1);
    // scanf("%s", str2);
    // if(str1[0]=='-')
    // {
    //     for(i=0;str1[i]!='\0';i++)
    //         buf1[i]=str1[i+1];
    // }
    // else 
    // {
    //     strcpy(buf1,str1);
    // }
    // if(str2[0]=='-')
    // {
    //     for(i=0;str2[i]!='\0';i++)
    //         buf2[i]=str2[i+1];
    // }
    // else
    // {
    //     strcpy(buf2,str2);
    // }
     printf("%s\n", str1);
    n1=atof(buf1);
    // n2=atoi(buf2);
    printf("%d\n", n1);
   


}