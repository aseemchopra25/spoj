#include<cstdio>
using namespace std;
int main()
{
    long long int t,n,x;
    scanf("%lld",&t);
    for(long long int i=0;i<t;i++)
    {
        scanf("%lld",&n);
        long long int sum=0;
        for(long long int j=0;j<n;j++)
        {
            scanf("%lld",&x);
            sum+=x;
            if(sum>=n)
                sum=sum%n;
            
        }
        if(sum==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
    
}