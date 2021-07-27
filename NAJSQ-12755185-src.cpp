#include<cstdio>
using namespace std;
#define MOD 1000000007
int main()
{
    
    int t,i;
    long long int n,ans,a,b,c,d;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld",&n);
        
        a=n%MOD;
        b=(n+1)%MOD;
        c=(2*n+1)%MOD;
        d=166666668;
        ans=(a*b)%MOD;
        ans=(ans*c)%MOD;
        ans=(ans*d)%MOD;
        ans-=1;
        printf("Case %d: %lld\n",i,ans);
    }
    return 0;
}