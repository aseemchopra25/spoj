#include<iostream>
#include<cmath>
using namespace std;


int num( int n)
{
    if(n==3)
        return 3;
    else if( n==4)
        return 3;
    else if(n==5)
        return 4;
    else
    {
        return 1+num(ceil((float)n/2.0));
        
    }
}






int main()
{
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        cout<<num(n)<<endl;
        
    }
    return 0;
    
}