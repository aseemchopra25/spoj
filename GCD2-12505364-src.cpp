#include<iostream>
#include<string>
using namespace std;

int gcd(int n,int m)
{
    int temp;
    if (n<m)
    {
        temp=n;
        n=m;
        m=temp;
    }
    if(m==0)
        return n;
    else
    {
        while(m!=0)
        {
            temp=m;
            m=n%m;
            n=temp;
        }
    }
    return n;
}







int main()
{
    int t,m,d=0;
    cin>>t;
    string b;
    int a,i,j,len,temp;
    for(i=0;i<t;i++)
    {
        cin>>a>>b;
        len=(int)b.length();
        m=b.at(0)-48;
        if(a==0)
        {
            cout<<b<<endl;
            continue;
        }
        for(j=1;j<len;j++)
        {
            d=m%a;
            temp=b.at(j)-48;
            m=10*d+temp;;
        }
        cout<<gcd(m%a,a)<<endl;
        
    }
    return 0;
}