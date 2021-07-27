#include<cstdio>
using namespace std;
int main()
{ int n,sum=0,j;
	scanf("%d",&n);
	for(int i=1;i*i<=n;i++)
	{	j=i;
		while(i*j<=n)
		{sum++;
            j++;
		}
	}
    printf("%d\n",sum);
    return 0;
}