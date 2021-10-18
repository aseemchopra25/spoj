#include<cstdio>
#include<cmath>
#define LL long long int
using namespace std;

inline LL pm(LL a, LL b, LL m)
{
    LL x=1,y=a;
    while(b>0)
    {
        if(b&1)
            x=(x*y)%m;
        y=(y*y)%m;
        b>>=1;
    }
    return x%m;
    
}

int main()
{
    int t;
    scanf("%d",&t);
    LL n,p,i,temp;
    while(t--)
    {
    
        temp=1;
        scanf("%lld%lld",&n,&p);
        if(n>=p)
        {
            puts("0");
            continue;
        }
        for(i=n+1;i<p;i++)
            temp=(temp*i)%p;
        temp=-1*pm(temp,p-2,p)+p;
        
        printf("%lld\n",temp);
        
    }
    return 0;
}