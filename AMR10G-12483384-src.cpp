#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{ long long int h[20001],diff1;
    int t,k,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {   diff1=999999999;
        scanf("%d %d",&n,&k);
        for(int j=0;j<n;j++)scanf("%lld",&h[j]);
        sort(h,h+n);
        for(int l=0;l<=n-k;l++)
            diff1=min(diff1,(h[k-1+l]-h[l]));
        printf("%lld\n",diff1);
        
        
    }
    return 0;
}