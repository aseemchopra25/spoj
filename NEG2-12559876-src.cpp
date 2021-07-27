#include<cstdio>
#include<vector>
#include<cmath>
#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    vector<int>v;
    double t;
    scanf("%lf",&t);
    if(t==0)
        printf("0\n");
    while(t!=0)
    {
        int x=(int)t%(-2);
        v.push_back(abs(x));
        t=(int)ceil(t/(-2));
        
        
    }
    
    for(unsigned long i=v.size()-1;i<v.size();--i)
        cout<<v[i];
    return 0;
}