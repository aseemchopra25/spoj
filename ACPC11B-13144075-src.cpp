#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<algorithm>
#include<cstring>

using namespace std;
int main()
{
	int t,m,n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&m);
		int a[m];
		for(int i=0;i<m;i++)
		scanf("%d",&a[i]);
		scanf("%d",&n);
		int b[n];
		for(int i=0;i<n;i++)
		scanf("%d",&b[i]);
		
		sort(a,a+m);
		sort(b,b+n);			
	
		int min=2000000;
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
			if(abs(a[i]-b[j])<min)
				min=abs(a[i]-b[j]);
			
			}
		}
		printf("%d\n",min);
		
		
		
		
		
		
	}
	
	return 0;
	
	
}