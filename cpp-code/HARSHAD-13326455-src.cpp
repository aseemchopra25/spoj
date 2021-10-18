#include<cstdio>
#include<cmath>
#include<cstring>
#define max 1000001
using namespace std;
bool devy[max+100];
int tot[max];
bool a[max];
inline void mark(int i)
{
    for(int j=2*i;j<=max;j+=i)
        a[j]=1;
}
inline void sieve()
{
    a[1]=1;
    mark(2);
    int lim=sqrt(max);
    for(int i=3;i<=lim;i+=2)
        if(a[i]==0)
            mark(i);
}
inline void pre()
{
    
    int i,temp,sum;
    for(i=1;i<max;i++)
    {
        sum=i;
        temp=i;
        while(temp!=0)
        {
            sum+=(temp%10);
            temp/=10;
        }
        devy[sum]=1;
        if(devy[i]==0 && a[i]==0)
            tot[i]=tot[i-1]+1;
        else
            tot[i]=tot[i-1];
        
        
        
    }
    
    
}
int main()
{
    memset(a,0,sizeof(a));
    memset(tot,0,sizeof(tot));
    memset(devy,0,sizeof(devy));
    
    
    sieve();
    pre();
    int q,x,y;
    scanf("%d",&q);
    while(q--)
    {
        scanf("%d%d",&x,&y);
        if(x==0)x++;
        printf("%d\n",tot[y]-tot[x-1]);
        
    }
    return 0;
}