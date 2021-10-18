#include<iostream>
using namespace std;
int main()
{ int a[10],sum=0;
	for(int i=0;i<10;i++)
	{
		cin>>a[i];
		sum+=a[i];
		if(sum>=100)
		{
			if(sum-100<=100-(sum-a[i])) cout<<sum<<endl;
			else cout<<sum-a[i];
			return 0;
		}
	}
	cout<<sum<<endl;
	return 0;
}