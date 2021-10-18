#include<cstdio>
#include<cmath>
using namespace std;
bool arr[1000001];
int primes[78498];
inline void mark(int i)
{
    int j=2;
    while(j*i<=1000000)
    {
        arr[j*i]=1;
        j++;
    }
}

inline void sieve()
{
    int count=0;
    primes[0]=2;
    count++;
    mark(2);
    for(int i=3;i<=1000000;i+=2)
    {
        if(arr[i]==0)
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
   int t;
    int count=0;
    long long int n,temp;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&n);
        temp=n;
        for(int i=0;primes[i]<=sqrt(n);i++)
        {
            
            count=0;
            while(temp%primes[i]==0 && (primes[i]&3)!=3)
            {
                temp/=primes[i];
            }
            while(temp%primes[i]==0 && (primes[i]&3)==3)
            {
                count++;
                temp/=primes[i];
            }
            if((count&1)==0)
                continue;
            else
            {
                printf("No\n");
                goto c;
            }
            
        }
        if((temp&3)==3)
            printf("No\n");
        else
            printf("Yes\n");
        
    c:
        continue;
    }
 
    return 0;
    
}