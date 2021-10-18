#include<cstdio>
using namespace std;
int main()
{ int t,n;
long long int a[10001],sum;
	scanf("%d",&t);
		for(int i=0;i<t;i++)
		{	sum=0;
		scanf("%d",&n);
			for(int j=0;j<n;j++)
			scanf("%lld",&a[j]);
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