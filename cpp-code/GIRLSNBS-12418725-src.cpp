#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int b,g,sum,x,y,p,left;
    cin>>b>>g;
    while(b!=-1 && g!=-1)
    {
        sum=b+g;
        x=max(b,g);
        y=sum-x;
        
        if(y==0)
            cout<<x<<endl;
        else if(x==y)
            cout<<1<<endl;
        else{ p=x/(y+1);
            left=x-p*(y+1);
            if(left==0)
                cout<<p<<endl;
            else
                cout<<p+1<<endl;
        }
        
        cin>>b>>g;
        }
    return 0;
}

        
        
