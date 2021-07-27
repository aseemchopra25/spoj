#include<iostream>
#include<cstdio>
using namespace std;
#define ll long long
#define mod 1000000007
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
inline ll power(ll a,ll b)
{
	ll p = 1;
	if(b==0)
		return 1;
	else
	{
		while(b>0)
		{
			if(b&1)
			{
				p=((p)*(a))%mod;
				
			}
			b>>=1;
			a = ((a)*(a))%mod;
		}
		return p;
	}
}
int main()
{
	int t;
	fastRead_int(&t);
	while(t--)
	{
		ll n,p,z,x,a,c;
		fastRead_lint(&n);
        fastRead_lint(&p);
        
		c = power(p-1,mod-2);
		a = power(p,n);
		if(a==0)
			a = mod;
		a = (a-1);
		z = (a*c)%mod;
		x = power(p,n-1);
		printf("%lld %lld\n",z,x);
	}
	return 0;
}
