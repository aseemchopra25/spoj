#include<cstdio>
#include<cmath>
#include<map>
#include<iomanip>
using namespace std;
map<long long int,int>v;
int main()
{
    long long int a[1000],t,n,m,sum,sum1,temp,i;;
    a[0]=0;
    a[1]=1;
    a[2]=1;
    v[0]=1;
    v[1]=1;
    v[2]=1;
    for(i=3;i<100;i++)
    {
        a[i]=a[i-1]+a[i-2];
        v[a[i]]=1;
        
    }
    scanf("%lld",&t);
    for(int c=1;c<=t;c++)
    {
        scanf("%lld %lld",&n,&m);
        sum=0;sum1=0;
        temp=sqrt(n);
        if(temp*temp==n)
        {
            sum+=temp;
            temp--;
        }
        for(i=2;i<=temp;i++)
        {
            if(n%i==0)
            {
                sum+=i;
                sum+=(n/i);
            }
        }
        sum+=1;
        sum%=m;
        temp=sqrt(sum);
        if(temp*temp==sum)
        {
            sum1+=1;
            temp--;
        }
        for(i=2;i<=temp;i++)
            if(sum%i==0)
                sum1+=2;
        sum1+=1;
        
        
        
        if(v.count(sum1))
            printf("Case #%d : YES.\n",c);
        else
            printf("Case #%d : NO.\n",c);
    }
    return 0;
}