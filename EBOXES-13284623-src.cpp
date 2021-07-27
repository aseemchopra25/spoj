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
int  main()
{
    int test,n,k,t,f;
    fastRead_int(&test);
    while(test--)
    {
        fastRead_int(&n);
        fastRead_int(&k);
        fastRead_int(&t);
        fastRead_int(&f);
        printf("%d\n",f+(f-n)/(k-1));
        
    }
    return 0;
}