#include<cstdio>
#define MOD 1000000007
using namespace std;
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
inline long long int power(int n)
{
    long long int mul=1;
    long long int x=2;
    while(n>0)
    {
        if(n%2==1)mul=((mul%MOD)*x%MOD)%MOD;
        x=((x%MOD)*x%MOD)%MOD;
        n=n/2;
    }
    return mul%MOD;
}
int main()
{
    int t;
    int n;
    long long int ans;
    fastRead_int(&t);
    for(int i=1;i<=t;i++)
    {
        fastRead_int(&n);
        if (n==1)
            printf("Case %d: 1\n",i);
        else
        {
            ans=((n+1)*power(n-2))%MOD;
            printf("Case %d: %lld\n",i,ans);
        }
    }
    return 0;
}