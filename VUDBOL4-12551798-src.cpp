#include<cstdio>
using namespace std;
int main()
{
    int t,count=0;
    char a[51];
    scanf("%d",&t);
    while(t!=0)
    {
        count=0;
    c:
        scanf("%s",a);
        for(int i=0;i<t;i++)
            printf("%c%c",a[i],a[i]);
        printf("\n");
        for(int i=0;i<t;i++)
            printf("%c%c",a[i],a[i]);
        printf("\n");
        count++;
        if(count<t)
            goto c;
        scanf("%d",&t);
    }
    return 0;
}