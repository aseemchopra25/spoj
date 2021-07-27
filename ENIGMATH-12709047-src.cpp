#include<cstdio>
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
    else
    {
        while(b!=0)
        {
            temp=b;
            b=a%b;
            a=temp;
        }
    }
    return a;
}
int main()
{
    int t;
    int a,b;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d %d",&a,&b);
        printf("%d %d\n",b/gcd(a,b),a/gcd(a,b));
        
    }
    return 0;
}