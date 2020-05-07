// 本题为考试单行多行输入输出规范示例，无需提交，不计分。
#include <stdio.h>
int main() {
    char str[1000];
    while(scanf("s", str) != EOF)// 注意，如果输入是多个测试用例，请通过while循环处理多个测试用例
    {
        int a[1000]={0},i;
     
        for(i=0;str[i]!='\0';i++)
        {
             a[str[i]]++;
            if(a[str[i]]==1)
            {
                printf("%c",str[i]);
            }
        }
    }
    return 0;
}
