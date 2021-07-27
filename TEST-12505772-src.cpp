#include<cstdio>
using namespace std;
int main()
{ int x;
    scanf("%d",&x);
    while(1)
    { if(x!=42)
        printf("%d\n",x);
  	else
        break;
        
        scanf("%d",&x);
    }
    return 0;
}