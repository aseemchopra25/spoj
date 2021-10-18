#include<cstdio>
using namespace std;
double res[100009];
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
inline void pre()
{
    int i;
    res[1]=1;
    for(i=2;i<=100000;i++)
        res[i]=res[i-1]+1.0/i;
    
}
int main()
{
    int t,n;
    pre();
    fastRead_int(&t);
    while(t--)
    {
        fastRead_int(&n);
        printf("%.6lf\n",res[n]);
    }
    return 0;
}