#include <bitset>
#include <cmath>
#include <cstdio>
#include <map>
#include <vector>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef map<int, int> mii;

ll sz;
bitset<10000010> bs;
vi primes;


inline void sieve(ll upperbound) {
    sz = upperbound + 1;
    bs.set();
    bs[0] = bs[1] = 0;
    for (ll i = 2; i <= sz; i++) if (bs[i]) {
        
        for (ll j = i * i; j <= sz; j += i) bs[j] = 0;
        primes.push_back((int)i);
    } }

inline ll EulerPhi(ll n) {
    ll index = 0, p = primes[index], ans = n;
    while (n != 1 && (p * p <= n)) {
        if (n % p == 0) ans -= ans / p;
        while (n % p == 0) n /= p;
        p = primes[++index];
    }
    if (n != 1) ans -= ans / n;
    return ans;
}
int main()
{
    sieve(1000000);
    int n;
    ll k;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%lld",&k);
        printf("%lld\n",EulerPhi(k));
    }
    return 0;
}