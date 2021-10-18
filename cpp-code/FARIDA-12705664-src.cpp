#include<cstdio>
#include<algorithm>
using namespace std;
inline void fastRead_intl(long long int *a)
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
int main()
{
    int t,n,i,j;
    long long int a[10002];
    fastRead_int(&t);
    for(i=1;i<=t;i++)
    {
        a[0]=0;
        fastRead_int(&n);
        if(n==0)
        { printf("Case %d: 0\n",i);
            continue;
        }
        for(j=1;j<=n;j++)
            fastRead_intl(&a[j]);
        for(j=2;j<=n;j++)
        {
            a[j]=max(a[j-1],a[j]+a[j-2]);
        }
        printf("Case %d: %lld\n",i,a[n]);
        
        
    }
    return 0;
}