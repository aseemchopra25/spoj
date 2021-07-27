#include<cstdio>
#include<cmath>
#define max 1000001
using namespace std;
long long int a[max];
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
#define pc(x) putchar_unlocked(x);
inline void writeInt (long long int n)
{
    long long int N = n, rev, count = 0;
    rev = N;
    if (N == 0) { pc('0'); pc('\n'); return ;}
    while ((rev % 10) == 0) { count++; rev /= 10;} //obtain the count of the number of 0s
    rev = 0;
    while (N != 0) { rev = (rev<<3) + (rev<<1) + N % 10; N /= 10;}  //store reverse of N in rev
    while (rev != 0) { pc(rev % 10 + '0'); rev /= 10;}
    while (count--) pc('0');
    pc('\n');
}

inline void pre()
{
    
    for(int i=2;i<=500000;i++)
        for(int j=i<<1;j<max;j+=i)
            a[j]+=i;
    for(int i=2;i<max;i++)
        a[i]+=a[i-1]+1;
    
    
    
    
    
    
    
}
int main()
{
    pre();
    int t,n;
    fastRead_int(&t);
    while(t--)
    {
        fastRead_int(&n);
        writeInt(a[n]);
    }
    return 0;
}