#include<cstdio>
using namespace std;

const long long int MODD=1000000007;
long long int a,b,c;

inline long long int powers(long long int n, long long int x,long long int MOD)
{
    long long int mul=1;
    if(n==0 && x==0)
        return 1;
    while(x>0)
    {
        if((x&1)==1)mul=((mul%MOD)*n%MOD)%MOD;
        n=((n%MOD)*n%MOD)%MOD;
        x>>=1;
    }
    return mul%MOD;
}
int main()
{
    while(true)
    {
        scanf("%lld %lld %lld",&a,&b,&c);
        if(a==-1&& b==-1 && c==-1)
            break;
        if(c==0)
            printf("%lld\n",a%MODD);
        else if(b==0)
            puts("1");
        else if(a%MODD==0)
            puts("0");
        else
        {
            long long int ti=powers(b,c,MODD-1);
            long long int ans=powers(a,ti,MODD);
            printf("%lld\n",ans);
        }
    }
    return 0;
}