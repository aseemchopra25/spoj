#include<stdio.h>
#define MAX 5300000
#define LMT 2303

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
int total;
unsigned store[2000001];
int flag[MAX/64];
#define chkC(n) (flag[n>>6]&(1<<((n>>1)&31)))
#define setC(n) (flag[n>>6]|=(1<<((n>>1)&31)))
long long int prime [367901];
int x[10527452];

#define pc(x) putchar_unlocked(x);
inline void writeInt (int n)
{
    int N = n, rev, count = 0;
    rev = N;
    if (N == 0) { pc('0'); return ;}
    while ((rev % 10) == 0) { count++; rev /= 10;} //obtain the count of the number of 0s
    rev = 0;
    while (N != 0) { rev = (rev<<3) + (rev<<1) + N % 10; N /= 10;}  //store reverse of N in rev
    while (rev != 0) { pc(rev % 10 + '0'); rev /= 10;}
    while (count--) pc('0');
    pc('\n');
}
inline void sieve()
{
    register int i,j,k;
    for(i=3;i<LMT;i+=2)
        if(!chkC(i))
            for(j=i*i,k=i<<1;j<MAX;j+=k)
                setC(j);
    prime[1]=2;
    for(i=3,j=2;i<MAX;i+=2)
        if(!chkC(i))
            prime[j++]=i;
    total=j;
    
    long long int num=0;
    for(i=1;i<total;i++)
        for(j=i+1;j<total;j++)
        {
            num=prime[i]*prime[j];
            if(num<10527451)
                x[num]=1;
            else
                break;
        }
    int count=1;
    for(i=0;i<10527451;i++)
        if(x[i])
            store[count++]=i;
    
    
    
    
}
int main()
{
    sieve();
    int t,n;
    fastRead_int(&t);
    while(t--)
    {
        fastRead_int(&n);
        writeInt(store[n]);
        
    }
    
    return 0;
}
