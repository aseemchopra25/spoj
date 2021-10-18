#include<cstdio>
using namespace std;
int max(int a,int b)
{return (a>b)?a:b;}

int knapsack(int s,int size[],int value[], int n)
{
    int weight,it;
    int knap[n+1][s+1];
    for(it=0;it<=n;it++)
    {
        for(weight=0;weight<=s;weight++)
        {if(it==0 || weight==0)
            knap[it][weight]=0;
    
            else if(size[it-1]<=weight)
                knap[it][weight]= max(value[it-1] +knap[it-1][weight-size[it-1]],knap[it-1][weight]);
            
            else
                knap[it][weight]=knap[it-1][weight];
        }
    }
    return knap[n][s];
}




int main()
{
    int size[2002], value[2002];
    int s,n;
    scanf("%d %d",&s,&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&size[i],&value[i]);
        
    }
    printf("%d\n",knapsack(s,size,value,n));
    
}