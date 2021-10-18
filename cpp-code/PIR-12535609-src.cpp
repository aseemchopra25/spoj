#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    long long int t;
    double u,v,w,U,V,W,ud,vd,wd;
    double vol;
    scanf("%lld",&t);
    for(long long int i=0;i<t;i++)
    {
        scanf("%lf %lf %lf %lf %lf %lf",&u,&v,&w,&W,&V,&U);
        ud=v*v+w*w-U*U;
        vd=w*w+u*u-V*V; 
        wd=u*u+v*v-W*W;
        vol=sqrt(4*u*u*v*v*w*w-u*u*ud*ud-v*v*vd*vd-w*w*wd*wd+ud*vd*wd)/12;
        printf("%0.4f\n",vol);
    }
    return 0;
}