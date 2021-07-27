#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{	int i,j,k;
	int dp[1001];
	dp[0]=0;
	dp[1]=1;
	dp[2]=2;
	dp[3]=3;
	for(i=4;i<=1000;i++)
	{
		dp[i]=i;
		j=sqrt(i);
		if(j*j==i)
		dp[i]=1;
		else
		for(k=1;k<=j;k++)
		dp[i]=min(dp[i],dp[k*k]+dp[i-(k*k)]);
		
	}
	
	int t,x;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>x;
		cout<<dp[x]<<endl;
	}
	return 0;
}
	