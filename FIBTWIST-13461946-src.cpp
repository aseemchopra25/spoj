#include<cstdio>
#include<cstring>
#include<iostream>
#define ll long long int
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
inline void fastRead_lint(ll *a)
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
inline ll expo(ll n, ll m)
{
    ll r[][2]={{1,0},{0,1}};
    ll fib[2][2]={{1,1},{1,0}};
    ll temp[2][2];
    while(n)
    {
        if(n&1)
        {
            memset(temp,0,sizeof(temp));
            for(int i=0;i<2;i++)
                for(int j=0;j<2;j++)
                    for(int k=0;k<2;k++)
                        temp[i][j]+=(r[i][k]*fib[k][j])%m;
            for(int i=0;i<2;i++)
                for(int j=0;j<2;j++)
                    r[i][j]=temp[i][j];
        }
        memset(temp, 0,sizeof(temp));
        for(int i=0;i<2;i++)
            for(int j=0;j<2;j++)
                for(int k=0;k<2;k++)
                    temp[i][j]+=(fib[i][k]*fib[k][j])%m;
        for(int i=0;i<2;i++)
            for(int j=0;j<2;j++)
                fib[i][j]=temp[i][j];
        n>>=1;
    }
    return r[0][0];
}
int main()
{
    int t;
    fastRead_int(&t);
    ll n,m,ans;
    while(t--)
    {
        fastRead_lint(&n);
        fastRead_lint(&m);
        ans=(2*(expo(n+1,m)-1)-n)%m;
        if(ans<0)
            ans+=m;
        printf("%lld\n",ans);
    }
    return 0;
    
}