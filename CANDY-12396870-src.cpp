#include<iostream>
#include<algorithm>
using namespace std;
int main()
{ int n,a[10001],sum=0,count,k;
    cin>>n;
    while(n!=-1)
    {   sum=0;
        count=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];

            sum+=a[i];
        }
        sort(a,a+n);
        k=sum/n;
        if(sum%n!=0)
            cout<<-1<<endl;
        else
        {
            for(int i=0;i<n;i++)
            {
                while(a[i]>k)
                {
                    count++;
                    a[i]--;
                    
                }
            }
            cout<<count<<endl;
            
        }
        
        cin>>n;
        
    }
    return 0;
}