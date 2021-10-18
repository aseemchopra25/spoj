#include<stdio.h>
#include<math.h>
inline void fastRead_int(int *a)
{
    register char c=0;
    while (c<33) c=getchar_unlocked();
    *a=0;
    while (c>33)
    {
        *a=*a*10+c-'0';
        c=getchar_unlocked();
    }
}
int main()
{
    int t,i,a,b,c;
    double x1,x2,x3=0,ans;
    fastRead_int(&t);
    while(t--)
    {
        fastRead_int(&a);
        fastRead_int(&b);
        fastRead_int(&c);
        for(x1=0,x2=2500,i=1;i<=50;i++)
        {
            x3=(x1+x2)/2;
            ans=a*x3+b*sin(x3)-c;
            if(ans==0.000000 || (x2-x1)/2<0.000001)
                break;
            if(ans>0)
                x2=x3;
            else
                x1=x3;
            
        }
        printf("%lf\n",x3);
    }
    return 0;
}