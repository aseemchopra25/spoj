#include<cstdio>
#include<cmath>
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
inline void fastRead_longint(long long int *a)
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
}
int main()
{
    int t,i;
    long long int n,x;
    fastRead_int(&t);
    for(i=1;i<=t;i++)
    {   scanf("%lld",&n);
        x=sqrt(n);
        if(x*x==n || (x-1)*(x-1)==n|| (x+1)*(x+1)==n)
            
        {
        printf("Case ");
        writeInt(i);
        puts(": Yes");
        }
        else
            
        {
        printf("Case ");
        writeInt(i);
        puts(": No");
        }
    }
    return 0;
}