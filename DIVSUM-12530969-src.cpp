#include<cstdio>
#include<ctime>
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
    int t,n;
    long long int sum;
    fastRead_int(&t);
    for(int i=0;i<t;i++)
    {
        sum=0;
        fastRead_int(&n);
        for(int j=2;j*j<=n;j++)
        {
            if(n%j==0 && n/j!=j)
            sum+=j+n/j;
            else if( n%j==0 && n/j==j)
                sum+=j;
        }
        if(n==1)
        printf("0\n");
        else
            printf("%lld\n",sum+1);
    }
    return 0;
}