#include<cstdio>
#include<cstring>
using namespace std;
long long int dp[5001];
int main()
{
    int l;
    char arr[5001];
    while(true)
    {
        memset(dp,0,sizeof(dp));
        scanf("%s",arr);
        if(arr[0]=='0')
            break;
        l=(int)strlen(arr);
        dp[0]=1;
        dp[1]=1;
        for(int i=2;i<=l;i++)
        {
            int c1=arr[i-2]-'0',c2=arr[i-1]-'0';
            if(c1==1 || (c1==2 && c2<=6))
                dp[i]+=dp[i-2];
            if(c2!=0)
                dp[i]+=dp[i-1];
                
        }
        printf("%lld\n",dp[l]);
    }
    return 0;
}