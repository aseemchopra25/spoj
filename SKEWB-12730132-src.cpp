#include<cstdio>
#include<cstring>
using namespace std;
inline int powers(int n,int x)
{
    int mul=1;
    
    while(x>0)
    {
        if(x%2==1)mul=((mul)*n);
        n=((n)*n);
        x/=2;
    }
    return mul;
}
int main()
{
    char s[100];
    int len,sum;
    scanf("%s",s);
    while(s[0]!='0')
    {
        sum=0;
        len=(int)strlen(s);
        for(int i=len-1;i>=0;i--)
            sum+=(powers(2,len-i)-1)*(s[i]-'0');
        printf("%d\n",sum);
        scanf("%s",s);
    }
    return 0;
}