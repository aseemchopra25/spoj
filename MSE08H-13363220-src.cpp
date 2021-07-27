#include<cstdio>
#include<algorithm>
using namespace std;
#define LL long long int
int phi[1024],v[1024];
#define MOD 1000000007
#define pc(x) putchar_unlocked(x);
inline void writeInt (LL n)
{
    LL N = n, rev, count = 0;
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
int main()
{
   int n,i,j;
    LL ans;
    while(scanf("%d",&n)!=EOF)
    {
        ans=1;
        for(i=0;i<n;i++)fastRead_int(&v[i]);
        sort(v,v+n);
        for(i=0;i<n;i++)phi[i]=v[i];
        for(i=1;i<n;i++)
        {
            if(phi[i]==v[i])
                for(j=i;j<n;j++)
                    if(!(v[j]%v[i]))
                    {
                        phi[j]/=v[i];
                        phi[j]*=v[i]-1;
                    }
            ans=(ans*phi[i])%MOD;
        }
        writeInt(ans);
        pc('\n');
        
        
    }
    return 0;
}