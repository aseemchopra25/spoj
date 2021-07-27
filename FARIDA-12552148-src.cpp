#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int t,n;
    long long int a[10002];
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        a[0]=0;
        scanf("%d",&n);
        if(n==0)
        { printf("Case %d: 0\n",i);
            continue;
        }
        for(int j=1;j<=n;j++)
        scanf("%lld",&a[j]);
        for(int j=2;j<=n;j++)
        {
            a[j]=max(a[j-1],a[j]+a[j-2]);
        }
        printf("Case %d: %lld\n",i,a[n]);
        
        
    }
    return 0;
}