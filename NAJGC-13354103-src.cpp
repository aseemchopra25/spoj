#include<cstdio>
#include<cmath>
using namespace std;
#define LL long long int 
inline LL gcd(LL n,LL m)
{
    LL temp;
    if(n<m)
    {
        temp=n;
        n=m;
        m=temp;
    }
    if(m==0)
        return n;
    else
    {
        while(m!=0)
        {
            temp=m;
            m=n%m;
            n=temp;
        }
    }
    return n;
}
int main()
{
    int t;
    LL x1,y1,x2,y2,n,d,g;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%lld %lld %lld %lld",&x1,&y1,&x2,&y2);
        d=(x1+y1)*(x2+y2+1);
        n=x1*(x2+1)+y1*(y2+1);
        if(d==0 || n==0)
            printf("Case %d: 0\n",i);
        else
        {
            g=gcd(n,d);
            printf("Case %d: %lld/%lld\n",i,(LL)(n/g),(LL)(d/g));
        }
    }
    return 0;
}