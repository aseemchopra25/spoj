#include<cstdio>
#include<algorithm>
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
inline void fastRead_int(long long int *a)
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
long long int a[300009];
int main()
{
    long long int n,m;
    fastRead_int(&n);
    fastRead_int(&m);
    for(long long int i=0;i<n;i++)
        fastRead_int(&a[i]);
    long long int p=0,q=0;
    long long int sum=a[0];
    long long int ans=0;
    while(q<=n-1)
    {
        if(sum<=m)
        {
            ans=max(sum,ans);
            q++;
            sum+=a[q];
        }
        else
        {
            p++;
            sum-=a[p-1];
        }
    }
    writeInt(ans);
    return 0;
}