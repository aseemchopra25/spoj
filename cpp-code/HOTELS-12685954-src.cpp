#include<cstdio>
#include<algorithm>
using namespace std;
long long int a[300009];
int main()
{
    long long int n,m;
    scanf("%lld %lld",&n,&m);
    for(long long int i=0;i<n;i++)
        scanf("%lld",&a[i]);
    long long int p=0,q=0;
    long long int sum=a[0];
    long long int ans=0;
    while(q<=n-1)
    {
        if(sum<=m)
        {
            ans=max(sum,ans);
            q++;
            sum+=a[q];
        }
        else
        {
            p++;
            sum-=a[p-1];
        }
    }
    printf("%lld",ans);
    return 0;
}