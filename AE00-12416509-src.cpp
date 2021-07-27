#include<iostream>
using namespace std;
int main()
{ int n,sum=0,j;
	cin>>n;
	for(int i=1;i*i<=n;i++)
	{	j=i;
		while(i*j<=n)
		{sum++;
            j++;
		}
	}
    cout<<sum<<endl;
    return 0;
}