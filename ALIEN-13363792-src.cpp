#include<stdio.h>
#include<stdlib.h>
#define min(X, Y) (((X) < (Y)) ? (X) : (Y))
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
int a[100006];
int main()
{
    int t,n,m,i,p,q,ans1,ans2,s;//s--curr people ans1--people ans2---stations
    fastRead_int(&t);
    while(t--)
    {
        fastRead_int(&n);
        fastRead_int(&m);
        for(i=1;i<=n;i++)
            fastRead_int(&a[i]);
        ans1=1000000000;
        ans2=0;
        p=1;
        q=1;
        s=a[1];
        while(q<=n && p<n)
        {
            if(s<=m)
            {
                if(q-p+1>ans2)
                {
                    ans2=q-p+1;
                    ans1=s;
                }
                else
                    if(q-p+1==ans2)
                        ans1=min(ans1,s);
            }
            if(s<m)
            {
                q++;
                s+=a[q];
            }
            else
            {
                p++;
                s-=a[p-1];
            }
        }
        writeInt(ans1);pc(' ');writeInt(ans2);pc('\n');
        
    }
    return 0;
    
}