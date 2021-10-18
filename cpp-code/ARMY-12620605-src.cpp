#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t,ng,nm,max1=0,max2=0,g,m;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {   max1=0;
        max2=0;
        scanf("%d %d",&ng,&nm);
        
        for(int j=0;j<ng;j++)
        {
            scanf("%d",&g);
            max1=max(max1,g);
          
            
        }
        for(int j=0;j<nm;j++)
        {
            scanf("%d",&m);
            max2=max(max2,m);
            
            
        }
            if(max1>=max2)
            printf("Godzilla\n");
        else
            printf("MechaGodzilla\n");
    }
    return 0;
}