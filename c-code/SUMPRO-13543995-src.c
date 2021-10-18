#include<stdio.h>
#include<math.h>
#define MOD 1000000007
#define ll long long int


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
    pc('\n');
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

int n;


inline int fsum(int a, int b) {
    ll tb = (long long int)b * (b + 1) >> 1;
    ll ta = (long long int)a * (a + 1) >> 1;
    int x=(tb-ta)%MOD;
    return x;
}
inline void solve() {
    ll sum = 0;
    int up,lw,root=sqrt(n),i;
    for (i = 1; i*i <= n; i++)
    {
        up = n / i;
        
        lw=(n/(i+1)>root)? n/(i+1):root;
        
        sum += ((long long int)i * fsum(lw, up)) % MOD;
        if(sum >= MOD) sum -= MOD;
        sum += ((long long int)i * (n / i)) % MOD;
        if(sum >= MOD) sum -= MOD;
    }
    writeInt((int)sum);
}
int main() {
    int t,i;
    fastRead_int(&t);
    for (i = 1; i <= t; i++) {
        fastRead_int(&n);
        solve();
    }
    return 0;
}
