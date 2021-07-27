#include<cstdio>
#include<algorithm>
#include<cstring>
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
int a[10001];
int main()
{
    int t,i,n,x,y,j,k;
    fastRead_int(&t);
    for(i=0;i<t;i++)
    {
        
        memset(a,0,sizeof(a));
        fastRead_int(&n);
        for(j=0;j<n;j++)
        {
            fastRead_int(&x);
            fastRead_int(&y);
            for(k=x;k<=y;k++)
                a[k]++;
        }
        sort(a,a+10001);
        writeInt(a[10000]);
        pc('\n');
    }
    return 0;
}