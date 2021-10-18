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
    pc('\n');
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
int  store[3500],l;
inline bool prime( int x)
{
     int i,last=sqrt(x);
    for(i=2;i<=last;i++)
    {
        if(!(x%i))
        {
            return 0;
        }
    }
    return 1;
}
void initiate()
{
    for( int i=2;i<32000;i++)
    {
        if(prime(i))
        {
            store[l++]=i;
        }
    }
}

inline bool func(  int x)
{
     int i,last=sqrt(x);
    for(i=0;i<l && store[i]<=last;i++)
    {
        if(!(x%store[i]))
            return 0;
    }
    return 1;
}



int main()
{
    int t;
    fastRead_int(&t);
    int a,b;
    initiate();
    while(t--)
    {
        fastRead_int(&a);
        fastRead_int(&b);
        if(a==1)
            a++;
        while(a<=b)
        {
            if(func(a))
            {
                writeInt(a);;
                
            }
            a++;
        }
        putchar_unlocked('\n');
    }
    return 0;
    
}