#include<iostream>
using namespace std;
int main()
{ int x;
    while(cin>>x)
    { if(x!=0)
        cout<<(x*(x+1)*(2*x+1))/6<<endl;
        else
            break;
    }
    return 0;
}
