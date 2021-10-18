#include<cstdio>
#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
    long long int t,n,sum;
    string s;
    scanf("%lld",&t);
    for(long long int i=0;i<t;i++)
    {
        sum=0;
        scanf("%lld",&n);
        long long int a[n+1];
        memset(a,0,sizeof(a));
        for(long long int j=1;j<=n;j++)
        {
            cin>>s>>a[j];
        }
        sort(a,a+n+1);
        for(long long int k=1;k<=n;k++)
            sum+=abs(a[k]-k);
        printf("%lld\n",sum);
    }
    return 0;
}