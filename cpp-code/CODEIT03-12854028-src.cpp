#include<cstdio>
using namespace std;
inline void fastRead_int(int *a)
{
    register char c=0;
    while (c<33) c=getchar_unlocked();
    *a=0;
    while (c>33)
    {
        *a=*a*10+c-'0';
        c=getchar_unlocked();
    }
}
int main()
{
    char day[7][10]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    int t,i,d,m,y,ans;
    fastRead_int(&t);
    for(i=0;i<t;i++)
    {
        fastRead_int(&d);
        fastRead_int(&m);
        fastRead_int(&y);
        static int t[]={0,3,2,5,0,3,5,1,4,6,2,4};
        y-=m<3;
        ans=(y+y/4-y/100+y/400+t[m-1]+d)%7;
        puts(day[ans]);
        
    }
    return 0;
}