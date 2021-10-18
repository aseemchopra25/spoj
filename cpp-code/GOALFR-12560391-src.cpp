#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int n;
    double xb,yb,xg,yg,r,val1,val2;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%lf %lf",&xb,&yb);
        scanf("%lf %lf %lf",&xg,&yg,&r);
        val1=abs(xg*(yb-3.66)-yg*(xb-52.5)+xb*3.66-yb*52.5);
        val1/=sqrt((yb-3.66)*(yb-3.66)+(xb-52.5)*(xb-52.5));
        val2=abs(xg*(yb+3.66)-yg*(xb-52.5)-xb*3.66-yb*52.5);
        val2/=sqrt((yb+3.66)*(yb+3.66)+(xb-52.5)*(xb-52.5));
        if(val1<=r && val2<=r)
            printf("No goal...\n");
        else
            printf("Goal!\n");
        
    }
    return 0;
}