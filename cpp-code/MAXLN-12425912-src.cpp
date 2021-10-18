#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double r,ans;
    for(int i=0;i<n;i++)
    {
        cin>>r;
        ans=(4*r*r)+0.25;
        printf("Case %d: %0.2f\n",i+1,ans);
    }
    return 0;
}