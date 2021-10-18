#include<cstdio>
#include<cstring>
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
    int t,n,i,flag,a[1000],val;
    fastRead_int(&t);
    while(t--)
    {
        fastRead_int(&n);
        memset(a, 0, sizeof(a));
        flag=0;
        for(i=0;i<n;i++)
        {
            fastRead_int(&val);
            if(a[val+1]==0)
            {
                a[val+1]=1;
                flag++;
            }
            else if(a[n-val]==0)
            {
                a[n-val]=1;
                flag++;
            }
            
        }
        if(flag==n)
            puts("YES");
        else
            puts("NO");
    }
    return 0;
}