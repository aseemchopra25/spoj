#include<cstdio>
#include <cstdlib>
#define MOD 2147483648
#define ADD 1234567890
#define pc(x) putchar_unlocked(x)
#define ll long long


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

inline ll modulo(ll base, ll exponent, ll mod)
{
    ll x = 1;
    ll y = base;
    while (exponent > 0)
    {
        if (exponent&1)
            x = mulmod(x,y,mod);
        y = mulmod(y,y,mod);
        exponent >>=1;;
    }
    return x % mod;
}


inline bool M(ll p)
{
    if (p < 2)
        return false;
    
    if (p != 2 && (p&1)==0)
        return false;
    
    ll s = p - 1;
    while ((s&1) == 0)
    {
        s >>=1;
    }
    int i=3;
    while(i--)
    {
        ll a = rand() % (p - 1) + 1, temp = s;
        ll mod = modulo(a, temp, p);
        while (temp != p - 1 && mod != 1 && mod != p - 1)
        {
            mod = mulmod(mod, mod, p);
            temp<<=1;
        }
        if (mod != p - 1 && (temp&1) == 0)
            return false;
        
    }
    return true;
}

int main()
{
    
    ll num=1;ll prev=1;
    pc('0');
    
    int count=1;
    while(count<=20000)
    {
        num=(prev+ADD)%MOD;
        
        if (M(num))
            pc('1');
        else
            pc('0');
        prev=num;
        count++;
    }
    return 0;
}