#include<cstdio>
using namespace std;

void solve (long long int x)
{
    if(x<0)
        printf("%lld ",x);
    else if(x==1 || x==5)
        printf("-3 ");
    else if(x==2)
        printf("-2 ");
    else
        printf("-4 ");
}


int main()
{
    int t,n;
    long long int a;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d",&n);
        for(int j=0;j<n;j++)
        {
            scanf("%lld",&a);
            solve(a);
        }
        printf("\n");
        
    }
    return 0;
}