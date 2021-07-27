#include<cstdio>
using namespace std;

int main()
{
    int t;
    long long int a,b,c,ans;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%lld %lld %lld",&a,&b,&c);
        ans=a*a-2*(b);
        printf("%lld\n",ans);
    }
    return 0;
}