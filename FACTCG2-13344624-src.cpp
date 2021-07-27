#include<cstdio>
#include<cmath>
using namespace std;
#define max 10000001
bool a[max];
int prime[664579];
#define pc(x) putchar_unlocked(x);
inline void writeInt (int n)
{
    int N = n, rev, count = 0;
    rev = N;
    if (N == 0) { pc('0'); return ;}
    while ((rev % 10) == 0) { count++; rev /= 10;} //obtain the count of the number of 0s
    rev = 0;
    while (N != 0) { rev = (rev<<3) + (rev<<1) + N % 10; N /= 10;}  //store reverse of N in rev
    while (rev != 0) { pc(rev % 10 + '0'); rev /= 10;}
    while (count--) pc('0');
}
inline void pre()
{
    a[0]=1;a[1]=1;
    prime[0]=2;
    for(int j=4;j<max;j+=2)
        a[j]=1;
    int count=1;
    int sq=sqrt(max-1);
    for(int i=3;i<=sq;i+=2)
        if(a[i]==0)
        {
            for(int j=i<<1;j<max;j+=i)
                a[j]=1;
            prime[count]=i;
            count++;
            
        }
   
}
int main()
{
    pre();
    int n,index;
    
    while(scanf("%d",&n)!=EOF)
    {
        
        index=0;
        if(n==1)
        {
            puts("1");
            continue;
        }
        if(a[n]==0)
        {
            
            pc('1');pc(' ');pc('x');pc(' ');writeInt(n);pc('\n');
            continue;
        }
        
        // 3137 tak sqrt lena hai
        pc('1');
       
        while((n&1)==0)
        {
            
            pc(' ');pc('x');pc(' '); pc('2');
            n>>=1;
        }
        for(int j=1;prime[j]<=sqrt(n);j++)
        {
            int i=prime[j];
            while(n%i==0)
            {
                
                pc(' ');pc('x');pc(' ');writeInt(i);
                n/=i;
            }
            if(a[n]==0)
            {
                
                pc(' ');pc('x');pc(' ');writeInt(n);pc('\n');
                goto c;
            }
        }
        if(n>2)
        {
            
            pc(' ');pc('x');pc(' ');writeInt(n);
        }
        pc('\n');
            
    c:
        continue;
        
        
    }
}