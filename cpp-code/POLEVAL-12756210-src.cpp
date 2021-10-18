#include<cstdio>
using namespace std;
int main()
{
    int t,cases,val,temp,count=0;
    scanf("%d",&t);
    while(t!=-1)
    {
        count++;
        
        int a[t+1];
        long long int b[t+1];
        for(int i=t;i>=0;i--)
            scanf("%d",&a[i]);
        scanf("%d",&cases);
        printf("Case %d:\n",count);
        for(int i=0;i<cases;i++)
        {
            temp=t;
            scanf("%d",&val);
            b[temp]=a[temp];
            
            while(temp>0)
            {
                temp--;
                b[temp]=a[temp]+b[temp+1]*val;
            }
            printf("%lld\n",b[0]);
        }
        
        
        scanf("%d",&t);
    }
    return 0;
}