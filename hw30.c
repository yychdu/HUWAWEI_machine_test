实现如下2个通配符：
*：匹配0个或以上的字符（字符由英文字母和数字0-9组成，不区分大小写。下同）
？：匹配1个字符


输入：
通配符表达式；
一组字符串。


输出：
返回匹配的结果，正确输出true，错误输出false

#include <stdio.h>
#include <string.h>
   
int match(const char *pattern, const char *str)
{
    if (*pattern == '\0' && *str == '\0')
        return 1;
    else if (*pattern == '\0' || *str == '\0')
        return 0;
   
    if ((*pattern == '?')|| (*pattern == *str))
    {
        return match(pattern+1, str+1); /* 使用递归，若碰到'？'，则同时下移一位 */
    }
    else if (*pattern == '*')
    {
        // 匹配0个1个或多个
        return match(pattern+1, str) || match(pattern+1, str+1) || match(pattern, str+1);
    }
   
    return 0;
}
  
int main(void)
{
    char pattern[1000];
    char str[1000];
    while (scanf("%s %s", pattern, str)!=EOF)
    {
        int ret = match(pattern, str);
        printf("%s", ret?"true\n":"false\n");
    }
    return 0;
}
