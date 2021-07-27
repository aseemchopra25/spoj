#include<cstdio>
#include<cstring>
using namespace std;
int a[10001];
int temp[10001];
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
    if (N == 0) { pc('0'); pc('\n'); return ;}
    while ((rev % 10) == 0) { count++; rev /= 10;} //obtain the count of the number of 0s
    rev = 0;
    while (N != 0) { rev = (rev<<3) + (rev<<1) + N % 10; N /= 10;}  //store reverse of N in rev
    while (rev != 0) { pc(rev % 10 + '0'); rev /= 10;}
    while (count--) pc('0');
}
int main()
{
    int t,i,n,u,q,l,r,val,j,k;
    fastRead_int(&t);
    for(i=0;i<t;i++)
    {
        k=0;
        memset(a,0,sizeof(a));
        memset(temp,0,sizeof(temp));
        fastRead_int(&n);
        fastRead_int(&u);
        for(j=0;j<u;j++)
        {
            fastRead_int(&l);
            fastRead_int(&r);
            fastRead_int(&val);
            temp[l]+=val;
            temp[r+1]-=val;
        }
        for(j=0;j<n;j++)
        {
            k+=temp[j];
            a[j]=k;
        }
        fastRead_int(&q);
        for(j=0;j<q;j++)
        {
            fastRead_int(&val);
            writeInt(a[val]);
            pc('\n');
        }
    }
    return 0;
}