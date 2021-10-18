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

#define pc(x) putchar_unlocked(x);
inline void writeInt (ll n)
{
    ll N = n, rev, count = 0;
    rev = N;
    if (N == 0) { pc('0'); return ;}
    while ((rev % 10) == 0) { count++; rev /= 10;} //obtain the count of the number of 0s
    rev = 0;
    while (N != 0) { rev = (rev<<3) + (rev<<1) + N % 10; N /= 10;}  //store reverse of N in rev
    while (rev != 0) { pc(rev % 10 + '0'); rev /= 10;}
    while (count--) pc('0');
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
inline ll factorial(ll n)
{
    ll temp=1;
    
    for(int i=2;i<=n;i++)
    {
        temp=(temp*i)%MOD;
        
    }
    return temp;
}
int main()
{
    
    for(int i=1;i<=MAX;i++)
    {
        tot[i]=i;
        
    }
    
    sieve();
    int t;
    ll temp,ans;
    fastRead_int(&t);
    while(t--)
    {
        int n;
        fastRead_int(&n);
        temp=cumu[n]-tot[n];
        if(temp<0)temp=0;
        ans=modpow(tot[n], factorial(temp));
        writeInt(ans);
        pc('\n');
        
        
        
    }
    return 0;
}