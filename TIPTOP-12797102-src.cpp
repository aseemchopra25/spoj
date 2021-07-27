#include<cstdio>
#include<cmath>
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
inline void fastRead_longint(long long int *a)
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
    int t,i;
    long long int n;
    fastRead_int(&t);
    for(i=1;i<=t;i++)
    {   fastRead_longint(&n);
        long long int x=sqrt(n);
        if(x*x==n || (x-1)*(x-1)==n|| (x+1)*(x+1)==n)
            
            printf("Case %d: Yes\n",i);
        else
            
            printf("Case %d: No\n",i);
        
    }
    return 0;
}