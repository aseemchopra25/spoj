#include<cstdio>
#include<string>
#include<iostream>
using namespace std;
int a[100000];
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
    int t,n,i,j;
    fastRead_int(&t);
    while(t--)
    {
        fastRead_int(&n);
        for(i=0;i<n;i++)
        {
            fastRead_int(&a[i]);
            if(a[i]>i)
            {
                
                for(j=i+1;j<n;j++)
                    fastRead_int(&a[j]);
                puts("NO");
                goto c;
                
                
            }
            
            
        }
        
        puts("YES");
    c:
        continue;
    }
    return 0;
}