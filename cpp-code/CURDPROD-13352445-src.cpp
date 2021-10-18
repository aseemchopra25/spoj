#include<cstdio>
#include<algorithm>
#include<cstdlib>
#include<cmath>
#define LL long long int
using namespace std;
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
inline LL foo(LL mid,int n,int a[])
{
    LL total=0;
    for(int i=0;i<n;i++)
        total+=mid/a[i];
    return total;
}
inline LL bs(int a[],int n,int tot,LL m)
{
    LL mid,low=1,high=m,temp;
    while(low<high)
    {
        mid=(low+high)>>1;
        temp=foo(mid,n,a);
        if(temp<tot)
            low=mid+1;
        else
            high=mid;
        
    }
    return high;
}
int main()
{
    int t,n,tot;
    LL m;
    fastRead_int(&t);
    while(t--)
    {
        m=-1;
        fastRead_int(&n);
        fastRead_int(&tot);
        int a[n];
        for(int i=0;i<n;i++)
        {
            fastRead_int(&a[i]);
            m=max(m,(LL)a[i]);
        }
        m*=tot;
        printf("%lld\n",bs(a,n,tot,m));
        
    }
}