#include<cstdio>
using namespace std;
int main()
{
    long long int t,n;
    scanf("%lld",&t);
    for(long long int i=0;i<t;i++)
    {
        scanf("%lld",&n);
        printf("%lld\n",(n)*(n+1)/6);
        
    }
    return 0;
}