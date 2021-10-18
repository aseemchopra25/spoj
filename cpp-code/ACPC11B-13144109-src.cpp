#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<algorithm>
#include<cstring>
#include<string>

using namespace std;
#define gc getchar_unlocked

void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}
int main()
{
	int t,m,n;
	scanint(t);
	while(t--)
	{
		scanint(m);
		int a[m];
		for(int i=0;i<m;i++)
		scanint(a[i]);
		scanint(n);
		int b[n];
		for(int i=0;i<n;i++)
		scanint(b[i]);
		
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