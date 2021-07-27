#include<cstdio>
using namespace std;
inline void fastRead_int(long long int *a)
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
{ int t,i,j;
	long long int x,y,s,d,a,n;
	scanf("%d",&t);
	for(i=0;i<t;i++)
    { 	fastRead_int(&x);
        fastRead_int(&y);
        fastRead_int(&s);
        n=2*s;
        n/=x+y;
        printf("%lld\n",n);
        
        a=2*(y-x);
        a/=n-5;
        a=x-a;
        d=y-x;
        d/=n-5;
        for(j=1;j<=n;j++)
            printf("%lld ",a+(j-1)*d);
        printf("\n");
    }
    return 0;
}
