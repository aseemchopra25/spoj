#include<cstdio>
#include<cmath>
using namespace std;


#define MAX 32000
bool a[MAX+1];
int primes[3433];
inline void mark(int i)
{
    for(int j=2*i;j<=MAX;j+=i)
        a[j]=1;
}
inline void sieve()
{
    mark(2);
    primes[0]=2;
    int count=1;
    
    for(int i=3;i<=MAX;i+=2)
    {
        if(a[i]==0)
        {
            mark(i);
           
            primes[count]=i;
            count++;
            
        }
    }
    
    
}
int main()
{
    sieve();
    int a,b,n,temp,count=0,ans,tot=0;
    scanf("%d%d%d",&a,&b,&n);
    for(int i=a;i<=b;i++)
    {
        
        temp=i;
        ans=1;
        count=0;
        for(int j=0;primes[j]*primes[j]<=temp && ans<=n;j++)
        {
            count=0;
            while(temp%primes[j]==0)
            {
                count++;
                temp/=primes[j];
            }
            ans*=count+1;
            
        }
        if(temp>1)ans*=2;
        if(ans==n)tot++;
        
            
        
    }
    printf("%d\n",tot);
    
    return 0;
    
}