#include<cstdio>

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

long long int a[1000010];
inline void cube()
{
    long long i,temp=0;
    for(i=0;i<=1000000;i++)
    {
        temp=(temp+i*i*i)%1000000003;
        a[i]=(a[i-1]+temp)%1000000003;
    }
    
}

int main()
{
    cube();
    int t,n;
    fastRead_int(&t);
    while(t--)
    {
        fastRead_int(&n);
        printf("%lld\n",a[n]);
    }
    return 0;
    
}