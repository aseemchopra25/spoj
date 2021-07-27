#include<cstdio>
#include<cmath>
using namespace std;
unsigned int store[3500],l;
inline bool prime(unsigned int x)
{
    unsigned int i,last=sqrt(x);
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
    for(unsigned int i=2;i<32000;i++)
    {
        if(prime(i))
        {
            store[l++]=i;
        }
    }
}

inline bool func( unsigned long x)
{
    unsigned int i,last=sqrt(x);
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
    scanf("%d",&t);
    unsigned long a,b;
    initiate();
    while(t--)
    {
        scanf("%lu %lu",&a,&b);
        if(a==1)
            a++;
        while(a<=b)
        {
            if(func(a))
            {
                printf("%lu\n",a);
            }
            a++;
        }
        printf("\n");
    }
    return 0;
    
}