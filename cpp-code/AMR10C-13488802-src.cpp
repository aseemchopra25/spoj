#include<cstdio>
#include<cmath>
#define ll long long int
#define MAX 1024
#define LMT 32
int flag[MAX/64],total;
int prime [200];

#define pc(x) putchar_unlocked(x);
inline void writeInt (int n)
{
    int N = n, rev, count = 0;
    rev = N;
    if (N == 0) { pc('0'); pc('\n');return ;}
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
    prime[1]=2;
    for(i=3,j=2;i<MAX;i+=2)
        if(!chkC(i))
            prime[j++]=i;
}
inline int ans(int n)
{
    int i,counter,val=0,sq=sqrt(n),temp;
    for(i=1;prime[i]<=sq;i++)
    {
        temp=prime[i];
        if(n%temp==0)
        {
            counter=0;
            while(n%temp==0)
            {
                counter++;
                n/=temp;
            }
            sq=sqrt(n);
            if(counter>val)val=counter;
            
        }
    }
    if(n>1 && val<1)val=1;
    return val;
    
}
int main()
{
    sieve();
    int t,n;
    fastRead_int(&t);
    while(t--)
    {
        fastRead_int(&n);
        writeInt(ans(n));
        
    }
    return 0;
}