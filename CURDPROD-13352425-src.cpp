#include<cstdio>
#include<algorithm>
#include<cstdlib>
#include<cmath>
#define LL long long int
using namespace std;
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
    scanf("%d",&t);
    while(t--)
    {
        m=-1;
        scanf("%d%d",&n,&tot);
        int a[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            m=max(m,(LL)a[i]);
        }
        m*=tot;
        printf("%lld\n",bs(a,n,tot,m));
        
    }
}