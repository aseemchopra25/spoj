#include<cstdio>
using namespace std;
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
inline long long int gcd(long long int n,long long int m)
{
    long long int temp;
    if (n<m)
    {
        temp=n;
        n=m;
        m=temp;
    }
    if(m==0)
        return n;
    else
    {
        while(m!=0)
        {
            temp=m;
            m=n%m;
            n=temp;
        }
    }
    return n;
}


int main()
{ long long int n,m;
    int t,i;
    
    fastRead_int(&t);
    
    for(i=0;i<t;i++)
    {
        fastRead_longint(&n);
        m=n/2;
        for(long long int j=m;j>=1;j--)
        {
            if(gcd(n,j)==1)
            {
                writeInt(j);
                pc('\n');
                break;
            }
        }
        
    }
    return 0;
}