#include<cstdio>
using namespace std;
int main()
{ int x;
    scanf("%d",&x);
    while(1)
    { if(x!=0)
        printf("%d\n",(x*(x+1)*(2*x+1))/6);
    else
        break;
        scanf("%d",&x);
    }
    return 0;
}