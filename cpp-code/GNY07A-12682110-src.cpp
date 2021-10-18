#include<cstdio>
#include<cstring>
#include<string>
#include<iostream>
using namespace std;
int main()
{
    int t,n;
    string s;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%d",&n);
        cin>>s;
        s.erase(n-1,1);
        cout<<i<<" "<<s<<endl;
    }
    return 0;
}