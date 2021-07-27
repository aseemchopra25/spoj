#include<cstdio>
using namespace std;
int main()
{
    int t,pos[100001],arr[100001];
    scanf("%d",&t);
    while(t)
    {
        
        for(int i=1;i<=t;i++)
        {
            scanf("%d",&arr[i]);
            pos[arr[i]]=i;
            
        }
        int flag=1;
        for(int j=1;j<=t;j++)
        {
            if(pos[j]!=arr[j])
            {flag=0;
                break;
            }
        
        }
        if(flag)
            printf("ambiguous\n");
        else
            printf("not ambiguous\n");
        
        scanf("%d",&t);
    }
    return 0;
        
        
        
}