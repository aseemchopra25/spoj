#include<cstdio>
#define ull unsigned long long int
#define ll long long int
#define MAX 65536
#define LMT 256
inline void fastRead_int(ull *a)
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
inline void fastRead_xint(int *a)
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
inline void writeInt (unsigned  n)
{
    unsigned int N = n, rev, count = 0;
    rev = N;
    if (N == 0) { pc('0'); return ;}
    while ((rev % 10) == 0) { count++; rev /= 10;} //obtain the count of the number of 0s
    rev = 0;
    while (N != 0) { rev = (rev<<3) + (rev<<1) + N % 10; N /= 10;}  //store reverse of N in rev
    while (rev != 0) { pc(rev % 10 + '0'); rev /= 10;}
    while (count--) pc('0');
    pc('\n');
}
unsigned flag[MAX/64];
unsigned primes[MAX/10];
unsigned primelen;
unsigned hash[MAX];

#define ifC(n) (flag[n>>6]&(1<<((n>>1)&31)))
#define isC(n) (flag[n>>6]|=(1<<((n>>1)&31)))
inline void sieve()
{
    unsigned i,j,k;
    for(i=3;i<LMT;i+=2)
        if(!ifC(i))
            for(j=i*i,k=(i<<1);j<MAX;j+=k)
                isC(j);
    for(i=3,j=0;i<MAX;i+=2)
        if(!ifC(i))
        {
            primes[j++]=i;
            hash[i]=1;
            
        }
    primelen=j;
    
}
inline bool isprime(unsigned n)
{
    int i;
    for(i=0;i<primelen && primes[i]*primes[i]<=n;i++)
        if(n%primes[i]==0)
            return false;
        return true;
    
}
int main()
{
    ull N;
    unsigned n;
    int t;
    char s[100];
    fastRead_xint(&t);
    sieve();
    while(t--)
    {
        
        fastRead_int(&N);
        if(N<4)
        {
            puts("2");
            continue;
        }
        if(N>4294967291LL)
        {
            puts("4294967291");
            continue;
        }
        if(N&1)N-=2;
        else N-=1;
        n=(unsigned)N;
        if(n<MAX)
        {
            for(;;n-=2)
                if(hash[n])
                {
                    sprintf(s,"%u",n);
                    puts(s);
                    break;
                }
        }
        else
        {
            for(;;n-=2)
                if(isprime(n))
                {
                    sprintf(s,"%u",n);
                    puts(s);
                    break;
                }
        }
        
        
        
        
        
    }
    return 0;
    
    
}