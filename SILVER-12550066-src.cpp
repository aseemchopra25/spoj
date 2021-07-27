#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    while(n!=0)
    {
        printf("%d\n",(int)(log(n)/log(2)));
        scanf("%d",&n);
        
    }
    return 0;
}