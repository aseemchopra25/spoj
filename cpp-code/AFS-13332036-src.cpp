#include<cstdio>
#include<cmath>
#define max 1000001
using namespace std;
long long int a[max];
inline void fastRead_int(int *a)
{
    register char c=0;
    while (c<33) c=getchar_unlocked();
    *a=0;
    while (c>33)
    {
        *a=*a*10+c-'0';
        c=getchar_unlocked();
    }
}


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
    fastRead_int(&t);
    while(t--)
    {
        fastRead_int(&n);
        printf("%lld\n",a[n]);
    }
    return 0;
}