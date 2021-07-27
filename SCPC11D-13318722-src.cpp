#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    while(a!=0)
    {
       if(a>b && a>c && a*a==b*b+c*c)
       {
           puts("right");
           scanf("%d%d%d",&a,&b,&c);
           continue;
       }
        if(b>a && b>c && b*b==a*a+c*c)
        {
            puts("right");
            scanf("%d%d%d",&a,&b,&c);
            continue;
        }
        if(c>b && c>a && c*c==b*b+a*a)
        {
            puts("right");
            scanf("%d%d%d",&a,&b,&c);
            continue;
        }
        puts("wrong");
        scanf("%d%d%d",&a,&b,&c);
        
        
    }
    return 0;
}