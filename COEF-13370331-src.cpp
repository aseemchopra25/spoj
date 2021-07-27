#include<cstdio>
int main()
{
    int a[14],val;
    a[0]=1;
    for(int i=1;i<14;i++)
        a[i]=a[i-1]*i;
    int n,k,ans;
    while(scanf("%d%d",&n,&k)!=EOF)
    {
        ans=a[n];
        for(int i=0;i<k;i++)
        {
            scanf("%d",&val);
            ans/=a[val];
        }
        printf("%d\n",ans);
        
    }
    return 0;
    
}