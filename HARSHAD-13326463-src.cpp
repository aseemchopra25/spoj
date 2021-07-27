#include<cstdio>
#include<cmath>
#include<cstring>
#define max 1000001
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
using namespace std;
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

    
    
    sieve();
    pre();
    int q,x,y;
    fastRead_int(&q);
    while(q--)
    {
        fastRead_int(&x);
        fastRead_int(&y);
        if(x==0)x++;
        writeInt(tot[y]-tot[x-1]);
        
        
    }
    return 0;
}