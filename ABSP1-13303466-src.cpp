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
inline void fastRead_lint(long long int *a)
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
{ int t,n;
    long long int a[10001],sum;
	fastRead_int(&t);
    for(int i=0;i<t;i++)
    {	sum=0;
		fastRead_int(&n);
        for(int j=0;j<n;j++)
			fastRead_lint(&a[j]);
        int l=n-1;
        for(int k=n-1;k>=0;k--)
        {
            sum+=a[k]*l;
            l=l-2;
        }
        printf("%lld\n",sum);
    }
    return 0;
}