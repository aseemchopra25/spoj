#include<stdio.h>

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
int main()
{
    int t,i,j;
    scanf("%d",&t);
    int a[t][t];
    for(i=0;i<t;i++)
        for(j=0;j<t;j++)
            fastRead_int(&a[i][j]);
    int series[t];
    if(t==2)
    {
        writeInt(a[0][1]/2);
        pc(' ');
        writeInt(a[0][1]/2);
    }
    else
    {
    series[1]=(a[0][1]-a[0][2]+a[1][2])/2;
    series[0]=a[0][1]-series[1];
    for(i=2;i<t;i++)
        series[i]=a[0][i]-series[0];
    for(i=0;i<t;i++)
    {
        writeInt(series[i]);
        pc(' ');
    }
    }
    return 0;
    
}