#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    long long int t;
    scanf("%lld",&t);
    double q;
    long long int x,y,z;
    long long int ans;
    for(long long int i=0;i<t;i++)
    {
        scanf("%lld %lld %lld",&x,&y,&z);
        q=z*(x<<1)+z*sqrt(x*(x<<2)+((2*z+y)<<2)*(y));
        q=q/(((z<<1)+y)<<1);
        if(q==(long long int)q)
        {
            ans=(long long int)q;
            printf("%lld\n",ans);
        }
        else
            printf("Not this time.\n");
        
    }
    return 0;
}