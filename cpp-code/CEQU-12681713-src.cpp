#include<cstdio>
using namespace std;
int gcd( int a, int b)
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
    int t,a,b,c;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(c%gcd(a,b)==0)
            printf("Case %d: Yes\n",i+1);
        else
            printf("Case %d: No\n",i+1);
    }
    return 0;
}