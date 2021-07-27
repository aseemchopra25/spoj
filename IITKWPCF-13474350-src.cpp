#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
#define ll long long int
inline ll prime(ll n)
{
    if(n==1)
        return 0;
    if(n==2 || n==3 || n==5)
        return 1;
    if((n&1)==0 || n%3==0 || n%5==0)
        return 0;
    ll i;
    for(i=7;i<=sqrt(n);i++)
        if(n%i==0)
            return 0;
    return 1;
}
int main()
{
    ll t,count=0,i;
    scanf("%lld",&t);
    ll n,store[10000];
    while(t--)
    {
        scanf("%lld",&n);
        count=0;
        if(n%2==1)
            printf("0\n");
        else
        {
            n/=2;
            for(i=1;i<=sqrt(n);i++)
            {
                if(n%i==0)
                {
                    if(prime(i)==0)
                    {
                        store[count]=i;
                        count++;
                    }
                    if(prime(n/i)==0 && i*i!=n)
                    {
                            store[count]=n/i;
                              count++;
                    }
                }
            }
            sort(store,store+count);
            printf("%lld ",count);
            for(i=0;i<count-1;i++)
                printf("%lld ",store[i]);
            printf("%lld\n",store[count-1]);
            
        }
    }
    return 0;
}