#include<iostream>
using namespace std;
int main()
{ long long int i,t,n,result;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        result=(n*(n+2)*(2*n+1)/8);
        cout<<result<<endl;
        
    }
    return 0;
}