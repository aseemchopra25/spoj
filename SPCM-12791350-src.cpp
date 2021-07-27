#include<cstdio>
#include<cmath>
#define LL long long int
using namespace std;

inline int prime(LL p)
{
    if(p==2)
        return 1;
    if((p%2)==0)
        return 0;
    LL upper=sqrt(p);
    for(LL i=3;i<=upper;i+=2)
        if(p%i==0)
            return 0;
    return 1;
}
inline LL SOD (LL num)
{
    LL sumof=0;
    LL temp=num;
    for(int i=2;i<=sqrt(num) &&temp>1 ;i++)
    {
        if(temp%i==0)
        {
            
            sumof+=i;
            while(temp%i==0)
                temp/=i;
            
        }
    }
    if(temp>1)
    {
        sumof+=temp;
    }
    return sumof;
  
}
inline LL NOD (LL num)
{
    LL numof=0;
    LL temp=num;
    for(int i=2;i<=sqrt(num) &&temp>1 ;i++)
    {
        if(temp%i==0)
        {
            
            numof++;
            while(temp%i==0)
                temp/=i;
            
        }
    }
    if(temp>1)
    {
        numof++;
    }
    return numof;
    
}
inline LL solve(LL num)
{
    if(prime(num))
        return 1;
    else
    {
        
        return (solve(SOD(num))+NOD(num));
    }
}
int main()
{
    int t;
    LL num;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&num);
        printf("%lld\n",solve(num));
        
        
    }
}