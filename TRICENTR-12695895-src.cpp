#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    double a,b,c,x,y,z,s,r,m;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lf%lf%lf%lf",&a,&x,&y,&z);
        s=3.0*a*x/2.0;
        b=2.0*s/3.0/y;
        c=2.0*s/3.0/z;
        r=a*b*c/4.0/s;
        m=4.0*(r*r-(a*a+b*b+c*c)/9.0);
        m=max(0.0,m);
        printf("%.3lf %.3lf\n",s,sqrt(m));
        
    }
    return 0;
}