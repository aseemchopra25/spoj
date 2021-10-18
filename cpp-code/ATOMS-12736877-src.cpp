#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int p;
    long long int n,m,k;
    double ans;
    scanf("%d",&p);
    for(int i=0;i<p;i++)
    {
        scanf("%lld %lld %lld",&n,&k,&m);
        ans=((double)log(m/n))/(double)(log(k));
        if(n>m)
            printf("0\n");
        else
        printf("%.0lf\n",floor(ans));
               
    }
    return 0;
        
}