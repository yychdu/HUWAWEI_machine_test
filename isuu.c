全局变量，全局数组，静态数组（static）则是开在全局区（静态区）（static）。大小为2G，所以能够开的很大；*/
unsigned int pr[99999999];
void is_suu(int N)
{
        unsigned int n=(unsigned int)sqrt (N+0.5);
        int i=0;
        int j=0;
        memset (pr,0,sizeof(pr));
        //从最小素数开始全部筛选一遍到N
        for (i=2;i<=n;i++)
        {
                if(pr[i]==0)//最小的素数是2，
                {
                    for (j=i*i;j<=N;j+=i)//不是素数全置位1
                             pr[j]=1;
                }
        }
}



bool pernum(int n)  //求出所有约数（不包含本身，重复的只算一次，例如36的约数只有一个6）
{
    int sum=1;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            sum+=i;
            if(i!=(n/i))
            sum+=(n/i);
        }
    }
    if(sum==n)
        return true;
    else
        return false;
}