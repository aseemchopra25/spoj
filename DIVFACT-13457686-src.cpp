#include<cstdio>
#include<cmath>
#define MAX 50000
#define LMT 3200
#define MOD 1000000007
int flag[MAX/64];
int prime[5134], total;  // 1 to 5133----2 to 49999

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
    int i, j, k;
    for(i=3;i<LMT;i+=2)
        if(!chkC(i))
            for(j=i*i,k=i<<1;j<MAX;j+=k)
                setC(j);
    prime[1] = 2;
    for(i=3,j=2;i<MAX;i+=2)
        if(!chkC(i))
            prime[j++] = i;
    
    
}
inline int mypow(int a,int b)
{
    int mul=1;
    while(b>0)
    {
        if(b&1)mul*=a;
        a*=a;
        b>>=1;
        
    }
    return mul;
}

int main()
{
    sieve();
    int t,n,ans,temp,q;
    long long int res;
    fastRead_int(&t);
    while(t--)
    {
        res=1;
        fastRead_int(&n);
        
        for(int i=0;i<=5133 && prime[i]<=n;i++)
        {
            q=prime[i];
            ans=0;
            temp=ceil(log(n)/log(q));
            for(int j=1;j<=temp;j++)
                ans+=floor(n/mypow(q,j));
            res=(res*(ans+1))%MOD;
            
        }
        printf("%lld\n",res);
        
    }
    return 0;
    
    
    
}