#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{ long long int a[4],i=1;
	while(scanf("%lld %lld %lld %lld",&a[0],&a[1],&a[2],&a[3])!=EOF)
	{
		sort(a,a+4);
		cout<<"Case "<<i<<": "<<a[2]+a[3]<<endl;
		i++;	
	}
	return 0;
}