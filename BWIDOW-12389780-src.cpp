#include<iostream>
using namespace std;
int main()
{ int t,n,loc=0,s=0;
    unsigned long long int a[1001],b[1001],max=0;
    bool r=true;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        r=true;
        cin>>n;
        for(int j=0;j<n;j++)
        {
            cin>>a[j]>>b[j];
        }
        max=a[0];
        loc=0;
        for(s=0;s<n;s++)
        {if(a[s]>max)
        { max=a[s];
            loc=s;
        }
        }
        
        
        for(int k=0;k<n;k++)
        {  if(b[k]>max && loc!=k)
        {r=false;
            cout<<-1<<endl;
            break;
        }
        }
        
        if(r==true)
            cout<<loc+1<<endl;
       
        
    }
    return 0;
}
