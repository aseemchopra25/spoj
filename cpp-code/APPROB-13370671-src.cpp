#include<cstdio>
#define LL long long int
inline LL gcd(LL a, LL b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
inline void fastRead_int(LL *a)
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
    LL t,n,sq,num,d,div;
    fastRead_int(&t);
    while(t--)
    {
        fastRead_int(&n);
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