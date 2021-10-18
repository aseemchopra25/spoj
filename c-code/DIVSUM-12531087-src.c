#include<stdio.h>
#include<math.h>
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
    fastRead_int(&t);
    while(t--)
    {
        int num;
        long long int ans=0;
        fastRead_int(&num);
        if(num==1)
            printf("0\n");
        else
        {
            int i,t=sqrt(num);
            for(i=2;i<=t;i++)
            {
                if(num%i==0)
                {
                    if(num/i==i)
                        ans+=i;
                    else
                        ans+=i+num/i;
                }
                
            }
            ans++;
            printf("%lld\n",ans);
        }
        
    }
    return 0;
}