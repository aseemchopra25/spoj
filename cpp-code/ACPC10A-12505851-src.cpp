#include<cstdio>
using namespace std;
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    while(1)
    { if(a*a+b*b+c*c!=0)
            {if(c-b==b-a)
                printf("AP %d\n",c+b-a);
                else
                    printf("GP %d\n",c*(b/a));
            }
       else break;
        
        scanf("%d %d %d",&a,&b,&c);
    }
    return 0;
}
