#include<cstdio>
using namespace std;

long long int  gcd(long long int x,long long int y)
{
    long long int temp;
    if(y>x)
    {
        temp=y;
        y=x;
        x=temp;
    }
    if(y==0)
        return x;
    else if(x>=y && y>0)
        return gcd(y,x%y);
    else
        return -1;
}

int main()
{ long long int n,m;
  int t;
    
    scanf("%d",&t);
    
    for(int i=0;i<t;i++)
    {
        scanf("%lld",&n);
        m=n/2;
        for(long long int j=m;j>=1;j--)
        {
            if(gcd(n,j)==1)
            {
                printf("%lld\n",j);
                break;
            }
        }
        
    }
    return 0;
}