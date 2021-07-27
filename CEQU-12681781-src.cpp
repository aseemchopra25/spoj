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
int gcd( int a, int b)
{
    int temp;
    if(a<b)
    {
        temp=a;
        a=b;
        b=temp;
    }
    if(b==0)
        return a;
    else
    {
        while(b!=0)
        {
            temp=b;
            b=a%b;
            a=temp;
        }
    }
    return a;
}
int main()
{
    int t,a,b,c;
    fastRead_int(&t);
    for(int i=0;i<t;i++)
    {
        fastRead_int(&a);
        fastRead_int(&b);
        fastRead_int(&c);
        if(c%gcd(a,b)==0)
        {
            printf("Case ");
            printf("%d",i+1);
            puts(": Yes");
            
        }
        else
        {
            printf("Case ");
            printf("%d",i+1);
            puts(": No");
            
        }
    }
    return 0;
}