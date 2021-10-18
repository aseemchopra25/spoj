#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
    int t,n,count=0;
    scanf("%d",&t);
    for(int j=0;j<t;j++)
    {
        scanf("%d",&n);
        int a[n+1];
        bool b[n+1];
        memset(b,0,sizeof(b));
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        sort(a,a+n);
        count=0;
        for(int k=0;k<n;k++)
        {
            for(int l=k+1;l<n;l++)
            {
                if(b[k]==1)
                    break;
                else if(a[k]*2==a[l] && b[k]==0 && b[l]==0)
                {
                    count++;
                    b[k]=1;
                    b[l]=1;
                }
                
            
            }
        }
        printf("%d\n",count);
    
    }
    return 0;
}