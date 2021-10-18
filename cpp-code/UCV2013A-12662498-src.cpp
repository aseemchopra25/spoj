#include<cstdio>
#define MOD 1000000007
using namespace std;
inline long long int powers(long long int n,int x)
{
    long long int mul=1;
    
    while(x>0)
    {
        if(x%2==1)mul=(mul*n)%1000000007;
        n=(n*n)%1000000007;
        x/=2;
    }
    return mul;
}
int main()
{
    long long int n;
    int l;
    scanf("%lld %d",&n,&l);
    while(true)
    {
        if(n==0 && l==0)
            break;
        long long int count=0;
        int x=1;
        while(x<=l)
        {
            count=(count+powers(n,x))%1000000007;
            x++;
        }
        printf("%lld\n",count);
        scanf("%lld %d",&n,&l);
    
    }
    return 0;
}