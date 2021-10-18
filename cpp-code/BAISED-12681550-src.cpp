#include<cstdio>
#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
#include<cstring>
using namespace std;
inline void fastRead_int(long long int *a)
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
    long long int t,n,sum;
    char s[500];
    scanf("%lld",&t);
    for(long long int i=0;i<t;i++)
    {
        sum=0;
        fastRead_int(&n);
        long long int a[n+1];
        memset(a,0,sizeof(a));
        for(long long int j=1;j<=n;j++)
        {
            scanf("%s",s);
            fastRead_int(&a[j]);
            
        }
        sort(a,a+n+1);
        for(long long int k=1;k<=n;k++)
            sum+=abs(a[k]-k);
        printf("%lld\n",sum);
    }
    return 0;
}