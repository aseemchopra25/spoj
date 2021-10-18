#include<cstdio>
#include<cstring>
#include<ctime>
using namespace std;
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
int arr[1000001];
int x[1000001][11]={0};
inline void mark(int i)
{
    int j=2;
    while(j*i<=1000000)
    {
        arr[j*i]++;
        j++;
    }
}
inline void sieve()
{
    memset(arr,0,sizeof(arr));
    arr[1]=0;
    for(int i=2;i<=1000000;i++)
        {
            if(arr[i]==0)
            {
                arr[i]=1;
                mark(i);
            }
        }
}

int main()
{
    int i,j,val;
    sieve();
    for(i=1;i<=1000000;i++)
    {
        for(j=0;j<=10;j++)
        {
            x[i][j]=x[i-1][j];
        }
        val=arr[i];
        x[i][val]++;
        
        
    }
    int t,a,b,n;
    fastRead_int(&t);
    for(i=0;i<t;i++)
    {
    
        fastRead_int(&a);
        fastRead_int(&b);
        fastRead_int(&n);
        writeInt(x[b][n]-x[a-1][n]);
        pc('\n');
        
    }
    
    return 0;
}