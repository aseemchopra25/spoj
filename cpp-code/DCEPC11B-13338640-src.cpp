#include<cstdio>
#include<cmath>
#define LL long long int
using namespace std;
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
inline LL pm(LL a, LL b, LL m)
{
    LL x=1,y=a;
    while(b>0)
    {
        if(b&1)
            x=(x*y)%m;
        y=(y*y)%m;
        b>>=1;
    }
    return x%m;
    
}

int main()
{
    int t;
    fastRead_int(&t);
    LL n,p,i,temp;
    while(t--)
    {
    
        temp=1;
        fastRead_lint(&n);
        fastRead_lint(&p);
        if(n>=p)
        {
            puts("0");
            continue;
        }
        for(i=n+1;i<p;i++)
            temp=(temp*i)%p;
        temp=-1*pm(temp,p-2,p)+p;
        
        printf("%lld\n",temp);
        
    }
    return 0;
}