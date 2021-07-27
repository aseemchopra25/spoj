#include<iostream>
#include<string>
#include<cstring>
#include<cctype>
using namespace std;
int main()
{
    string t;
    int n,i,j;
    getline(cin,t);
    char x,y;
    while(t.at(0)!='*')
    {
        n=(int)t.length();
        x=t.at(0);
        if((islower(x)))
            y=toupper(x);
        else
            y=tolower(x);
        i=0;
        while(i<n)
        {
            for(j=i;j<n && t.at(j)!=' ' ;j++);
            if(j<n)
            {if(x!=t.at(j+1) && y!=t.at(j+1))
            {
                cout<<"N"<<endl;
                goto c;
            }}
            i=j+1;
        }
        
        cout<<"Y"<<endl;
        
    c:
        getline(cin,t);
    }
}