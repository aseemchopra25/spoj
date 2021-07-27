#include<cstdio>
using namespace std;
int main()
{
    int sum=0,x,t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d",&x);
        if(x>0)
            sum+=x;
    }
    printf("%d\n",sum);
}