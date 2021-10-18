#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int t,i;
    long long int n;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {   scanf("%lld",&n);
        long long int x=sqrt(n);
        if(x*x==n || (x-1)*(x-1)==n|| (x+1)*(x+1)==n)
            
            printf("Case %d: Yes\n",i);
        else
            
            printf("Case %d: No\n",i);
        
    }
    return 0;
}