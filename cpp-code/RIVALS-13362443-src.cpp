#include<cstdio>
using namespace std;
#define LL long long int 
#define MOD 1000000007
LL a[2000009];
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
inline void pre()
{
    a[0]=1;
    a[1]=1;
    for(int i=2;i<=2000000;i++)
        
        a[i]=(a[i-1]*i)%MOD;
}
inline LL inv(LL x)
{
    LL temp=1,n=1000000005;
    while(n)
    {
        if(n&1)
        {    temp=(temp*x);
            if(temp>MOD)temp%=MOD;
        }
        
        x=(x*x);
        if(x>MOD)x%=MOD;
        n>>=1;
    }
    return temp;
}
int main()
{
    pre();
    int t,x,y;
    LL temp,res;
    fastRead_int(&t);
    while(t--)
    {
        fastRead_int(&x);
        fastRead_int(&y);
        temp=(inv(a[x])*inv(a[y]))%MOD;
        res=(a[x+y]*temp)%MOD;
        printf("%lld\n",res);
        
        
    }
    return 0;
    
    
}