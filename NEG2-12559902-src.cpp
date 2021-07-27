#include<cstdio>
#include<cmath>
#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int v[50];
    double t;
    scanf("%lf",&t);
    if(t==0)
        printf("0\n");
    int y=0;
    while(t!=0)
    {
        int x=(int)t%(-2);
        v[y]=(abs(x));
        t=(int)ceil(t/(-2));
        y++;
        
    }
    
    for(int i=y-1;i>=0;i--)
        cout<<v[i];
    return 0;
}