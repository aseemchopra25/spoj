#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main()
{ int n,length,count1,count2,i,x;
    string s;
    cin>>n;
    while(n!=0)
    {   count1=2*n-1;
        count2=1;
        cin>>s;
        length=(int)(s.length());
        length=length-1;
        for(i=0;i<n;i++)
        {   x=i;
            cout<<s.at(x);
            while(true)
            {   x+=count1;
                if(x<=length)
                cout<<s.at(x);
                else break;
                x+=count2;
                if(x<=length)
                cout<<s.at(x);
                else break;
            }
            
            count1-=2;
            count2+=2;
        
        }
        cout<<endl;
        
        cin>>n;
    }
    return 0;
}