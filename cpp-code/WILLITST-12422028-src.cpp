#include<iostream>
using namespace std;
int main()
{
    double n;
    cin>>n;
    while(n>1)
    {
        n=n/2;
    }
    if(n==1)
        cout<<"TAK"<<endl;
    else
        cout<<"NIE"<<endl;
    return 0;
}