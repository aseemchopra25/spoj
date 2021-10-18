#include<cstdio>
#include<algorithm>
#include<cstdlib>
#include<cmath>
#include<cstring>
#define LL long long int
using namespace std;
int a[10001];
#define pc(x) putchar_unlocked(x);
inline void writeInt (LL n)
{
    LL N = n, rev, count = 0;
    rev = N;
    if (N == 0) { pc('0'); pc('\n'); return ;}
    while ((rev % 10) == 0) { count++; rev /= 10;} //obtain the count of the number of 0s
    rev = 0;
    while (N != 0) { rev = (rev<<3) + (rev<<1) + N % 10; N /= 10;}  //store reverse of N in rev
    while (rev != 0) { pc(rev % 10 + '0'); rev /= 10;}
    while (count--) pc('0');
    pc('\n');
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
inline LL foo(LL mid,int n,int a[])
{
    LL total=0;
    for(int i=0;i<n;i++)
        total+=mid/a[i];
    return total;
}
inline LL bs(int a[],int n,int tot,LL m)
{
    LL mid,low=1,high=m,temp;
    while(low<high)
    {
        mid=(low+high)>>1;
        temp=foo(mid,n,a);
        if(temp<tot)
            low=mid+1;
        else
            high=mid;
        
    }
    return high;
}
int main()
{
    int t,n,tot;
    LL m;
    fastRead_int(&t);
    while(t--)
    {
        m=-1;
        fastRead_int(&n);
        fastRead_int(&tot);
        memset(a,0,sizeof(a));
        for(int i=0;i<n;i++)
        {
            fastRead_int(&a[i]);
            m=max(m,(LL)a[i]);
        }
        m*=tot;
        writeInt(bs(a,n,tot,m));
        
    }
}