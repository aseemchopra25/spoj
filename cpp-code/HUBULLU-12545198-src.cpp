#include<cstdio>
using namespace std;
int main()
{
    long long int t,n;
    int x;
    scanf("%lld",&t);
    for(long long int i=0;i<t;i++)
    {
        scanf("%lld %d",&n,&x);
        if(x)
            printf("Pagfloyd wins.\n");
        else
            printf("Airborne wins.\n");
    }
    return 0;
}