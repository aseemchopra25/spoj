#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    float a[8];float mincake; float b[4];
    for(int i=0;i<8;i++)
    scanf("%f",&a[i]);
    while(a[0]!=-1)
    {
        for(int i=0;i<4;i++)
        b[i]=a[i]/a[i+4];
        sort(b,b+4);
        mincake=ceil(b[3]);
        for(int i=0;i<4;i++)
        {
            printf("%d ",(int)(mincake*a[i+4]-a[i]));
        }
        printf("\n");
        
        for(int i=0;i<8;i++)
            scanf("%f",&a[i]);
    }
    return 0;
}