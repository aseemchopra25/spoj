#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{ int n,need,f,num[10001],sum,count;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {   sum=0;
        count=0;
        scanf("%d %d",&need, &f);
        for(int j=0;j<f;j++)
            scanf("%d",&num[j]);
        sort(num,num+f);
        for(int k=0;sum<need && k<f;k++)
        { sum=sum+num[f-1-k];
            count++;
        }
        if(sum>=need)
            printf("Scenario #%d:\n%d\n\n",i+1,count);
        else
            printf("Scenario #%d:\nimpossible\n\n",i+1);
        
    }
    return 0;
}