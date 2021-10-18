#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
map<long long int,long long int>a;
long long int rec( long long int x)
{
    if(x==0)
        return 0;
    if(a[x]==0)
    {   long long int d=rec(x/2)+rec(x/3)+rec(x/4);
        a[x]= (x>d)?x:d;
    }
    return a[x];
}

int main()
{
    long long int x;
    while(cin>>x)
    cout<<rec(x)<<endl;
    return 0;
}