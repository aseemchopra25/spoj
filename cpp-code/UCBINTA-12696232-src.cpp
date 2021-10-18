#include<cstdio>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    int a[t][t];
    for(int i=0;i<t;i++)
        for(int j=0;j<t;j++)
            scanf("%d",&a[i][j]);
    int series[t];
    if(t==2)
    {
        printf("%d %d",a[0][1]/2,a[0][1]/2);
    }
    else
    {
    series[1]=(a[0][1]-a[0][2]+a[1][2])/2;
    series[0]=a[0][1]-series[1];
    for(int i=2;i<t;i++)
        series[i]=a[0][i]-series[0];
    for(int i=0;i<t;i++)
        printf("%d ",series[i]);
    }
    return 0;
    
}