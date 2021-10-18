#include<cstdio>
using namespace std;
int main()
{  long long int t,n,sum;
	scanf("%lld",&t);
	for(long long int i=0;i<t;i++)
		{
			scanf("%lld",&n);
			sum=2*(n*(n+1)/2)+(n-1)*(n)/2;
			printf("%lld\n",sum%1000007);
			
		}
		return 0;
}