#include<cstdio>
#define MOD 1000000007
using namespace std;
inline long long int power(int n)
{
    long long int mul=1;
    long long int x=2;
    while(n>0)
    {
        if(n%2==1)mul=((mul%MOD)*x%MOD)%MOD;
        x=((x%MOD)*x%MOD)%MOD;
        n=n/2;
    }
    return mul%MOD;
}
int main()
{
    int t;
    int n;
    long long int ans;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%d",&n);
        if (n==1)
            printf("Case %d: 1\n",i);
        else
        {
            ans=(((n+1)%MOD)*(power(n-2)%MOD))%MOD;
            printf("Case %d: %lld\n",i,ans);
        }
    }
    return 0;
}