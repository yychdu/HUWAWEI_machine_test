// 假设一个球从任意高度自由落下，每次落地后反跳回原高度的一半; 
// 再落下, 求它在第5次落地时，共经历多少米?第5次反弹多高？

// 最后的误差判断是小数点3位

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{   
    int height,sum=0,i;
    while(scanf("%d",&height)!=EOF)
    {
        
        printf("%.3lf\n",2.875*height);
        printf("%.4lf\n",0.3125*height);

        
    }
}