/* 链接：https://www.nowcoder.com/questionTerminal/d9162298cb5a437aad722fccccaae8a7?answerType=1&f=discussion
来源：牛 */

#include <stdio.h>
#include <string.h>
 
int main()
{
    int n=2;
    char str[100];
        for (int i=0; i < n; i++) {
            scanf("%s",str);
            int len = strlen(str);
            if (len/8 == 0 || len ==8) { //长度小于等于8
                for (int j = 0; j < len; j++) {
                    printf("%c",str[j]);
                }
                int padNum = 7- (len-1)%8;
                for (int j=0; j< padNum; j++) {
                    printf("0");
                }
                printf("\n");
            }
            else if(len/8 > 0) //长度大于8
            {
                for (int j=0; j<len; j++) {
                    printf("%c",str[j]);
                    if ((j+1)%8 == 0) {
                        printf("\n");
                    }
                }
                int lastPadNum = 7 - (len -1)%8;//最后一个填充处理
                for (int j=0; j<lastPadNum; j++) {
                    printf("0");
                }
                if (len%8 != 0) {
                    printf("\n");
                }
 
            }
        }
    return 0;
}