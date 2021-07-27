#include<cstdio>
using namespace std;
int main()
{
    long long int n;
    scanf("%lld",&n);
    if(n%10==0)
        puts("2");
    else
    {
        puts("1");
        printf("%lld",n%10);
    }
    return 0;
}