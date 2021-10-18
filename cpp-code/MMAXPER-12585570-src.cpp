#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    int n,i;
    scanf("%d",&n);
    int height[1001],width[1001],dp[1001][2];
    for(i=0;i<n;i++)
    scanf("%d %d",&width[i],&height[i]);
    
    dp[0][0]=width[0];
    dp[0][1]=height[0];
    for(i=1;i<n;i++)
    {
        dp[i][0]=max(dp[i-1][0]+width[i]+abs(height[i]-height[i-1]),dp[i-1][1]+width[i]+abs(height[i]-width[i-1]));
        dp[i][1]=max(dp[i-1][0]+height[i]+abs(width[i]-height[i-1]),dp[i-1][1]+height[i]+abs(width[i]-width[i-1]));
    }
    printf("%d\n",max(dp[n-1][0],dp[n-1][1]));
    return 0;
}