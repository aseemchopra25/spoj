#include<stdio.h>
int main()
{
    long long int n,i;
    int t;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld",&n);
        printf("%lld\n",(n)*(n+1)/6);
        
    }
    return 0;
}