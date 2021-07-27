#include<cstdio>
#include<cmath>
#define max 1000001
using namespace std;
long long int a[max];



inline void pre()
{
    
    for(int i=2;i<=500000;i++)
        for(int j=i<<1;j<max;j+=i)
            a[j]+=i;
    for(int i=2;i<max;i++)
        a[i]+=a[i-1]+1;
        
    
    
        
        
    
    
}
int main()
{
    pre();
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        printf("%lld\n",a[n]);
    }
    return 0;
}