#include<cstdio>
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
inline void fastRead_llint(long long int *a)
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
    int t,p;
    LL n,ans,temp1,temp2; //temp1 is indivisual product and temp2 is value of n
    fastRead_int(&t);
    while(t--)
    {
        ans=1;
        fastRead_llint(&n);
        fastRead_int(&p);
        temp2=n;
        if(n==0)
        {
            puts("0");
            continue;
        }
        while(temp2!=0)
        {
            temp1=temp2%p;
            temp2=temp2/p;
            ans=ans*(temp1+1);
        }
        ans=n+1-ans;
        printf("%lld\n",ans);
        
    }
    return 0;
}