#include<cstdio>
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
inline int split(int n)
{   int sum=0;
    while(n)
    {
        sum+=(n%10)*(n%10);
        n/=10;
    }
    return sum;
}

int main()
{
    int n,temp,count=0,hit=1,a[1000]={0};
    fastRead_int(&n);
    while(1)
    {
        temp=split(n);
        if(a[temp]==0)
        {
            n=temp;
            a[temp]=1;
            count++;
        }
        else
        {
            hit=0;
            break;
        }
        if(n==1)
            break;
        
    }
    if(hit)
    {
        writeInt(count);
        pc('\n');
    }
    else
        puts("-1");
    return 0;
    
    
}