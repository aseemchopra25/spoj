#include<iostream>
using namespace std;
int main()
{
    long long int t,n,x;
    cin>>t;
    for(long long int i=0;i<t;i++)
    {
        cin>>n;
        long long int sum=0;
        for(long long int j=0;j<n;j++)
        {
            cin>>x;
            sum+=x;
            if(sum>=n)
                sum=sum%n;
            
        }
        if(sum==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
    
}