#include<cstdio>
#include<map>
#include<iomanip>
using namespace std;
long long int a[500001];

long long int solve( int x)
{
    if(a[x]!=0)
        return a[x];
    else
    {
        map<long long int,long long int>m;
    
    a[0]=0;
    m[0]=1;
    for(int i=1;i<=x;i++)
    {
        if(a[i-1]-i>0 && m.count(a[i-1]-i)==0)
         a[i]=a[i-1]-i;
        else
        a[i]=a[i-1]+i;
        
        m[a[i]]=1;
    }
    return a[x];
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t!=-1)
    {
        printf("%lld\n",solve(t));
        
        scanf("%d",&t);
        
    }
    return 0;
}
