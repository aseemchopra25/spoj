#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
inline double dist(double x1,double x2,double y1, double y2)
{
    double dist;
    dist=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    return dist;
}
int main()
{
    int t,n,i,j;
    double x[2000],y[2000],r,dist1,mind=9999999.0,maxr;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%lf %lf",&x[i],&y[i]);
        maxr=0.0;
        for(i=0;i<n;i++)
        {
            mind=9999999.0;
            for(j=0;j<n;j++)
            {
                if(i!=j)
                {
                    dist1=dist(x[i],x[j],y[i],y[j]);
                    mind=min(dist1,mind);
                    if(mind<2)
                    {
                        printf("-1.000000\n");
                        goto c;
                    }
                    
                }
            }
            
            maxr=max(maxr,mind);
        }
        r=maxr-1.00;
        printf("%0.6lf\n",r);
        
    c:
        continue;
    }
    return 0;
}