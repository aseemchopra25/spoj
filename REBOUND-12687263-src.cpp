#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    long long int t;
    scanf("%lld",&t);
    double q;
    double x,y,z;
    long long int ans;
    for(long long int i=0;i<t;i++)
    {
        scanf("%lf %lf %lf",&x,&y,&z);
        q=2*z*x+z*sqrt(4*x*x+4*(2*z+y)*(y));
        q=q/(2*(2*z+y));
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