#include<cstdio>
#include<cmath>
#include<map>
using namespace std;
#define MAX 10000000
#define LMT 3200
int flag[MAX/64];
int prime[664581],total;
#define chkC(n) (flag[n>>6]&(1<<((n>>1)&31)))
#define setC(n) (flag[n>>6]|=(1<<((n>>1)&31)))
map<int,int>check;
inline void sieve()
{
    int i,j,k;
    for(i=3;i<LMT;i+=2)
        if(!chkC(i))
            for(j=i*i,k=i<<1;j<MAX;j+=k)
                setC(j);
    prime[1]=2;
    check[2]=1;
    for(i=3,j=2;i<MAX;i+=2)
        if(!chkC(i))
        {
            prime[j++]=i;
            check[i]=1;
        }
    total=j;
    
}
int func(int a)
{
    int v=0,h=a,even=0,odd=0;
    for(int j=1,t=prime[j];t*t<=h;t=prime[++j])
    {
        v=0;
        if(h%t==0)
        {
            while(h%t==0)
            {
                v++;
                h/=t;
            }
            if((v&1)==0)
                even++;
            else
                odd++;
        }
        if(h==1)
            break;
        
    }
    if(h!=1)odd++;
    if(even>odd)
        return 1;
    else
        return 0;
}
int main()
{
    sieve();
    int t,n,val;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        if(check.count(n))
        {
            puts("Ordinary Number");
            continue;
        }
        
        val=func(n);
        if(val==1)
            puts("Psycho Number");
        else
            puts("Ordinary Number");
    }
    return 0;
}