#include<cstdio>
#include<algorithm>
using namespace std;
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
int a[20000001];
int main()
{
    int i;
    a[1]=0;
    for(i=2;i<=20000000;i++)
    {
        a[i]=a[i-1]+1;
        if((i&1)==0)a[i]=min(1+a[i>>1],a[i]);
        if(i%3==0)a[i]=min(1+a[i/3],a[i]);
        
        
    }
    int t,n;
    fastRead_int(&t);
    for(i=1;i<=t;i++)
    {
        fastRead_int(&n);
        pc('C');pc('a');pc('s');pc('e');pc(' ');writeInt(i);pc(':');pc(' ');writeInt(a[n]);pc('\n');
    }
    return 0;
}