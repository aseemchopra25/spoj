#include<cstdio>
#include<map>
#include<iomanip>
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
    
    int t,n,temp=0,tempx=0,flag=0;
    fastRead_int(&t);
    for(int i=0;i<t;i++)
    {   flag=0;
        map<int,int>data;
        fastRead_int(&n);
        for(int j=0;j<n;j++)
        {
            fastRead_int(&temp);
            if(data.count(1000+temp))
                data[1000+temp]++;
            else
                data[1000+temp]=1;
            
            if(data[1000+temp]>n/2)
            {flag=1;
                tempx=temp;
            }
        }
        if(flag)
        {
            pc('Y');
            pc('E');
            pc('S');
            pc(' ');
            writeInt(tempx);
            pc('\n');
        }
        
        else
            puts("NO");
        
    }
    return 0;
}