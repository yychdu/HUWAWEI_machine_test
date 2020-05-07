#include <stdio.h>
#include <string.h>
/*
函数名：palindrome_passwd_len
输入参数：类型char *s ,表示一个密码字符串;类型int step=1表示判断偶数回文，step=2表示判断基数回文
输出参数：类型int，表示回文密码长度
返回值：返回回文密码最大有效长度
*/
int palindrome_passwd_len(char *s,int step)
{
    int len = strlen(s);
    int low = 0,high = 0;
    int max = 0,i;
    if(NULL == s){
        return 0;
    }
    for(i = 0;i < len;i++){
        low=i;
        high = low + step;
          printf("high=%d\n",high);
            printf("low=%d\n",low);
        while(low >= 0 && high < len && (s[low] == s[high])){
        	
            low--;
            high++;
             printf("\n high=%d\n",high);
            printf("  low=%d\n",low);
          
        }
        if((high-low-1) > max){
            max = high-low-1;
        }
    }
    return max;
}
int main(void)
{
    char str[10000];
    int max= 0,len=0;
    while(gets(str))
    {
        len = palindrome_passwd_len(str,1);
        max = palindrome_passwd_len(str,2);
        if(len >= max){
            printf("%d\n",len);
        }else{
            printf("%d\n",max);
        }   
    }
    return 0;
}
