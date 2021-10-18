#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int t,i,j,count;
    long long int n,ans;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        ans=1;
        count=0;
        scanf("%lld",&n);
        while((n&1)==0)
        {
            count++;
            n>>=1;
        }
        ans=ans*(2*count+1);
        for(j=3;j<=sqrt(n);j+=2)
        {
            count=0;
            while(n%j==0)
            {
                count++;
                n/=j;
            }
            ans=ans*(2*count+1);
        }
        if(n>2)
            ans=ans*3;
        printf("%lld\n",ans/2);
    }
    return 0;
}