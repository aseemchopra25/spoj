#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    long long int n;
    int count=0;
    scanf("%lld",&n);
    while(n!=0)
    {
        count=0;
        while(n%2==0)
        {
            count++;
            n=n/2;
        }
        if(count>0)
            printf("2^%d ",count);
        for(int i=3;i<=sqrt(n);i=i+2)
        {
            count=0;
            while(n%i==0)
            {
                count++;
                n=n/i;
            }
            if(count>0)
                printf("%d^%d ",i,count);
        }
        if(n>2)
            printf("%lld^1 ",n);
        printf("\n");
        
        scanf("%lld",&n);
    }
}