#include<cstdio>
#include<map>
#include<cstdlib>
#include<cmath>
using namespace std;
#define ll long long int
#define MAX 1000000
#define LMT 1000
#define dbug(x) printf("%d\n",x)

int flag[MAX/64];
int prime[664581], total;

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


void psieve()
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
    total=j;
    
}

int main()
{
    psieve();
    int t,n,p;
    fastRead_int(&t);
    
    ll temp;
    
    for(int i=1;i<=t;i++)
    {
        fastRead_int(&n);
        
        map<ll,int>m;
        map<ll,int> ::iterator it;
        for(int k=1;k<=n;k++)
        {
            scanf("%lld",&temp);
            
            for(int j=1;j<total && prime[j]*prime[j]<=temp;j++)
            {
                p=prime[j];
                if(temp%p==0)
                {
                    m[p]=1;
                    while(temp%p==0)
                        temp/=p;
                }
                
            
            }
            if(temp>2)
                m[temp]=1;
            
            
        }
        printf("Case #%d: %d\n",i,(int)m.size());
        for(it=m.begin();it!=m.end();it++)
            printf("%lld\n",it->first);
    
    }
    return 0;
    
}