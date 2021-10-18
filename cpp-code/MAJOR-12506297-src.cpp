#include<cstdio>
#include<map>
#include<iomanip>
using namespace std;
int main()
{
    
    int t,n,temp=0,tempx=0,flag=0;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {   flag=0;
        map<int,int>data;
        scanf("%d",&n);
        for(int j=0;j<n;j++)
        {
            scanf("%d",&temp);
            if(data.count(1000+temp))
                data[1000+temp]++;
            else
                data[1000+temp]=1;
            
            if(data[1000+temp]>n/2)
                {flag=1;
                        tempx=temp;
                }
            }
        if(flag)
            printf("YES %d\n",tempx);
        else
        printf("NO\n");
    
    }
}