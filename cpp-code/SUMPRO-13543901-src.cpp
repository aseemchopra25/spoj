#include<cstdio>
#include<algorithm>
#include<cmath>
#define MOD 1000000007
#define ll long long int
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

int n;


inline int fsum(ll a, ll b) {
    ll tb = b * (b + 1) >> 1;
    ll ta = a * (a + 1) >> 1;
    int x=(tb-ta)%MOD;
    return x;
}
inline void solve() {
    ll sum = 0;
    int up,lw,root=sqrt(n);
    for (int i = 1; i*i <= n; i++)
    {
        up = n / i;
        lw = max(n / (i + 1), root);
        
        sum += ((long long int)i * fsum(lw, up)) % MOD;
        if(sum >= MOD) sum -= MOD;
        sum += ((long long int)i * (n / i)) % MOD;
        if(sum >= MOD) sum -= MOD;
    }
    printf("%d\n",(int)sum);
}
int main() {
    int t;
    fastRead_int(&t);
    for (int i = 1; i <= t; i++) {
        fastRead_int(&n);
        solve();
    }
    return 0;
}
