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
#define pc(x) putchar_unlocked(x);
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
    int x,a,b,t,h,arm;
    fastRead_int(&x);
    while(x--)
    {
        fastRead_int(&a);fastRead_int(&b);
        if(a==0 || b==0)
        {
            puts("0");
            continue;
        }
        t=1;
        h=a+3;
        arm=b+2;
        while(1)
        {
            if(h>5 && arm>10)
            {
                h-=2;
                arm-=8;
                t+=2;
            }
            else if(h>20 && arm<=10)
            {
                h-=17;
                arm+=7;
                t+=2;
            }
            else
            {
                writeInt(t);
                pc('\n');
                break;
            }
        }
        
    }
    return 0;
}