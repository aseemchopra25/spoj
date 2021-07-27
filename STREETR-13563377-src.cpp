#include<cstdio>

#define pc(x) putchar_unlocked(x);
inline void writeInt (int n)
{
    int N = n, rev, count = 0;
    rev = N;
    if (N == 0) { pc('0');  return ;}
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
inline int gcd(int a,int b)
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
    int n,x[100000];
    fastRead_int(&n);
    for(int i=0;i<n;i++)
        fastRead_int(&x[i]);
    int temp=x[1]-x[0];
    for(int i=1;i<n-1;i++)
        temp=gcd(temp,x[i+1]-x[i]);
    int ans=0;
    for(int i=0;i<n-1;i++)
        ans+=(x[i+1]-x[i])/temp-1;
    
    writeInt(ans);
    pc('\n');
    return 0;
}