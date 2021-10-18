#include<cstdio>
using namespace std;
int main()
{ int t;
    scanf("%d",&t);
    long long a=0,num;
    while(t--)
    {
        scanf("%lld",&num);
        a=a^num;
    }
    printf("%lld\n",a);
    return 0;
}