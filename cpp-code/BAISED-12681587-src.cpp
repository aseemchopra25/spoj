#include<cstdio>
#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
#include<cstring>
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
int main()
{
    long long int t,n,sum;
    char s[500];
    scanf("%lld",&t);
    for(long long int i=0;i<t;i++)
    {
        sum=0;
        fastRead_int(&n);
        long long int a[n+1];
        memset(a,0,sizeof(a));
        for(long long int j=1;j<=n;j++)
        {
            scanf("%s",s);
            fastRead_int(&a[j]);
            
        }
        sort(a,a+n+1);
        for(long long int k=1;k<=n;k++)
            sum+=abs(a[k]-k);
        writeInt(sum);
        printf("\n");
    }
    return 0;
}