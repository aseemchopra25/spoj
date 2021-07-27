#include<iostream>
using namespace std;
int main()
{ int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {   int x,seg,sum=0,j,pos;
        cin>>x;
        for(j=1;sum<x;j++)
            sum=(j*(j+1))/2;
        seg=j-1;
        pos=x-((seg*(seg-1))/2);
        if(seg%2==0)
        cout<<"TERM "<<x<<" IS "<<pos<<"/"<<seg-pos+1<<endl;
        else
            cout<<"TERM "<<x<<" IS "<<seg-pos+1<<"/"<<pos<<endl;
        
    }
    
    
    return 0;
}