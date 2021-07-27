#include<cstdio>
#include<algorithm>
#include<cstdlib>>
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
    int t,n,m,x,y,r1,r2,r3,r4,ans;
    fastRead_int(&t);
    while(t--)
    {
        fastRead_int(&n);
        fastRead_int(&m);
        fastRead_int(&x);
        fastRead_int(&y);
        r1=abs(x-1)+(y-1);
        r2=abs(x-1)+abs(y-m);
        r3=abs(x-n)+abs(y-1);
        r4=abs(x-n)+abs(y-m);
        ans=max(r1,max(r2,max(r3,r4)));
        writeInt(ans);
        pc('\n');
    }
    return 0;
}