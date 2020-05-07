查找和排序

题目：输入任意（用户，成绩）序列，可以获得成绩从高到低或从低到高的排列,相同成绩
都按先录入排列在前的规则处理。
例示：
jack      70
peter     96
Tom       70
smith     67

从高到低  成绩
peter     96
jack      70
Tom       70
smith     67

从低到高

smith     67

Tom       70
jack      70

peter     96

注：0代表从高到低，1代表从低到高
#include<stdio.h>
#include<math.h>
#include<string.h>
 
typedef struct std
{
    char name[100];
    int num;
}st;
 
int main()
{
    int n;
    st temp, num[1000];
    int flag;
    int i, j;
    while(scanf("%d", &n)!=EOF)
    {
        scanf("%d", &flag);
        for(i = 0; i < n; ++i)
        {
            scanf("%s", num[i].name);
            scanf("%d", &num[i].num);
        }
        if(flag)
        {
            for(i = 0; i < n; ++i)
                for(j = 0; j < n - 1 - i; ++j)
                {
                    if(num[j].num > num[j + 1].num)
                    {
                        temp = num[j];
                        num[j] = num[j + 1];
                        num[j + 1] = temp;
                    }
                }
        }
        else
        {
            for(i = 0; i < n; ++i)
                for(j = 0; j < n - 1 - i; ++j)
                {
                    if(num[j].num < num[j + 1].num)
                    {
                        temp = num[j];
                        num[j] = num[j + 1];
                        num[j + 1] = temp;
                    }
                }
        }
        for(i = 0; i < n; ++i)
        {
            printf("%s %d\n", num[i].name, num[i].num);
        }
    }
    return 0;
}


#include<stdio.h>
#include<math.h>
#include<string.h>
 
typedef struct stu
{
    char name[128];
    int num;
}st;
int main()
{
    int i, j,n,manner;
    st temp, num[1000];
  while(scanf("%d", &n)!=EOF)
    {
    scanf("%d", &manner);
    for (i = 0; i < n; i++)
    {
        scanf("%s", num[i].name);
        scanf("%d", &num[i].num);
    }
    if(manner)
    {
    for(i = 0; i < n; i++)
        for (j = 0; j < n-1-i;j++)
       {
           if(num[j].num>num[j+1].num)
           {
                 
            temp= num[j];
            num[j] = num[j + 1];
            num[j+1]=temp;
        
           }
       }
    }
    else 
    {
        for(i = 0; i < n; i++)
        for (j = 0; j < n-1-i;j++)
       {
           if(num[j].num<num[j+1].num)
           {
                 
            temp= num[j];
            num[j] = num[j + 1];
            num[j+1]=temp;
        
           }
       }
    }
      for(i = 0; i < n; ++i)
        {
            printf("%s %d\n", num[i].name, num[i].num);
        }
    }
}