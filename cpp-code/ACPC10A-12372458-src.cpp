#include<iostream>
using namespace std;
int main()
{
int a,b,c;
while(cin>>a>>b>>c)
{ if(a*a+b*b+c*c!=0)
    {if(c-b==b-a)
        cout<<"AP "<<c+b-a<<endl;
        else
            cout<<"GP "<<c*(b/a)<<endl;
    }
else break;
}
    return 0;
}
