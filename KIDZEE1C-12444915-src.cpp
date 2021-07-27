#include<cstdio>
using namespace std;
int main()
{ 
	int t,x;
	scanf("%d",&t);
		for(int i=0;i<t;i++)
		{
			scanf("%d",&x);
			if(x%3==0)
			printf("%d is a multiple of 3\n",x);
			else
			printf("%d is not a multiple of 3\n",x);
		}
		return 0;
}