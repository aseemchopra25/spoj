#include<cstdio>
inline void fastRead_int(long long int *a)
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
    long long int t,n,x;
    fastRead_int(&t);
    for(long long int i=0;i<t;i++)
    {
        fastRead_int(&n);
        long long int sum=0;
        for(long long int j=0;j<n;j++)
        {
            fastRead_int(&x);
            sum+=x;
            if(sum>=n)
                sum=sum%n;
            
        }
        if(sum==0)
            puts("YES");
        else
            puts("NO");
    }
    return 0;
    
}