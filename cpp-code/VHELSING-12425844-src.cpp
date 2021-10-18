#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{
    int n;
    double r,ans;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>r;
        ans=(16-sqrt(128))*r*r*r;
        printf("%0.4f\n",ans);
        
    }
}