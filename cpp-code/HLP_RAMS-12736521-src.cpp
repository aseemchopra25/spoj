#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
#define pc(x) putchar_unlocked(x);
inline void writeInt (long long int n)
{
    long long int N = n, rev, count = 0;
    rev = N;
    if (N == 0) { pc('0'); return ;}
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
    int t;
    long long int n,count=0,odd,even,temp,i;
    fastRead_int(&t);
    for(i=0;i<t;i++)
    {   count=0;
        fastRead_longint(&n);
        temp=n;
        while(n!=0)
        {
            if(n%2==1)
                count++;
            n>>=1;
        }
        odd= pow(2,count);
        even=temp+1-odd;
        writeInt(even);pc(' ');writeInt(odd);pc('\n');
    }
    return 0;
}