#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int t;
    long long int n,l;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%lld",&n);
        l=floor((sqrt(4+4*n)-2)/2);
        printf("Case %d: %lld\n",i,l);
    
    }
    return 0;
}