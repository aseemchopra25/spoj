#include<cstdio>
using namespace std;
int main()
{
    int t;
    double n,ans,count;
    scanf("%d",&t);
    while(t--)
    {
        ans=0.0;
        scanf("%lf",&n);
        for(count=1.0;count<=n;count+=1.0)
        {
            ans+=(1.0/count);
            
        }
        printf("%0.2lf\n",ans*n);
        
    }
    return 0;
}