#include<cstdio>
using namespace std;

const long long int MODD=1000000007;
long long int a,b,c,ti,ans;
#define pc(x) putchar_unlocked(x);
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
inline void writeInt (long long int n)
{
    long long int N = n, rev, count = 0;
    rev = N;
    if (N == 0) { pc('0');  return ;}
    while ((rev % 10) == 0) { count++; rev /= 10;} //obtain the count of the number of 0s
    rev = 0;
    while (N != 0) { rev = (rev<<3) + (rev<<1) + N % 10; N /= 10;}  //store reverse of N in rev
    while (rev != 0) { pc(rev % 10 + '0'); rev /= 10;}
    while (count--) pc('0');
    pc('\n');
}
inline long long int powers(long long int n, long long int x,long long int MOD)
{
    long long int mul=1;
    if(n==0 && x==0)
        return 1;
    while(x>0)
    {
        if((x&1)==1)mul=((mul%MOD)*n%MOD)%MOD;
        n=((n%MOD)*n%MOD)%MOD;
        x>>=1;
    }
    return mul%MOD;
}
int main()
{
    while(true)
    {
        scanf("%lld",&a);
        fastRead_int(&b);
        fastRead_int(&c);
        
        if(a==-1)
            break;
        if(c==0)
            printf("%lld\n",a%MODD);
        else if(b==0)
            puts("1");
        else if(a%MODD==0)
            puts("0");
        else
        {
            ti=powers(b,c,MODD-1);
            ans=powers(a,ti,MODD);
            writeInt(ans);
        }
    }
    return 0;
}