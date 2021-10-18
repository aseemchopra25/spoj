#include<cstdio>
using namespace std;

long long int sum(long long int x)
{
    long long sum=0;
    while(x!=0)
    {
        sum+=x%10;
        x/=10;
    }
    return sum;
}

int main()
{
    int t;
    long long int x;
    
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%lld",&x);
        while(x%sum(x)!=0)
            x++;
        printf("%lld\n",x);
        
    }
    return 0;
}