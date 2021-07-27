#include<cstdio>
using namespace std;
int main()
{
    int t;
    double n,m,k;
    long long int hand,knife;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {   knife=0;
        scanf("%lf %lf %lf",&n,&m,&k);
        hand=k*n*m-1;
        while(k>1)
        {
            k=k/2;
            knife++;
        }
        while(n>1)
        {
            n=n/2;
            knife++;
        }
        while(m>1)
        {
            m=m/2;
            knife++;
        }
        printf("Case #%d: %lld %lld\n",i,hand,knife);
        
    }
    return 0;
}
