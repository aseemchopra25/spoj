#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{
    double n,a,b,c,d;
    double s,ans;
    scanf("%lf",&n);
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
        s=(a+b+c+d)/2;
        ans=sqrt((s-a)*(s-b)*(s-c)*(s-d));
        printf("%lf\n",ans);
        
    }
    return 0;
}