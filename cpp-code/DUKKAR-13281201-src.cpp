#include<cstdio>
#define LL long long int 
using namespace std;
int main()
{
    int t,p;
    LL n,ans,temp1,temp2; //temp1 is indivisual product and temp2 is value of n
    scanf("%d",&t);
    while(t--)
    {
        ans=1;
        scanf("%lld%d",&n,&p);
        temp2=n;
        if(n==0)
        {
            printf("0\n");
            continue;
        }
        while(temp2!=0)
        {
            temp1=temp2%p;
            temp2=temp2/p;
            ans=ans*(temp1+1);
        }
        ans=n+1-ans;
        printf("%lld\n",ans);
        
    }
    return 0;
}