#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    double v, ans;
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lf",&v);
        ans=3*sqrt(3.0)*0.5*pow(16*v*v,1/(3.0));
        printf("%0.10lf\n",ans);
        
    }
    return 0;
}