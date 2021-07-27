#include<cstdio>
#define MOD 1000000007
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
int main()
{
    int t,i,j;
    fastRead_int(&t);
    int a[t];
    int dp[t];
    long long int ans=1;
    for(i=0;i<t;i++)
        fastRead_int(&a[i]);
    dp[t-1]=1;
    for(i=t-2;i>=0;i--)
    {
        if(a[i]>=a[i+1])
        {
            for(j=i+1;j<t;j++)
            {
                if(dp[j]>a[i])
                {
                    dp[i]=dp[j];
                    break;
                }
                else
                    dp[i]=1;
                
            }
        }
        else
        {
            dp[i]=a[i+1];
        }
        
        
    }
    for(i=0;i<t;i++)
        ans=((ans%MOD)*((dp[i])%MOD))%MOD;
    writeInt(ans);
    return 0;
    
}
