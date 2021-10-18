#include<cstdio>
#include<cmath>
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
inline void fastRead_longint(long long int *a)
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
    int t,i,j,count;
    long long int n;
    int ans;
    fastRead_int(&t);
    for(i=0;i<t;i++)
    {
        ans=1;
        count=0;
        fastRead_longint(&n);
        while((n&1)==0)
        {
            count++;
            n>>=1;
        }
        ans=ans*(2*count+1);
        for(j=3;j<=sqrt(n) && n>1;j+=2)
        {
            count=0;
            while(n%j==0)
            {
                count++;
                n/=j;
            }
            ans=ans*(2*count+1);
        }
        if(n>2)
            ans=ans*3;
        writeInt(ans/2);
        pc('\n');
    }
    return 0;
}