#include<iostream>
#include<cstdio>
using namespace std;
#define LL long long
#define mod 1000000007
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
inline void fastRead_lint(LL *a)
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
inline int power(LL a,LL b)
{
	int p = 1;
	
    while(b>0)
    {
        if(b&1)
        {
            p=(p*a)%mod;
            
        }
        b>>=1;
        a = (a*a)%mod;
    }
    return p;
	
}
int main()
{
        int t;
    LL p,x,z,a,c;
    LL n;
	fastRead_int(&t);
    
	while(t--)
	{
		fastRead_lint(&n);
        fastRead_lint(&p);
        
		c = power(p-1,mod-2);
        x = power(p,n-1);
        a=(x*p)%mod;
		if(a==0)
			a = mod;
		
		z = ((a-1)*c)%mod;
		
		writeInt((int)z);
        pc(' ');
        writeInt((int)x);
        pc('\n');
	}
	return 0;
}
