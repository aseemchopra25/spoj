#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int t,n,m,beg,end,count;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        count=0;
        scanf("%d %d",&n,&m);
        int a[n];
        for(int j=0;j<n;j++)
            scanf("%d",&a[j]);
        beg=0;end=n-1;
        sort(a,a+n);
        while(beg<end)
        {
            if(a[beg]+a[end]==m)
            {
                count++;
                beg++;
                end--;
            }
            else if(a[beg]+a[end]<m)
            {
                beg++;
            }
            else
            {
                end--;
            }
                
        }
        printf("%d\n",count);
    }
    return 0;
}