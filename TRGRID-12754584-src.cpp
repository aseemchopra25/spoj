#include<cstdio>
using namespace std;
inline void fastRead_longint(long long int *a)
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
int main()
{
    int t;
    long long int n,m;
    fastRead_int(&t);
    while(t--)
    {
        fastRead_longint(&n);
        fastRead_longint(&m);
        if((n&1)==0 && (m&1)==0)
        {
            if(n>m)
                puts("U");
            else if(m>=n)
                puts("L");
        }
        else if((n&1)!=0 && (m&1)!=0)
        {
            if(n>m)
                puts("D");
            else if(m>=n)
                puts("R");
        }
        else
        {
            if((n&1)==0 && (m&1)!=0)
            {
                if(n>m)
                    puts("D");
                else
                    puts("L");
            }
            if((n&1)!=0 && (m&1)==0)
            {
                if(n<m)
                    puts("R");
                else
                    puts("U");
            }
        }
    }
    return 0;
}