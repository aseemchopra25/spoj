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
int main()
{ int t,i,j;
	long long int x,y,s,d,a,n;
	fastRead_int(&t);
	for(i=0;i<t;i++)
    { 	fastRead_lint(&x);
        fastRead_lint(&y);
        fastRead_lint(&s);
        n=2*s;
        n/=x+y;
        writeInt(n);
        pc('\n');
        
        a=2*(y-x);
        a/=n-5;
        a=x-a;
        d=y-x;
        d/=n-5;
        for(j=1;j<=n;j++)
        {  writeInt(a+(j-1)*d);
            pc(' ');
        }
        pc('\n');
    }
    return 0;
}