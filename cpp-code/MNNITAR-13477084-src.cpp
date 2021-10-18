#include<cstdio>
#include<cstring>
#define MOD 1000000007

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
#define ll long long int
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
inline void fastRead_lint(ll *a)
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
inline long long int powers(long long int n, long long int x)
{
    long long int mul=1;
    
    while(x>0)
    {
        if(x&1)mul=(mul*n)%MOD;
        n=(n*n)%MOD;
        x>>=1;
    }
    return mul;
}

inline ll expo(ll n, ll m)
{
    ll r[][2]={{1,0},{0,1}};
    ll fib[2][2]={{1,1},{1,0}};
    ll temp[2][2];
    while(n)
    {
        if(n&1)
        {
            memset(temp,0,sizeof(temp));
            for(int i=0;i<2;i++)
                for(int j=0;j<2;j++)
                    for(int k=0;k<2;k++)
                        temp[i][j]=(temp[i][j]+(r[i][k]*fib[k][j]))%m;
            for(int i=0;i<2;i++)
                for(int j=0;j<2;j++)
                    r[i][j]=temp[i][j];
        }
        memset(temp, 0,sizeof(temp));
        for(int i=0;i<2;i++)
            for(int j=0;j<2;j++)
                for(int k=0;k<2;k++)
                    temp[i][j]=(temp[i][j]+(fib[i][k]*fib[k][j]))%m;
        for(int i=0;i<2;i++)
            for(int j=0;j<2;j++)
                fib[i][j]=temp[i][j];
        n>>=1;
    }
    return r[0][0];
}
int main()
{
    ll n,ans;
    int t,fin;
    fastRead_int(&t);
    while(t--)
    {
        fastRead_lint(&n);
        if(n==0){puts("1");continue;}
        ans=powers(2, expo(n-1,MOD-1));
        fin=(int)ans;
        writeInt(fin);
    }
    return 0;

}
