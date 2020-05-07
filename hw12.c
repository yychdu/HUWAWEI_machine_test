

#include<stdio.h>
#include<string.h>
 
void ExchangeStr(char* str1, char* str2)
{
    char temp[100] = { 0 };
 
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}
int main(void)
{
    int n,i,j;
    char str[1000][100] = {0};
 
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%s", str + i);
    }
     
    for (i = 0; i < n; i++) {
        for (j = 0; j < i; j++) {
            if (strcmp(str[i], str[j]) < 0)
                ExchangeStr(str[i],str[j]);
        }
    }
    for (i = 0; i < n; i++) {
        printf("%s\n", str + i);
    }
 
    return 0;
}
