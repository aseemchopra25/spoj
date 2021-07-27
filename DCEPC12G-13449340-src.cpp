#include<cstdio>
#include<ctime>
#define MAX 10000000
#define LMT 3200
#define MOD 1000000007
#define pf(x) printf("%d"\n,x)
#define ll long long int
int cumu[MAX+1];
int flag[MAX/64];
int prime[664581];
int tot[MAX+1];
ll fact[MAX+1];
#define chkC(n) (flag[n>>6]&(1<<((n>>1)&31)))
#define setC(n) (flag[n>>6]|=(1<<((n>>1)&31)))

inline void phi(int n)
{
    int i;
    for(i=n<<1;i<=MAX;i+=n)
        tot[i]-=tot[i]/n;
    
    
    
}

inline void sieve()
{
        int i, j, k;
        for(i=3;i<LMT;i+=2)
            if(!chkC(i))
            {
                
                for(j=i*i,k=i<<1;j<MAX;j+=k)
                    setC(j);
                
            }
        cumu[0]=0;
        cumu[1]=0;
        cumu[2]=1;
    
        prime[1] = 2;
        tot[2]=1;
        phi(2);
        for(i=3,j=2;i<MAX;i+=2)
        {
            cumu[i]=cumu[i-1];
                
            if(!chkC(i))
                {
                    tot[i]=i-1;
                    phi(i);
                    cumu[i]++;
                    prime[j++] = i;
                    
                }
            cumu[i+1]=cumu[i];
        }
    
}
inline ll modpow(int a,ll b)
{
    ll temp=1;
    ll x=(ll)a;
    while(b!=0)
    {
        if(b&1)temp=(temp*x)%MOD;
        x=(x*x)%MOD;
        b>>=1;
    }
    return temp;
}
int main()
{
    fact[1]=1;
    fact[0]=1;
    for(int i=1;i<=MAX;i++)
    {
        tot[i]=i;
        fact[i]=(fact[i-1]*i)%MOD;
    }
    
    sieve();
    int t;
    ll temp,ans;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        temp=cumu[n]-tot[n];
        if(temp<0)temp=0;
        ans=modpow(tot[n], fact[temp]);
        printf("%lld\n",ans);
        
        
        
    }
    return 0;
}
