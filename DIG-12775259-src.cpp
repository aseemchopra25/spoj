#include<cstdio>
#define MOD 1000000007
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
int main()
{
    long long int ans;
    
    int t,i;
    long long int n;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld",&n);
        if(n==1 || n==2 || n==3)
            printf("0\n");
        else
        {
            ans=((((((n)*(n-1))%MOD)*(n-2))%MOD)*(n-3))%MOD;
            printf("%lld\n",(ans*41666667)%MOD);
        }
    }
    return 0;
    
}