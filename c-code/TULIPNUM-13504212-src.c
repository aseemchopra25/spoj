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

int a[100001];
int main()
{
    int t,n,q,x,y,k,j,i;
    int prev,curr;
    fastRead_int(&t);
    for(i=0;i<t;i++)
    {
        fastRead_int(&n);
        fastRead_int(&q);
        a[0]=0;
        a[1]=1;
        fastRead_int(&prev);
        for(j=2;j<=n;j++)
        {
            fastRead_int(&curr);
            a[j]=a[j-1];
            if(curr!=prev)
                a[j]++;
            
            prev=curr;
            
            
        }
        printf("Case %d:\n",i+1);
        for(k=0;k<q;k++)
        {
            fastRead_int(&x);
            fastRead_int(&y);
            while(a[x]==a[x-1] && x>=0)
                x--;
            writeInt(a[y]-a[x-1]);
            pc('\n');
            
        }
    }
    return 0;
}