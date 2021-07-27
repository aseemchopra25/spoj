#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int gcd(int a, int b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}

int main()
{
    int t,count=0,flag=1,j,num,i,pow,len;
    char s[50];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",s);
        len=(int)strlen(s);
        count=0,flag=1;
        for(j=len-1;j>=0;j--)
        {
            if(s[j]=='.')
            {
                flag=0;
                break;
            }
            else
                count++;
            
        }
        num=0;
        for(j=0;j<len;j++)
        {
            if(s[j]!='.')
                num=10*num+(s[j]-'0');
            
        }
        pow =1;
        if(flag==0)
        {
            for(i=0;i<count;i++)
                pow*=10;
        }
        printf("%d\n",pow/gcd(num,pow));
    }
    return 0;
    
}