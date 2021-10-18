#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cstring>
#include<map>
#include<algorithm>
#include<climits>
#define LL long long int
using namespace std;
int main()
{
    LL n;
    scanf("%lli",&n);
    LL a[n];
    
    for(int i=0;i<n;i++)
        scanf("%lli",&a[i]);
    sort(a,a+n);
    LL maxdiff=a[n-1]-a[0];
    LL mind=LLONG_MAX;
    
    LL d,current;
    LL maxnum,minnum=0;
    LL low,high;
    if(maxdiff==0)
        maxnum=(n*(n-1))>>1;
    else
    {
        low=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==a[0])
                low++;
            else
                break;
        }
        high=0;
        for(LL i=n-1;i>=0;i--)
        {
            if(a[i]==a[n-1])
                high++;
            else
                break;
        }
        maxnum=low*high;
        
    }
    for(int i=1;i<n;i++)
    {
        d=a[i]-a[i-1];
        if(d==mind)
            minnum++;
        else if(d<mind)
        {
            minnum=1;
            mind=d;
        }
        
    }
    if(mind==0)
    {
        minnum=0;
        current=1;
        for(int i=1;i<n;i++)
        {
            if(a[i]==a[i-1])
                current++;
            else
            {
                minnum+=(current*(current-1))>>1;
                current=1;
            }
                
        }
        minnum+=(current*(current-1))>>1;
        
    }
    printf("%lli %lli",minnum,maxnum);
    return 0;
        
}