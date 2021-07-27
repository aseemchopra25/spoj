#include<cstdio>
#include<map>
#include<string>
#include<iostream>
using namespace std;
int main()
{
    map<string,string>a;
    map<string,string>b;
    int t,i,n,j;
    string x,y,ans;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        a.clear();
        b.clear();
        
        scanf("%d",&n);
        for(j=0;j<n-1;j++)
        {
            cin>>x>>y;
            a[x]=y;
            b[y]=x;
        
        }
        map<string,string>::iterator it;
        for(it=a.begin();it!=a.end();++it)
        {
            if(b.count(it->first)==0)
            {
                ans=it->first;
                break;
            }
        }
        printf("Scenario #%d:\n",i);
        for(j=0;j<n;j++)
        {
            cout<<ans<<endl;
            ans=a[ans];
        }
        cout<<endl;
    }
    return 0;
}