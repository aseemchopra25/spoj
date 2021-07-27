#include<iostream>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long int z[101],o[101],t[101],a[101];
    z[1]=1;
    o[1]=1;
    t[1]=1;
    a[1]=3;
    for(long long int i=2;i<=n;i++)
    {
        z[i]=o[i-1]+z[i-1];
        o[i]=o[i-1]+t[i-1]+z[i-1];
        t[i]=t[i-1]+o[i-1];
        a[i]=o[i]+t[i]+z[i];
    }
    cout<<a[n]<<endl;
    return 0;

}