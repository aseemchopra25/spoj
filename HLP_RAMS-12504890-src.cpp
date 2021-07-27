#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int t;
    long long int n,count=0,odd,even,temp;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {   count=0;
        scanf("%lld",&n);
        temp=n;
        while(n!=0)
        {
            if(n%2==1)
                count++;
            n=n/2;
        }
        odd= pow(2,count);
        even=temp+1-odd;
        printf("%lld %lld\n",even,odd);
        
    }
    return 0;
}