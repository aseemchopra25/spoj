#include <cstdio>
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
int A[100000][11]={0};
void sqfree()
{
    int i,temp,k,j;
    A[0][0]=1;
    for(i=2;i<=316;i++)
    {
        if(A[i][10]==0)
        {
            k=i*i;
            for(j=k;j<=100000;j+=k)
                A[j][10]=1;
        }
    }
    
    for(i=1;i<=100000;i++)
    {
        if(A[i][10]==0)
        {
            temp=i;
            while(temp!=0)
            {
                A[i][temp%10]=1;
                temp/=10;
            }
            for(j=0;j<=9;j++)
            {
                A[i][j]+=A[i-1][j];
            }
        }
        else
            for(j=0;j<=9;j++)
                A[i][j]=A[i-1][j];
    }
}
int main()
{
    int t;
    sqfree();
    fastRead_int(&t);
    while(t--)
    {
        int low,high,digit;
        fastRead_int(&low);
        fastRead_int(&high);
        fastRead_int(&digit);
        writeInt(A[high][digit]-A[low-1][digit]);
        pc('\n');
    }
    return 0;
}
