#include<cstdio>
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
int main()
{
    long long int a[45];
    int t,x;
    a[0]=1;
    a[1]=2;
    int i;
    for(i=2;i<45;i++)
        a[i]=a[i-1]+a[i-2];
    fastRead_int(&t);
    for(i=0;i<t;i++)
    {
        fastRead_int(&x);
        writeInt(a[x]);
        pc('\n');
        
    }
    return 0;
}