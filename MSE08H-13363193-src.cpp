#include<cstdio>
#include<algorithm>
using namespace std;
#define LL long long int
int phi[1024],v[1024];
#define MOD 1000000007
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
int main()
{
   int n,i,j;
    LL ans;
    while(scanf("%d",&n)!=EOF)
    {
        ans=1;
        for(i=0;i<n;i++)fastRead_int(&v[i]);
        sort(v,v+n);
        for(i=0;i<n;i++)phi[i]=v[i];
        for(i=1;i<n;i++)
        {
            if(phi[i]==v[i])
                for(j=i;j<n;j++)
                    if(!(v[j]%v[i]))
                    {
                        phi[j]/=v[i];
                        phi[j]*=v[i]-1;
                    }
            ans=(ans*phi[i])%MOD;
        }
        printf("%lld\n",ans);
        
        
    }
    return 0;
}