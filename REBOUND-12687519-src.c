#include<stdio.h>
#include<math.h>
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
    long long int t,i;
    fastRead_int(&t);
    double q;
    long long int x,y,z;
    long long int ans;
    for(i=0;i<t;i++)
    {
        fastRead_int(&x);
        fastRead_int(&y);
        fastRead_int(&z);
        q=z*(x<<1)+z*sqrt(x*(x<<2)+((2*z+y)<<2)*(y));
        q=q/(((z<<1)+y)<<1);
        if(q==floor(q))
        {
            ans=floor(q);
            writeInt(ans);
            pc('\n');
        }
        else
            puts("Not this time.");
        
    }
    return 0;
}