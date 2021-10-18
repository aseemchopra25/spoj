#include<cstdio>
using namespace std;

int main()
{
    char day[7][10]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    int t,i,d,m,y,ans;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d",&d,&m,&y);
        static int t[]={0,3,2,5,0,3,5,1,4,6,2,4};
        y-=m<3;
        ans=(y+y/4-y/100+y/400+t[m-1]+d)%7;
        printf("%s\n",day[ans]);
        
    }
    return 0;
}