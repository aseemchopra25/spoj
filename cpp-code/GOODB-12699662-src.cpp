#include<cstdio>
#include<cmath>
#include<algorithm>
typedef long long int ll;
#define MOD 1000000007
using namespace std;
ll power(ll a, ll n)
{
    ll y=1;
    while(n)
    {
        if(n&1)y=(y*a)%MOD;
        a=(a*a)%MOD;
        n>>=1;
    }
    return y;
}

ll ncr(ll n, ll r)
{
    r=min(r,n-r);
    if(n==0 || n==1 | r==0)
        return 1;
    ll num=1;
    for(ll i=n;i>=n-r+1;i--)
        num=(num*i)%MOD;
    ll den=1;
    for(ll i=2;i<=r;i++)
        den=(den*i)%MOD;
    den=power(den,MOD-2);
    
    ll res=(num*den)%MOD;
    return res;
    
}
int main()
{
    ll n,w,t,r,res;
    scanf("%lld%lld%lld%lld",&n,&w,&t,&r);
    res=ncr(n,w);
    n-=w;
    res=(ncr(n,t)*res)%MOD;
    n-=t;
    res=(ncr(n,r)*res)%MOD;
    printf("%lld\n",res);
    return 0;
    
}