#include<cstdio>
#include<cmath>
using namespace std;
inline void fastRead_lint(long long int *a)
{
    register char c=0;
    while (c<33) c=getchar_unlocked();
    *a=0;
    while (c>33)
    {
        *a=*a*10+c-'0';
        c=getchar_unlocked();
    }
}
inline void fastRead_int(int *a)
{
    register char c=0;
    while (c<33) c=getchar_unlocked();
    *a=0;
    while (c>33)
    {
        *a=*a*10+c-'0';
        c=getchar_unlocked();
    }
}
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
    fastRead_int(&t);
    while(t--)
    {
        fastRead_lint(&n);
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
                puts("No");
                goto c;
            }
            
        }
        if((temp&3)==3)
            puts("No");
        else
            puts("Yes");
        
    c:
        continue;
    }
 
    return 0;
    
}