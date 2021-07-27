#include<iostream>
#include<algorithm>
using namespace std;
int main()
{ int n,need,f,num[10001],sum,count;
    cin>>n;
    for(int i=0;i<n;i++)
    {   sum=0;
        count=0;
        cin>>need>>f;
        for(int j=0;j<f;j++)
            cin>>num[j];
        sort(num,num+f);
        for(int k=0;sum<need && k<f;k++)
        { sum=sum+num[f-1-k];
            count++;
        }
        if(sum>=need)
            cout<<"Scenario #"<<i+1<<":"<<endl<<count<<endl<<endl;
        else
            cout<<"Scenario #"<<i+1<<":"<<endl<<"impossible"<<endl<<endl;
        
    }
    return 0;
}
