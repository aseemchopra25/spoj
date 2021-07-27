#include<cstdio>
#include<cmath>
using namespace std;
int main()
{ double n,pi=acos(-1.0);
    scanf("%lf",&n);
    while(n!=0)
    {
        n=pi * pow(n/pi,2);
        n=n/2;
        printf("%0.2lf\n",n);
        scanf("%lf",&n);
        
    }
    return 0;
}