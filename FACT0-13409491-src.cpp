#include<cstdio>
#include<cmath>
using namespace std;
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
#define LL long long int
inline void fastRead_int(LL *a)
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
    long long int n;
    int temp;
    int count=0;
    fastRead_int(&n);
    while(n!=0)
    {
        count=0;
        while(!(n&1))
        {
            count++;
            n>>=1;
        }
        if(count)
        {
            pc('2');pc('^');writeInt(count);pc(' ');
            
            
        }
        temp=sqrt(n);
        for(int i=3;i<=temp;i+=2)
        {
            count=0;
            while(n%i==0)
            {
                count++;
                n=n/i;
            }
            if(count>0)
            {
                writeInt(i);pc('^');writeInt(count);pc(' ');
                
                
            }
        }
        if(n>2)
            printf("%lld^1 ",n);
        pc('\n');
        
        fastRead_int(&n);
    }
    return 0;
}