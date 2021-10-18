#include<cstdio>
#define LL long long int
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
    if (N == 0) { pc('0'); pc('\n'); return ;}
    while ((rev % 10) == 0) { count++; rev /= 10;} //obtain the count of the number of 0s
    rev = 0;
    while (N != 0) { rev = (rev<<3) + (rev<<1) + N % 10; N /= 10;}  //store reverse of N in rev
    while (rev != 0) { pc(rev % 10 + '0'); rev /= 10;}
    while (count--) pc('0');
}
int main()
{
    int n,i;
    fastRead_int(&n);
    int arr[n];
    LL sum[n],sumsq[n],s,sq,ans;
    for(i=0;i<n;i++)
        fastRead_int(&arr[i]);
    sum[0]=arr[0];
    sumsq[0]=arr[0]*arr[0];
    for(i=1;i<n;i++)
    {
        sum[i]=sum[i-1]+arr[i];
        sumsq[i]=sumsq[i-1]+(arr[i]*arr[i]);
    }
    int m,u,v;
    fastRead_int(&m);
    for(i=0;i<m;i++)
    {
        fastRead_int(&u);
        fastRead_int(&v);
        s=sum[v]-sum[u]+arr[u];
        sq=sumsq[v]-sumsq[u]+(arr[u]*arr[u]);
        ans=((s*s)+sq)/2;
        printf("%lld\n",ans);
    }
    return 0;
}