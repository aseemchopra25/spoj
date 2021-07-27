#include<cstdio>
#include<cmath>
int main()
{
    int t;
    double a,b,c,ans,s;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%lf %lf %lf",&a,&b,&c);
        s=(a+b+c)/2;
        ans=(sqrt(3)/4)*(pow(a,2)+pow(b,2)+pow(c,2))+3*sqrt(s*(s-a)*(s-b)*(s-c));
        ans/=2;
        printf("%0.2lf\n",ans);
    }
    return 0;
}