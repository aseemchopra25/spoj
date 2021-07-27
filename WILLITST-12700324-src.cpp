#include<cstdio>
using namespace std;
int main()
{
    double n;
    scanf("%lf",&n);
    while(n>1)
    {
        n=n/2;
    }
    if(n==1)
        puts("TAK");
    else
        puts("NIE");
    return 0;
}
