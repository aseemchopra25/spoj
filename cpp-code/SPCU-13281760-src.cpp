#include<cstdio>
using namespace std;
int a[100000];
int main()
{
    int t,n,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=0;i<n;i++)
            if(a[i]>i)
                break;
        if(i==n)
            puts("YES");
        else
            puts("NO");
    }
    return 0;
}