#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{ int n,a[10001],sum=0,count,k;
    scanf("%d",&n);
    while(n!=-1)
    {   sum=0;
        count=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);;
            
            sum+=a[i];
        }
        sort(a,a+n);
        k=sum/n;
        if(sum%n!=0)
            printf("-1\n");
        else
        {
            for(int i=0;i<n;i++)
            {
                while(a[i]>k)
                {
                    count++;
                    a[i]--;
                    
                }
            }
            printf("%d\n",count);
            
        }
        
        scanf("%d",&n);
        
    }
    return 0;
}