#include<iostream>
#include<cstdio>
using namespace std;
#define ll long long
#define mod 1000000007

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
inline ll power(ll a,ll b)
{
	ll p = 1;
	
		while(b>0)
		{
			if(b&1)
			{
				p=(p*a)%mod;
				
			}
			b>>=1;
			a = (a*a)%mod;
		}
		return p;
	
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		ll n,p,z,x,a,c;
		scanf("%lld%lld",&n,&p);
        
		c = power(p-1,mod-2);
        x = power(p,n-1);
        a=(x*p)%mod;
		if(a==0)
			a = mod;
		
		z = ((a-1)*c)%mod;
		
		printf("%lld %lld\n",z,x);
	}
	return 0;
}
