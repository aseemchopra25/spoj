#include<cstdio>
#include<cmath>
#define MAX 10001
#define LMT 101
long long int etf[MAX];
int sum[MAX];
int flag[MAX/64];

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
    pc('\n');
}
#define chkC(n) (flag[n>>6]&(1<<((n>>1)&31)))
#define setC(n) (flag[n>>6]|=(1<<((n>>1)&31)))
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
inline void sieve()
{
    int i,j,k;
    for(i=3;i<LMT;i+=2)
        if(!chkC(i))
            for(j=i*i,k=i<<1;j<MAX;j+=k)
                setC(j);
    
    
    
    
    for(i=0;i<MAX;i++)
        etf[i]=i;
    for(int i=2;i<MAX;i+=2)
        etf[i]-=etf[i]>>1;
    for(int i=3;i<MAX;i+=2)
    {
        if(!chkC(i))
            for(int j=i;j<MAX;j+=i)
                etf[j]-=etf[j]/i;
        
        
    }
    for(int i=1;i<MAX;i++)
        etf[i]+=etf[i-1];
    
}
int main()
{
    sieve();
   
    int t,n;
    long long int ans;
    fastRead_int(&t);
    while(t--)
    {
        fastRead_int(&n);
        ans=etf[n]*etf[n];
        writeInt(ans);
    }
    
    return 0;
    
}