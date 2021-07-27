#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t,ng,nm;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d %d",&ng,&nm);
        int g[ng];
        int m[nm];
        for(int j=0;j<ng;j++)
        {
            scanf("%d",&g[j]);
          
            
        }
        for(int j=0;j<nm;j++)
        {
            scanf("%d",&m[j]);
            
            
        }
        sort(g,g+ng);
        sort(m,m+nm);
        if(g[ng-1]>=m[nm-1])
            printf("Godzilla\n");
        else
            printf("MechaGodzilla\n");
    }
    return 0;
}