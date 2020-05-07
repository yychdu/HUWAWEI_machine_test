
矩阵乘法
#include<stdio.h>
 
int main()
{
    int x,y,z;
     
    while(scanf("%d%d%d",&x,&y,&z)!=EOF)
    {
        int loop,kkk;
        int a[x][y],b[y][z],c[x][z];
        int temp=0;
        for(loop=0;loop<x;loop++)
            for(kkk=0;kkk<y;kkk++)
                scanf("%d",&a[loop][kkk]);
        for(loop=0;loop<y;loop++)
            for(kkk=0;kkk<z;kkk++)
                scanf("%d",&b[loop][kkk]);
        for(loop=0;loop<x;loop++)
        {
            for(kkk=0;kkk<z;kkk++)
            {
                temp=0;
                for(int i=0;i<y;i++)
                    temp+=a[loop][i]*b[i][kkk];
                 
                printf("%d ",temp);
            }
            printf("\n");
        }
    }
     
    return 0;
}