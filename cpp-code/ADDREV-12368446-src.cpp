#include <iostream>
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
	cin>>n;
	for(int i=0;i<n;i++)
	{ cin>>a>>b;
		ans=reverse(reverse(a)+reverse(b));
		cout<<ans<<endl;
	}
	return 0;
}