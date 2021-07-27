#include<cstdio>
using namespace std;
int main()
{
    int a[3],t[3];
    int count=0;
    int time,num;
    while(scanf("%d %d %d %d %d %d",&a[0],&a[1],&a[2],&t[0],&t[1],&t[2])!=EOF)
    {   num=0;
        time=0;
        
        count++;
        for(int i=0;i<3;i++)
        {   if(a[i]!=0)
            {
                time+=a[i]+(t[i]-1)*1200;
                num++;
            }
        }
        printf("team %d: %d, %d\n",count,num,time);
        
        
    }
    return 0;
}