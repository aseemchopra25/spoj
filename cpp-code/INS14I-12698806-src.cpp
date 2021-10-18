#include<cstdio>
#include<cmath>
using namespace std;
#define X (3+2*sqrt(2))
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
    int t,n;
    double temp,k;
    fastRead_int(&t);
    while(t--)
    {
        fastRead_int(&n);
        if(n==0)
        {
            printf("4\n");
            continue;
        }
        temp=ceil(n/X);
        k=floor(temp*X);
        if(k==n)
            printf("4\n");
        else
            printf("5\n");
        
    }
    return 0;
    
}
