#include<cstdio>
using namespace std;
int main()
{
    int t,n,a[900001];
    long long int sum=0;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        sum=0;
        scanf("%d",&n);
        
        
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
            sum+=a[j];
        }
        
        if(sum%n==0)
            printf("%d\n",n);
        else
            printf("%d\n",n-1);
        
    }
    return 0;
}
