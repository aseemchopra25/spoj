#include<cstdio>
#include<climits>
#define MAX 1000000000000000LL
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
    int t;
    long long int n,a[2001], ans[2001];
    int i,j;
    a[0]=1;
    a[1]=2;
    for(i=2;;i++)
    {
        a[i]=a[i-1]+a[i-2];
        if(a[i]>MAX)break;
    }
    scanf("%d",&t);
    while(t--)
    {
        fastRead_int(&n);
        for(i=0;;i++)
        {
            if(a[i]>n)break;
        }
        j=0;
        while(i>0)
        {
            ans[j]=n/a[i-1];
            n%=a[i-1];
            j++;
            i--;
        }
        for(i=0;i<j;i++)
            printf("%lld",ans[i]);
        putchar_unlocked('\n');
        
    }
    return 0;
}