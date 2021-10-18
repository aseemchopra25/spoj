#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int b,g,sum,x,y,p,left;
    scanf("%d %d",&b,&g);
    while(b!=-1 && g!=-1)
    {
        sum=b+g;
        x=max(b,g);
        y=sum-x;
        
        if(y==0)
            printf("%d\n",x);
        else if(x==y)
            printf("1\n");
        else{ p=x/(y+1);
            left=x-p*(y+1);
            if(left==0)
                printf("%d\n",p);
            else
                printf("%d\n",p+1);
        }
        
        scanf("%d %d",&b,&g);
    }
    return 0;
}