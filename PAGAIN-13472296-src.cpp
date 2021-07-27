#include<cstdio>
#define ull unsigned long long int
#define ll long long int
#define MAX 65536
#define LMT 256

unsigned flag[MAX/64];
unsigned primes[MAX/10];
unsigned primelen;

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
            primes[j++]=i;
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
    scanf("%d",&t);
    sieve();
    while(t--)
    {
        
        scanf("%llu",&N);
        if(N<5)
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
                if(!ifC(n))
                {
                    printf("%u\n",n);
                    break;
                }
        }
        else
        {
            for(;;n-=2)
                if(isprime(n))
                {
                    printf("%u\n",n);
                    break;
                }
        }
        
        
        
        
        
    }
    return 0;
    
    
}