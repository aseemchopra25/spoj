#include<cstdio>
#include<cmath>
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
int  store[3500],l;
inline bool prime( int x)
{
     int i,last=sqrt(x);
    for(i=2;i<=last;i++)
    {
        if(!(x%i))
        {
            return 0;
        }
    }
    return 1;
}
void initiate()
{
    for( int i=2;i<32000;i++)
    {
        if(prime(i))
        {
            store[l++]=i;
        }
    }
}

inline bool func(  int x)
{
     int i,last=sqrt(x);
    for(i=0;i<l && store[i]<=last;i++)
    {
        if(!(x%store[i]))
            return 0;
    }
    return 1;
}



int main()
{
    int t;
    fastRead_int(&t);
    int a,b;
    initiate();
    while(t--)
    {
        fastRead_int(&a);
        fastRead_int(&b);
        if(a==1)
            a++;
        while(a<=b)
        {
            if(func(a))
            {
                printf("%d\n",a);
            }
            a++;
        }
        putchar_unlocked('\n');
    }
    return 0;
    
}