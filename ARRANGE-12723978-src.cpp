#include<cstdio>
#include<algorithm>
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
int main()
{
    int t,n;
    fastRead_int(&t);
    while(t--)
    {
        fastRead_int(&n);
        int a[n],count=0,c=0,num,j=0;
        for(int i=0;i<n;i++)
        {
            fastRead_int(&num);
            if(num==1)
                c++;
            else
            {
                a[j]=num;
                count++;
                j++;
                
            }
        }
        sort(a,a+count);
        for(int i=0;i<c;i++)
        {
            pc('1');
            pc(' ');
        }
        if(count==2 && a[0]==2 && a[1]==3)
        {
            pc('2');
            pc(' ');
            pc('3');
        }
        else
        {
            for(int i=count-1;i>=0;i--)
            {
                writeInt(a[i]);
                pc(' ');
            }
            
        }
        pc('\n');
        
    }
    return 0;
}