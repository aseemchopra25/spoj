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
    int p;
    long long int n,m,k,i;
    double ans;
    fastRead_int(&p);
    for(i=0;i<p;i++)
    {
        fastRead_longint(&n);
        fastRead_longint(&k);
        fastRead_longint(&m);
        ans=((double)log(m/n))/(double)(log(k));
        if(n>m)
            puts("0");
        else
        printf("%.0lf\n",floor(ans));
               
    }
    return 0;
        
} 