#include<cstdio>
#include<algorithm>
using namespace std;
int a[20000];
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
    if (N == 0) { pc('0'); return ;}
    while ((rev % 10) == 0) { count++; rev /= 10;} //obtain the count of the number of 0s
    rev = 0;
    while (N != 0) { rev = (rev<<3) + (rev<<1) + N % 10; N /= 10;}  //store reverse of N in rev
    while (rev != 0) { pc(rev % 10 + '0'); rev /= 10;}
    while (count--) pc('0');
}
int main()
{
    int t,i,select,tot,j,m;
    fastRead_int(&t);
    for(i=0;i<t;i++)
    {
        m=1000000000;
        fastRead_int(&tot);
        fastRead_int(&select);
        for(j=0;j<tot;j++)
            fastRead_int(&a[j]);
        sort(a,a+tot);
        for(j=0;j<=tot-select;j++)
        {
            m=min(m,a[select+j-1]-a[j]);
        }
        writeInt(m);
        pc('\n');
    
    }
    return 0;
    
}