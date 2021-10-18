#include<cstdio>
inline void fastRead_int(int *a)
{
    register char c=0;
    while (c<33) c=getchar_unlocked();
    *a=0;
    while (c>33)
    {
        *a=*a*10+c-'0';
        c=getchar_unlocked();
    }
}
int main()
{
    int t,i,n,j,temp;
    long long int sum;
    fastRead_int(&t);
    for(i=1;i<=t;i++)
    {
        fastRead_int(&n);
        sum=0;
        for(j=1;j<=n;j++)
        {
            fastRead_int(&temp);
            if((j&1)==0)
                sum+=temp;
            else
                sum-=temp;
            
        }
        if(sum==0)
            puts("YES");
        else
            puts("NO");
    }
    return 0;
}