#include<cstdio>
#define LL long long int
#define pc(x) putchar_unlocked(x);
inline void writeInt (LL n)
{
    LL N = n, rev;int count = 0;
    rev = N;
    if (N == 0) { pc('0'); return ;}
    while ((rev % 10) == 0) { count++; rev /= 10;} //obtain the count of the number of 0s
    rev = 0;
    while (N != 0) { rev = (rev<<3) + (rev<<1) + N % 10; N /= 10;}  //store reverse of N in rev
    while (rev != 0) { pc(rev % 10 + '0'); rev /= 10;}
    while (count--) pc('0');
}
inline LL gcd(LL a, LL b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
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
    LL t,n,sq,num,d,div;
    fastRead_int(&t);
    while(t--)
    {
        fastRead_int(&n);
        sq=n*n;
        if(n&1)
            num=(3*sq+1)>>1;
        else
            num=(3*sq)>>1;
        d=6*n*sq;
        div=gcd(num,d);
        num/=div;
        d/=div;
        
        writeInt(num);pc('/');writeInt(d);pc('\n');
        
            
    }
    return 0;
}