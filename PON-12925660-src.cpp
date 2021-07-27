/*
 * C++ Program to Implement Miller Rabin Primality Test
 */
#include <iostream>
#include <cstring>
#include <cstdlib>
#define ll long long
using namespace std;
inline void fastRead_int(long long int *a)
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
/*
 * calculates (a * b) % c taking into account that a * b might overflow
 */
inline ll mulmod(ll a, ll b, ll mod)
{
    ll x = 0,y = a % mod;
    while (b > 0)
    {
        if ((b&1) == 1)
        {
            x = ((x%mod) + (y%mod)) % mod;
        }
        y = ((y%mod) * (2%mod)) % mod;
        b >>=1;
    }
    return x % mod;
}
/*
 * modular exponentiation
 */
inline ll modulo(ll base, ll exponent, ll mod)
{
    ll x = 1;
    ll y = base;
    while (exponent > 0)
    {
        if ((exponent&1) == 1)
            x = mulmod(x,y,mod);
        y = mulmod(y,y,mod);
        exponent >>=1;;
    }
    return x % mod;
}

/*
 * Miller-Rabin primality test, iteration signifies the accuracy
 */
inline bool Miller(ll p,int iteration)
{
    if (p < 2)
    {
        return false;
    }
    if (p != 2 && (p&1)==0)
    {
        return false;
    }
    ll s = p - 1;
    while ((s&1) == 0)
    {
        s >>=1;
    }
    for (int i = 0; i < iteration; i++)
    {
        ll a = rand() % (p - 1) + 1, temp = s;
        ll mod = modulo(a, temp, p);
        while (temp != p - 1 && mod != 1 && mod != p - 1)
        {
            mod = mulmod(mod, mod, p);
            temp<<=1;
        }
        if (mod != p - 1 && (temp&1) == 0)
        {
            return false;
        }
    }
    return true;
}
//Main
int main()
{
    int iteration = 10;
    ll num;
    int t;
    scanf("%d",&t);
    while(t--)
    {
        fastRead_int(&num);
    if (Miller(num, iteration))
        puts("YES");
    else
        puts("NO");
    }
    return 0;
}