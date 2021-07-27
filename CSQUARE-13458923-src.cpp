#include<cstdio>
#define u64 long long int
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
inline void fastRead_lint(u64 *a)
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
inline u64 answer(u64 a,int c, char *b, u64 m)
{
    long int ans=1;
    
    while(c-1>=0){
        if((b[c-1]-'0')==1)
            ans=(ans*(a%m))%m;
        if((b[c-1]-'0')==2)
            ans=(ans*((a*a)%m))%m;
        a=(((a*a)%m)*a)%m;
        c--;
    }
    return ans;
    
}
int main()
{
    int t,i;
    u64 a,m;
    char b[300];
    
    fastRead_int(&t);
    while(t--)
    {
        fastRead_lint(&a);
        scanf("%s",b);
        fastRead_lint(&m);
        
        int cntr = 0;
        for(i=0;b[i]!='\0';i++)cntr++;
        printf("%lld\n",answer(a , cntr, b, m));
    }
    return 0;
}