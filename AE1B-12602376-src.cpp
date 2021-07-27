#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int n,k,s,a[1001];
    scanf("%d %d %d",&n,&k,&s);
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int sum=0;
    int count=0;
    sort(a,a+n);
    for(int i=n-1;sum<k*s;i--)
    {
        sum+=a[i];
        count++;
    }
    printf("%d\n",count);
    return 0;
}