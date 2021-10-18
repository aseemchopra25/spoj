#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
#define ll long long int
#define MAX 1000000
#define LMT 1001
int flag[MAX/64];
int total;
int prime[78499];
int tot;
int hsh[MAX];
ll store[10000];

#define pc(x) putchar_unlocked(x);
inline void writeInt (int n)
{
    int N = n, rev, count = 0;
    rev = N;
    if (N == 0) { pc('0'); pc('\n'); return ;}
    while ((rev % 10) == 0) { count++; rev /= 10;} //obtain the count of the number of 0s
    rev = 0;
    while (N != 0) { rev = (rev<<3) + (rev<<1) + N % 10; N /= 10;}  //store reverse of N in rev
    while (rev != 0) { pc(rev % 10 + '0'); rev /= 10;}
    while (count--) pc('0');
}
inline void fastRead_lint(ll *a)
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
#define chkC(n) (flag[n>>6]&(1<<((n>>1)&31)))
#define setC(n) (flag[n>>6]|=(1<<((n>>1)&31)))
inline void sieve()
{
    int i, j, k;
    for(i=3;i<LMT;i+=2)
        if(!chkC(i))
            for(j=i*i,k=i<<1;j<MAX;j+=k)
                setC(j);
    prime[1]=2;
    hsh[2]=1;
    for(i=3,j=2;i<MAX;i+=2)
        if(!chkC(i))
        {
            prime[j++]=i;
            hsh[i]=1;
        }
    tot=j;
    
}
inline bool isp(ll n)
{
    int i;
   
    for(i=1;prime[i]*prime[i]<=n && i<78499;i++)
        if(n%prime[i]==0)
            return 0;
    return 1;
        
    
}
int main()
{
    sieve();
    int t;
    fastRead_int(&t);
    ll n,i;
    int sq,count=0;
    while(t--)
    {
        count=0;
        fastRead_lint(&n);
        
        if(n&1)
            puts("0");
        else
        {
            n>>=1;
            sq=sqrt(n);
            for(i=1;i<=sq;i++)
            {
                if(n%i==0)
                {
                    if(hsh[i]==0)
                    {
                        store[count]=i;
                        count++;
                    }
                    if(n/i<MAX)
                    {
                        if(hsh[n/i]==0 && i*i!=n)
                        {
                            store[count]=n/i;
                            count++;
                        }
                        
                    }
                    else
                    {
                        if(isp(n/i)==0 && i*i!=n)
                        {
                            store[count]=n/i;
                            count++;
                        }
                    }
                    
                }
                
            }
            sort(store,store+count);
            writeInt(count);pc(' ');
            for(i=0;i<count-1;i++)
                printf("%lld ",store[i]);
            printf("%lld\n",store[count-1]);
            
        }
        
    }
    return 0;
    
}