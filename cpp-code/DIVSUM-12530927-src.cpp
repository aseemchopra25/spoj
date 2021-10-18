#include<cstdio>
#include<ctime>
using namespace std;
int main()
{
    int t,n;
    long long int sum;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        sum=0;
        scanf("%d",&n);
        for(int j=2;j*j<=n;j++)
        {
            if(n%j==0 && n/j!=j)
            sum+=j+n/j;
            else if( n%j==0 && n/j==j)
                sum+=j;
        }
        if(n==1)
        printf("0\n");
        else
            printf("%lld\n",sum+1);
    }
    return 0;
}