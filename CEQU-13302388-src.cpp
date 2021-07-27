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
inline int gcd( int a, int b)
{
    int temp;
    if(a<b)
    {
        temp=a;
        a=b;
        b=temp;
    }
    if(b==0)
        return a;
    else
    {
        while(b!=0)
        {
            temp=b;
            b=a%b;
            a=temp;
        }
    }
    return a;
}
int main()
{
    int t,a,b,c;
    fastRead_int(&t);
    for(int i=0;i<t;i++)
    {
        fastRead_int(&a);
        fastRead_int(&b);
        fastRead_int(&c);
        if(c%gcd(a,b)==0)
            printf("Case %d: Yes\n",i+1);
        else
            printf("Case %d: No\n",i+1);
    }
    return 0;
}