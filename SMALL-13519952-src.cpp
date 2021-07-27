#include<cstdio>
#define ll long long int
#define MOD 1000000007
#define MAX 10010
#define LMT 100

int flag[MAX/64];
int prime[1232], total;

#define chkC(n) (flag[n>>6]&(1<<((n>>1)&31)))
#define setC(n) (flag[n>>6]|=(1<<((n>>1)&31)))



inline void primesieve()
{
    int i, j, k;
    for(i=3;i<LMT;i+=2)
        if(!chkC(i))
            for(j=i*i,k=i<<1;j<MAX;j+=k)
                setC(j);
    prime[1] = 2;
    for(i=3,j=2;i<MAX;i+=2)
        if(!chkC(i))
            prime[j++]=i;
    total=j;
   
    
}
ll a[MAX];


inline void marksieve()
{
    int temp;
    for(int i=1;i<total;i++)
    {
        temp=prime[i];
        while(temp<MAX)
        {
            a[temp]=prime[i];
            temp*=prime[i];
        }
        
    
    }
    
    
}
ll ans[MAX];
inline void pre()
{
    ans[1]=1;
    for(int i=2;i<MAX;i++)
    {
        if(a[i]!=0)
            ans[i]=((ans[i-1]%MOD)*(a[i]%MOD))%MOD;
        else
            ans[i]=ans[i-1];
        
    }
    
}


int main()
{
    primesieve();
    marksieve();
    pre();
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        printf("%lld\n",ans[n]);
    }
    return 0;
    
}