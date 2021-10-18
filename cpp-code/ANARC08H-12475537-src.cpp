#include<iostream>
#include<cstdio>
using namespace std;
int main()
{ int i,ans,n,d;
    cin>>n>>d;
    while(n!=0 && d!=0)
    {
        ans=0;
        for(i=1;i<=n;i++)
        {
            ans=(ans+d)%i;
        }
        cout<<n<<" "<<d<<" "<<ans+1<<endl;
        cin>>n>>d;
    }
    return 0;
}