#include<iostream>
using namespace std;
int main()
{ int n,x,y;
	cin>>n;
	for(int i=0;i<n;i++)
	{ cin>>x>>y;
		if(y==x)
		{if(x%2==0)
			cout<<2*x<<endl;
        else
            cout<<2*x-1<<endl;
		}
		else if(y==x-2)
		{if(x%2==0)
			cout<<x+y<<endl;
        else
            cout<<x+y-1<<endl;
		}
		else
			cout<<"No Number"<<endl;
        
    }
    return 0;
}
