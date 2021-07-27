#include<cstdio>
#define mod 10000007
using namespace std;
#define pc(x) putchar_unlocked(x);
inline void writeInt (long long int n)
{
    long long int N = n, rev, count = 0;
    rev = N;
    if (N == 0) { pc('0'); pc('\n'); return ;}
    while ((rev % 10) == 0) { count++; rev /= 10;} //obtain the count of the number of 0s
    rev = 0;
    while (N != 0) { rev = (rev<<3) + (rev<<1) + N % 10; N /= 10;}  //store reverse of N in rev
    while (rev != 0) { pc(rev % 10 + '0'); rev /= 10;}
    while (count--) pc('0');
}
inline void fastRead_int(long long int *a)
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
inline long long int modular(long long int a, long long int b)
{
    long long int d=1;
    while(b)
    {
        if((b&1)!=0)
        {
            d=(d*a)%mod;
        }
        b>>=1;
        a=(a*a)%mod;
    }
    return d;
}
int main()
{
    long long int n,k;
    fastRead_int(&n);
    fastRead_int(&k);
    
    while(n)
    {
        long long a,b,c,d,ans;
        b=modular(n,k);
        a=(2*modular(n-1,k))%mod;
        d=modular(n,n);
        c=(2*modular(n-1,n-1))%mod;
        ans=((a+b)%mod+(c+d)%mod)%mod;
        writeInt(ans);
        pc('\n');
        fastRead_int(&n);
        fastRead_int(&k);
    }
    return 0;
}