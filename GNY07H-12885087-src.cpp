#include<cstdio>
using namespace std;
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
int main(){
    int dp[1001];
    dp[0]=dp[1]=1;
    dp[2]=5;
    dp[3]=11;
    int i;
    for(i=4;i<=1000;++i){
        dp[i]=dp[i-1]+5*dp[i-2]+dp[i-3]-dp[i-4];
        
    }
    int n,t;
    fastRead_int(&t);
    for(i=1;i<=t;i++){
        fastRead_int(&n);
        writeInt(i);pc(' ');writeInt(dp[n]);pc('\n');
    }
    return 0;
    
}