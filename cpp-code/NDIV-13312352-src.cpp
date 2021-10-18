#include<cstdio>
#include<cmath>
using namespace std;
#define pc(x) putchar_unlocked(x);
inline void writeInt (int n)
{
    int N = n, rev, count = 0;
    rev = N;
    if (N == 0) { pc('0'); pc('\n'); return ;}
    while ((rev % 10) == 0) { count++; rev /= 10;} //obtain the count of the number of 0s
    rev = 0;
    while (N != 0) { rev = (rev<<3) + (rev<<1) + N % 10; N /= 10;}  //store reverse of N in rev
    while (rev != 0) { pc(rev % 10 + '0'); rev /= 10;}
    while (count--) pc('0');
    pc('\n');
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
    fastRead_int(&a);
    fastRead_int(&b);
    fastRead_int(&n);
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
    writeInt(tot);
    
    return 0;
    
}