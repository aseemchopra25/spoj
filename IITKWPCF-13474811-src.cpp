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
    scanf("%d",&t);
    ll n,count=0,i,sq;
    while(t--)
    {
        count=0;
        scanf("%lld",&n);
        
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
                    if(isp(n/i)==0 && i*i!=n)
                    {
                        store[count]=n/i;
                        count++;
                    }
                    
                }
                
            }
            sort(store,store+count);
            printf("%lld ",count);
            for(i=0;i<count-1;i++)
                printf("%lld ",store[i]);
            printf("%lld\n",store[count-1]);
            
        }
        
    }
    return 0;
    
}