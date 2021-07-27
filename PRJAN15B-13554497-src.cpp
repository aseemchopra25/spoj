#include<cstdio>
#define ll long long int
int a[30];
int cumu[30];
inline void pre()
{
    a[4]=1;a[8]=1;a[9]=1;a[12]=1;a[13]=1;a[16]=1;a[17]=1;
    a[18]=1;a[20]=1;a[21]=1;a[22]=1;
    cumu[0]=0;
    
    for(int i=1;i<=23;i++)
        cumu[i]=cumu[i-1]+a[i];
    
    
}
int main()
{
    pre();
    int t;
    ll a,b,ans;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld %lld",&a,&b);
        if(a>23)
            printf("%lld\n",b-a+1);
        else if(a<=23 && b>23)
        {
            ans=b-23+cumu[23]-cumu[a-1];
            printf("%lld\n",ans);
        }
        else if(a<=23 && b<=23)
        {
            ans=cumu[b]-cumu[a-1];
            printf("%lld\n",ans);
        }
            
    }
    return 0;
}