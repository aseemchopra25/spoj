#include<cstdio>
using namespace std;
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
inline void fastRead_int(long long int *a)
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
inline void multiply(long long int f[2][2], long long int m[2][2])
{
    long long int x=(f[0][0]*m[0][0])%1000000007+(f[0][1]*m[1][0])%1000000007;
    long long int y=(f[0][0]*m[0][1])%1000000007+(f[0][1]*m[1][1])%1000000007;
    long long int z=(f[1][0]*m[0][0])%1000000007+(f[1][1]*m[1][0])%1000000007;
    long long int w=(f[1][0]*m[0][1])%1000000007+(f[1][1]*m[1][1])%1000000007;
    f[0][0]=(x)%1000000007;
    f[0][1]=(y)%1000000007;
    f[1][0]=(z)%1000000007;
    f[1][1]=(w)%1000000007;
}
inline void power( long long int f[2][2], long long int n)
{
    if(n==0 || n==1)
        return;
    long long int m[2][2]={{1,1},{1,0}};
    power(f,n/2);
    multiply(f,f);
    if((n&1)!=0)
        multiply(f,m);
}
inline long long int fib( long long int n)
{
    long long int f[2][2]={{1,1},{1,0}};
    if(n==0)
        return 0;
    power(f,n-1);
    return f[0][0]%1000000007;
}
int main()
{
    int t;
    long long int n,m;
    fastRead_int(&t);
    for(int i=0;i<t;i++)
    {
        fastRead_int(&n);
        fastRead_int(&m);
        writeInt((fib(m+2)-fib(n+1)+1000000007)%1000000007);
        pc('\n');
    }
    return 0;
}