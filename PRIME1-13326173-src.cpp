#include<cstdio>
#include<cmath>
using namespace std;
unsigned int store[3500],l;
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

inline bool func(  long x)
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
    scanf("%d",&t);
    long a,b;
    initiate();
    while(t--)
    {
        scanf("%ld %ld",&a,&b);
        if(a==1)
            a++;
        while(a<=b)
        {
            if(func(a))
            {
                printf("%ld\n",a);
            }
            a++;
        }
        printf("\n");
    }
    return 0;
    
}