#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int flag=1;
    int l=(int)(s.length());
    for(int i=0;i<l;i++)
    {
        if(s.at(i)!=s.at(l-1-i))
        {
            flag=0;
            break;
        }
        
    }
    if(flag)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}