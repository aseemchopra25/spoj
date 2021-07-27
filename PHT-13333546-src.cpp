#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
    int t;
    long long int n;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%lld",&n);
        int ans=sqrt(n+1)-1;
        printf("Case %d: %d\n",i,ans);
        
        
    }
    return 0;
}