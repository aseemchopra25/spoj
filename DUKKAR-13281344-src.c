#include<stdio.h>
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
inline void fastRead_llint(long long int *a)
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

int main()
{
    int t,p;
    long long int n,ans,temp1,temp2; //temp1 is indivisual product and temp2 is value of n
    fastRead_int(&t);
    while(t--)
    {
        ans=1;
        fastRead_llint(&n);
        fastRead_int(&p);
        temp2=n;
        while(temp2!=0)
        {
            temp1=temp2-(temp2/p)*p;
            temp2=temp2/p;
            ans=ans*(temp1+1);
        }
        printf("%lld\n",n+1-ans);
        
    }
    return 0;
}