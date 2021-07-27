#include<cstdio>
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
    int t,w,b;
    
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&w,&b);
        if(b&1)
            puts("1.000000");
        else
            puts("0.000000");
    }
    return 0;
}