#include<cstdio>
#include<cmath>
#include<cstdlib>
#define MAX 86028122
#define LMT 9267

unsigned flag[MAX>>6];
int prime[5000001], total;

#define chkC(n) (flag[n>>6]&(1<<((n>>1)&31)))
#define setC(n) (flag[n>>6]|=(1<<((n>>1)&31)))


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

inline void sieve()
{
    unsigned i, j, k;
    for(i=3;i<LMT;i+=2)
        if(!chkC(i))
            for(j=i*i,k=i<<1;j<MAX;j+=k)
                setC(j);
    prime[1] = 2;
    for(i=3,j=2;i<MAX;i+=2)
        if(!chkC(i))
            prime[j++]=i;
}

#define pc(x) putchar_unlocked(x);
inline void writeInt (int n)
{
    int N = n, rev, count = 0;
    rev = N;
    while ((rev % 10) == 0) { count++; rev /= 10;} //obtain the count of the number of 0s
    rev = 0;
    while (N != 0) { rev = (rev<<3) + (rev<<1) + N % 10; N /= 10;}  //store reverse of N in rev
    while (rev != 0) { pc(rev % 10 + '0'); rev /= 10;}
    while (count--) pc('0');
    pc('\n');
}
int main()
{
    sieve();
    char buff[11];
	register int q = atoi(fgets(buff, 11, stdin));
	sieve();
	while(q--)printf("%d\n",prime[atoi(fgets(buff, 11, stdin))]);
	return 0;
}
