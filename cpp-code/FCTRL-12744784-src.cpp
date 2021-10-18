#include<cstdio>
#include<cmath>
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
#define pc(x) putchar_unlocked(x);
inline int powers(int n,int x)
{
    int mul=1;
    
    while(x>0)
    {
        if(x%2==1)mul=((mul)*n);
        n=((n)*n);
        x/=2;
    }
    return mul;
}
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
int main()
{
    int n,i,x,j,sum;
    fastRead_int(&n);
    for(i=0;i<n;i++)
    { fastRead_int(&x);
        j=1;
        sum=0;
        while(x/powers(5,j)>=1)
        { sum=sum+(x/powers(5,j));
            j++;
        }
        writeInt(sum);
        pc('\n');
        
    }
    return 0;
}
