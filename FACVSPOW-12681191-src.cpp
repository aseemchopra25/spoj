#include<cstdio>
#include<cmath>

static const double e=2.7182818284590452;
static long double sum[3000000];
using namespace std;
int main()
{
    long long int a,i,j;
    sum[1]=0;
    for(i=2;i<3000000;i++)
        sum[i]=sum[i-1]+logl(i);
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&a);
        {
            j=pow(e,logl(a)+1);
            double temp=sum[j]/log(a);
            while(temp>j)
            {
                j--;
                temp=sum[j]/log(a);
                
            }
        }
        printf("%lld\n",j+1);
    }
    return 0;
}
