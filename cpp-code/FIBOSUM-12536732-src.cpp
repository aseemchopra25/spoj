#include<cstdio>
using namespace std;
void multiply(long long int f[2][2], long long int m[2][2]);
void power(long long int f[2][2], long long int n);

long long int fib( long long int n)
{
    long long int f[2][2]={{1,1},{1,0}};
    if(n==0)
        return 0;
    power(f,n-1);
    return f[0][0]%1000000007;
}

void multiply(long long int f[2][2], long long int m[2][2])
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
void power( long long int f[2][2], long long int n)
{
    if(n==0 || n==1)
        return;
    long long int m[2][2]={{1,1},{1,0}};
    power(f,n/2);
    multiply(f,f);
    if(n%2!=0)
        multiply(f,m);
}
int main()
{
    int t;
    long long int n,m;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%lld %lld",&n,&m);
        printf("%lld\n",(fib(m+2)-fib(n+1)+1000000007)%1000000007);
    }
    return 0;
}