#include<cstdio>
using namespace std;
long long int a[100001];
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
inline long long int  phi(int n)
{
    long long int result = n;
    int i;
    for(i=2;i*i <= n;i++)
    {
        if (n % i == 0)
            result -= result / i;
        while (n % i == 0)
            n /= i;
    }
     if (n > 1)
    result -= result / n;
    
    return result;
}
inline void func()
{
    for(int i=1;i<=100000;i++)
        a[i]=phi(i)+a[i-1];;
        
    
    a[1]=0;
    for(long long int i=2;i<=100000;i++)
        a[i]=((i*(i-1))/2)-a[i]+i;
    
    
    
}
int main()
{
    a[0]=0;
    func();
    int t,n;
    fastRead_int(&t);
    for(int i=1;i<=t;i++)
    {
        fastRead_int(&n);
        printf("Case %d: %lld\n",i,a[n]);
    }
    return 0;
}