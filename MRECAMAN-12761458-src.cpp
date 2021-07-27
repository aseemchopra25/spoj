#include<cstdio>
#include<map>
#include<iomanip>
using namespace std;
#define pc(x) putchar_unlocked(x);
inline void writeInt (long long int n)
{
    long long int N = n, rev, count = 0;
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
long long int a[500001];

inline void solve()
{
    
        map<long long int,long long int>m;
        
        a[0]=0;
        m[0]=1;
        for(int i=1;i<=500000;i++)
        {
            if(a[i-1]-i>0 && m.count(a[i-1]-i)==0)
                a[i]=a[i-1]-i;
            else
                a[i]=a[i-1]+i;
            
            m[a[i]]=1;
        }
    

}
int main()
{
    solve();
    int t;
    fastRead_int(&t);
    while(t!=-1)
    {
        writeInt(a[t]);
        pc('\n');
        
        scanf("%d",&t);
        
    }
    return 0;
}