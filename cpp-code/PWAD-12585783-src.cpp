#include<cstdio>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    if(n==1)
        printf("*\n");
    else
    {
    int x=n/2;
    for(int i=0;i<x;i++)printf(" ");
    printf("*\n");
    x--;
    int len =0;
    while(x>=1)
    {
        for(int i=0;i<x;i++)
            printf(" ");
        printf("*");
        for(int i=0;i<len;i++)printf(" ");
        printf("*");
        for(int i=0;i<len;i++)printf(" ");
        printf("*\n");
        len++;
        x--;
    }
    for(int i=0;i<n;i++)printf("*");
    printf("\n");
    x=1;
    len=n/2-2;
    while(x<=n/2-1)
    {
        for(int i=0;i<x;i++)
            printf(" ");
        printf("*");
        for(int i=0;i<len;i++)printf(" ");
        printf("*");
        for(int i=0;i<len;i++)printf(" ");
        printf("*\n");
        len--;
        x++;
    }
    for(int i=0;i<n/2;i++)printf(" ");
    printf("*\n");
    }
    return 0;
    
}