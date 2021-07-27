#include<cmath>
#include<string>
#include<iostream>
using namespace std;

int main()
{
    int a[10][4];
    for(int i=0;i<10;i++)
        for(int j=0;j<4;j++)
            a[i][j]=(int)pow(i,j+1)%10;
    string s;
    int t,x;
    char c;
    long long int y;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>s>>y;
        c=s.at(s.length()-1);
        x=c-'0';
        if(y==0 && x!=0)
            cout<<"1"<<endl;
        else if( y==0 && x==0)
            cout<<"0"<<endl;
        else
        {
            y=(y-1)%4;
            cout<<a[x][y]<<endl;
        }
    
    }
    return 0;
}