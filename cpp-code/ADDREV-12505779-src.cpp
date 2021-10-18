#include <cstdio>
using namespace std;
int reverse(int x)
{ int rev=0;
	for(;x!=0;)
    { rev=rev*10;
        rev=rev+x%10;
        x=x/10;
    }
    return rev;
}
int main() {
    int a,b,n,ans;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{ scanf("%d %d",&a,&b);
		ans=reverse(reverse(a)+reverse(b));
		printf("%d\n",ans);
	}
	return 0;
}