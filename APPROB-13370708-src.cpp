#include<cstdio>
#define LL long long int
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
inline LL gcd(LL a, LL b)
{
    if(b==0)
        return a;
    LL temp;
    while(b!=0)
    {
        temp=b;
        b=a%b;
        a=temp;
        
    }
    return a;
}
inline void fastRead_lint(LL *a)
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
int main()
{
    int t;
    LL n,sq,num,d,div;
    fastRead_int(&t);
    while(t--)
    {
        fastRead_lint(&n);
        sq=n*n;
        if(n&1)
            num=(3*sq+1)>>1;
        else
            num=(3*sq)>>1;
        d=6*n*sq;
        div=gcd(num,d);
        num/=div;
        d/=div;
        printf("%lld/%lld\n",num,d);
        
        
    }
    return 0;
}