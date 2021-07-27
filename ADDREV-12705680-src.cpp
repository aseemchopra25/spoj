#include <cstdio>
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
int reverse(int x)
{ int rev=0;
	for(;x!=0;)
    { rev=rev*10;
        rev=rev+x%10;
        x=x/10;
    }
    return rev;
}
int main() {
    int a,b,n,ans;
	fastRead_int(&n);
	for(int i=0;i<n;i++)
	{ fastRead_int(&a);
        fastRead_int(&b);
		ans=reverse(reverse(a)+reverse(b));
		writeInt(ans);
        pc('\n');
	}
	return 0;
}