#include<cmath>
#include<cstdio>
using namespace std;
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
int main()
{
    int n,i;
    fastRead_int(&n);
    double r,ans;
    for(i=0;i<n;i++)
    {
        scanf("%lf",&r);
        ans=(4*r*r)+0.25;
        
        pc('C');pc('a');pc('s');pc('e');pc(' ');
        writeInt(i+1);pc(':');pc(' ');
        printf("%0.2f\n",ans);
        
    }
    return 0;
}