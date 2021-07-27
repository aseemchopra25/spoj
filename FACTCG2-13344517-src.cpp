#include<cstdio>
#include<cmath>
using namespace std;
#define max 10000001
bool a[max];
int prime[664579];
inline void pre()
{
    a[0]=1;a[1]=1;
    prime[0]=2;
    for(int j=4;j<max;j+=2)
        a[j]=1;
    int count=1;
    int sq=sqrt(max-1);
    for(int i=3;i<=sq;i+=2)
        if(a[i]==0)
        {
            for(int j=i<<1;j<max;j+=i)
                a[j]=1;
            prime[count]=i;
            count++;
            
        }
   
}
int main()
{
    pre();
    int n,index;
    
    while(scanf("%d",&n)!=EOF)
    {
        
        index=0;
        if(n==1)
        {
            puts("1");
            continue;
        }
        if(a[n]==0)
        {
            printf("1 x %d\n",n);
            continue;
        }
        
        // 3137 tak sqrt lena hai
        printf("1");
       
        while((n&1)==0)
        {
            printf(" x 2");
            n>>=1;
        }
        for(int i=3;i<=sqrt(n);i+=2)
        {
            while(n%i==0)
            {
                printf(" x %d",i);
                n/=i;
            }
            if(a[n]==0)
            {
                printf(" x %d\n",n);
                goto c;
            }
        }
        if(n>2)
            printf(" x %d",n);
        printf("\n");
            
    c:
        continue;
        
        
    }
}