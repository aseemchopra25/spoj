#include<cstdio>
#define mod 10000007
using namespace std;
long long int modular(long long int a, long long int b)
{
    long long int d=1;
    while(b)
    {
        if(b%2)
        {
            d=(d*a)%mod;
        }
        b>>=1;
        a=(a*a)%mod;
    }
    return d;
}
int main()
{
    long long int n,k;
    scanf("%lld%lld",&n,&k);
    while(n)
    {
        long long a,b,c,d,ans;
        b=modular(n,k);
        a=(2*modular(n-1,k))%mod;
        d=modular(n,n);
        c=(2*modular(n-1,n-1))%mod;
        ans=((a+b)%mod+(c+d)%mod)%mod;
        printf("%lld\n",ans);
        scanf("%lld%lld",&n,&k);
    }
    return 0;
}