#include<cstdio>
#include<cmath>
#include<cstdlib>
using namespace std;

int gcd(int a,int b)
{
    int temp;
    if(a<b)
    {
        temp=a;
        a=b;
        b=temp;
    }
    if(b==0)
        return a;
    while(b!=0)
    {
        temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int main()
{
    int t,s1,s2,ans;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&s1,&s2);
        ans=abs(s1-s2)/abs(gcd(s1,s2));
        printf("%d\n",ans);
    }
    return 0;
    
}