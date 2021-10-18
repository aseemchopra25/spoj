#include<cstdio>
using namespace std;


long long int comb(long long int n, long long int r)
{
    long long int res=1,i;
    if(r>n/2)
        r=n-r;
    for(i=0;i<r;i++)
    {
        res*=(n-i);
        res/=i+1;
    }
    return res;
    
}



int main()
{
    long long int t,n,r,i;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld %lld",&n,&r);
        n=n-1;
        r=r-1;

        printf("%lld\n",comb(n,r));
    }
    return 0;
    
}