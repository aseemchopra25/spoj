#include<cstdio>
#include<cmath>
#define LL long long int
using namespace std;
inline void fastRead_int(LL *a)
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
    if (N == 0) { pc('0');  return ;}
    while ((rev % 10) == 0) { count++; rev /= 10;} //obtain the count of the number of 0s
    rev = 0;
    while (N != 0) { rev = (rev<<3) + (rev<<1) + N % 10; N /= 10;}  //store reverse of N in rev
    while (rev != 0) { pc(rev % 10 + '0'); rev /= 10;}
    while (count--) pc('0');
}
int main()
{
    int t;
    long long int n;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        fastRead_int(&n);
        
        int ans=sqrt(n+1)-1;
        
        pc('C');pc('a');pc('s');pc('e');
        pc(' ');writeInt(i);pc(':');pc(' ');
        writeInt(ans);pc('\n');
        
    }
    return 0;
}