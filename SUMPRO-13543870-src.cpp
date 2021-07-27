#include<cstdio>
#include<algorithm>
#include<cmath>
#define MOD 1000000007
#define ll long long int
using namespace std;


ll n;


inline ll fsum(ll a, ll b) {
    ll tb = b * (b + 1) >> 1;
    ll ta = a * (a + 1) >> 1;
    return (tb - ta) % MOD;
}
inline void solve() {
    ll sum = 0,up,lw,root=sqrt(n);
    for (ll i = 1; i*i <= n; i++)
    {
        up = n / i;
        lw = max(n / (i + 1), root);
        sum += (i * fsum(lw, up)) % MOD;
        if(sum >= MOD) sum -= MOD;
        sum += (i * (n / i)) % MOD;
        if(sum >= MOD) sum -= MOD;
    }
    printf("%d\n",(int)sum);
}
int main() {
    int t;
    scanf("%d",&t);
    
    for (int i = 1; i <= t; i++) {
        scanf("%lld",&n);
        solve();
    }
    return 0;
}
