#include<cstdio>
#include <cstdlib>
#define MOD 2147483648
#define ADD 1234567890
#define pc(x) putchar_unlocked(x)
#define ll long long


inline int mulmod(int a, int b, int mod)
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

inline int modulo(int base, int exponent, int mod)
{
    int x = 1;
    int y = base;
    while (exponent > 0)
    {
        if (exponent&1)
            x = mulmod(x,y,mod);
        y = mulmod(y,y,mod);
        exponent >>=1;;
    }
    return x % mod;
}


inline bool M(int p)
{
    if (p < 2)
        return false;
    
    if (p != 2 && (p&1)==0)
        return false;
    
    int s = p - 1;
    while ((s&1) == 0)
    {
        s >>=1;
    }
    int i=3;
    while(i--)
    {
        int a = rand() % (p - 1) + 1, temp = s;
        int mod = modulo(a, temp, p);
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
    
    int num=1;int prev=1;
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