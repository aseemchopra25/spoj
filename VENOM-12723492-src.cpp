#include<cstdio>
#include<cmath>
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
#define LL long long
int main()
{
    int t,h,p,a;
    LL result;
    double y,z,d;
    fastRead_int(&t);
    while(t--)
    {
        
        fastRead_int(&h);
        fastRead_int(&p);
        fastRead_int(&a);
        if(h<=p)
        {
            puts("1");
            continue;
        }
        result=0;
        y=p-2*a;
        z=2*(a-h);
        d=sqrt(y*y-4*p*z);
        result=ceil((-1*y+d)/(2*p));
        result=2*result-1;
        writeInt(result);
        pc('\n');
        
        
    }
    return 0;
}