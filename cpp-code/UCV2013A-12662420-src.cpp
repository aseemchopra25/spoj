#include<cstdio>
#include<cmath>
#define MOD 1000000007
using namespace std;
inline long long int powers(long long int n, long long int x)
{
    long long int mul=1;
    
    while(x>0)
    {
        if(x%2==1)mul=((mul%MOD)*n%MOD)%MOD;
        n=((n%MOD)*n%MOD)%MOD;
        x/=2;
    }
    return mul%MOD;
}
int main()
{
    long long int n,l;
    scanf("%lld %lld",&n,&l);
    while(true)
    {
        if(n==0 && l==0)
            break;
        long long int count=0;
        long long int x=1;
        while(x<=l)
        {
            count=(count%MOD+powers(n,x)%MOD)%MOD;
            x++;
        }
        printf("%lld\n",count);
        scanf("%lld %lld",&n,&l);
    
    }
    return 0;
}