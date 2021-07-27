#include<cstdio>
#include<map>
#include<cmath>
#include<ctime>
#include<iostream>
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
bool arr[1000001]={0};
map<long long int,int>m;

inline void mark(long long int i)
{
    long long int j=1;
    long long int k=i*i*i;
    while(j*k<=1000000)
    {
        arr[j*k]=1;
        j++;
    }
}
int main()
{
    m[1]=1;
    int index=2;
    for(long long int i=2;i<=1000000;i++)
    {
        if(arr[i]==0)
        {
            m[i]=index;
            index++;
            mark(i);
        }
    }
    
    int t,n;
    fastRead_int(&t);
    for(int i=1;i<=t;i++)
    {
        fastRead_int(&n);
        printf("Case %d: ",i);
        if(m.count(n)==0)
            puts("Not Cube Free");
        else
        {
            writeInt(m[n]);
            pc('\n');
        }
        
    }
    
    return 0;
}