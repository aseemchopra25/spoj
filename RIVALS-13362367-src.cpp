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
#define pc(x) putchar_unlocked(x);
inline void writeInt (LL n)
{
    LL N = n, rev, count = 0;
    rev = N;
    if (N == 0) { pc('0'); pc('\n'); return ;}
    while ((rev % 10) == 0) { count++; rev /= 10;} //obtain the count of the number of 0s
    rev = 0;
    while (N != 0) { rev = (rev<<3) + (rev<<1) + N % 10; N /= 10;}  //store reverse of N in rev
    while (rev != 0) { pc(rev % 10 + '0'); rev /= 10;}
    while (count--) pc('0');
    pc('\n');
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
            temp=(temp*x)%MOD;
        x=(x*x)%MOD;
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
        
        writeInt(res);
        
    }
    return 0;
    
    
}