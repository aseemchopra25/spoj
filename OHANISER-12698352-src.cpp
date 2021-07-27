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
    int t,n,i,temp;
    long long int x,mul;
    fastRead_int(&t);
    for(i=1;i<=t;i++)
    {
        fastRead_int(&n);
        if (n==1)
        printf("Case %d: 1\n",i);
        else
        {
            mul=1;
            x=2;
            temp=n-2;
            while(temp>0)
            {
                if(temp%2!=0)mul=((mul%MOD)*x%MOD)%MOD;
                x=((x%MOD)*x%MOD)%MOD;
                temp=temp/2;
            }

            printf("Case %d: %lld\n",i,((n+1)*mul)%MOD);
        }
    }
    return 0;
}