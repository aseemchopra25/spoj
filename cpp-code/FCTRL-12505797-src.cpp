#include<cstdio>
#include<cmath>
using namespace std;
int main()
{ long long n,x,sum,j;
    scanf("%lld",&n);
    for(long long i=0;i<n;i++)
    { scanf("%lld",&x);
        j=1;
        sum=0;
        while(x/pow(5,j)>=1)
        { sum=sum+(x/pow(5,j));
            j++;
        }
        printf("%lld\n",sum);
        
    }
    return 0;
}