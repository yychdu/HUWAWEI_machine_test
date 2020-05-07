

#include
int main()
{
    int a; scanf("%d", &a);
    do printf("%d", a%10), a /= 10; // 注意这里只有一条语句 不用加花括号
       while(a); // do while才能在输入等于0时输出 感谢@牛客122438009号指正
    return 0;    // P.P.S. 然而牛客的测试用例并没有考察输入为0的边界情况
}