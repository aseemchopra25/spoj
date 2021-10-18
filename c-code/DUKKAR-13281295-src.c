#include<stdio.h>
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
inline void fastRead_llint(long long int *a)
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
    pc('\n');
}
int main()
{
    int t,p;
    long long int n,ans,temp1,temp2; //temp1 is indivisual product and temp2 is value of n
    fastRead_int(&t);
    while(t--)
    {
        ans=1;
        fastRead_llint(&n);
        fastRead_int(&p);
        temp2=n;
        while(temp2!=0)
        {
            temp1=temp2%p;
            temp2=temp2/p;
            ans=ans*(temp1+1);
        }
        writeInt(n+1-ans);
        
    }
    return 0;
}