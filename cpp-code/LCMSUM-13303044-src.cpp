#include<cstdio>
#include<cmath>
#define Lim 1000000
using namespace std;
#define LL long long int
LL etf [1000010];
LL ret[1000010];
#define pc(x) putchar_unlocked(x);
inline void writeInt (LL n)
{
    LL N = n, rev, count = 0;
    rev = N;
    if (N == 0) { pc('0'); return ;}
    while ((rev % 10) == 0) { count++; rev /= 10;} //obtain the count of the number of 0s
    rev = 0;
    while (N != 0) { rev = (rev<<3) + (rev<<1) + N % 10; N /= 10;}  //store reverse of N in rev
    while (rev != 0) { pc(rev % 10 + '0'); rev /= 10;}
    while (count--) pc('0');
    pc('\n');
}
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
inline void calc()
{
    for(int i=1;i<=Lim;i++)etf[i]=i;
    for(int i=2;i<=Lim;i++)
        if(etf[i]==i)
            for(int j=2*i;j<=Lim;j+=i)etf[j]-=etf[j]/i;
    for(int i=2;i<=Lim;i++)if(etf[i]==i)etf[i]=i-1;
    for(int i=1;i<=Lim;i++)for(int j=i;j<=Lim;j+=i)ret[j]+=i*etf[i];
    
}
int main()
{
    calc();
    int n,t;
    LL sum;
    fastRead_int(&t);
    while(t--)
    {
        fastRead_int(&n);
        sum=((1+ret[n])*n)/2;
        printf("%lld\n",sum);
    }
    return 0;
    
}