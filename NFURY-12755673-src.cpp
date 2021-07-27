#include<cstdio>
#include<cmath>
#include<algorithm>
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
int main()
{	int i,j,k;
	int dp[1001];
	dp[0]=0;
	dp[1]=1;
	dp[2]=2;
	dp[3]=3;
	for(i=4;i<=1000;i++)
	{
		dp[i]=i;
		j=sqrt(i);
		if(j*j==i)
            dp[i]=1;
		else
            for(k=1;k<=j;k++)
                dp[i]=min(dp[i],dp[k*k]+dp[i-(k*k)]);
		
	}
	
	int t,x;
	fastRead_int(&t);
	for(i=0;i<t;i++)
	{
		fastRead_int(&x);
		writeInt(dp[x]);
        pc('\n');
	}
	return 0;
}