#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
    int t,i,count,len,index;
    long long int ans;
    char s[30];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        count=1;
        ans=1;
        index =1;
        scanf("%s",s);
        len=(int)strlen(s);
        while(index<len)
        {
            if(s[index]==s[index-1])
            {
                count++;
            }
            else
            {
                ans=ans*pow(2,count-1);
                count=1;
            }
            index++;
        }
        if(count>1)
            ans*=pow(2,count-1);
        printf("%lld\n",ans);

    }
    return 0;
}