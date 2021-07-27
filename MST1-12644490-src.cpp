#include<cstdio>
#include<algorithm>
using namespace std;
int a[20000001];
int main()
{
    a[1]=0;
    for(int i=2;i<=20000000;i++)
    {
        a[i]=a[i-1]+1;
        if(i%2==0)a[i]=min(1+a[i/2],a[i]);
        if(i%3==0)a[i]=min(1+a[i/3],a[i]);
        
        
    }
    int t,n;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%d",&n);
        printf("Case %d: %d\n",i,a[n]);
    }
    return 0;
}