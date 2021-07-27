#include<cstdio>
using namespace std;
int main()
{ int t,i,j;
	long long int x,y,s,d,a,n;
	scanf("%d",&t);
	for(i=0;i<t;i++)
    { 	scanf("%lld %lld %lld",&x, &y, &s);
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
