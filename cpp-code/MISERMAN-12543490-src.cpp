#include<cstdio>
#include<algorithm>
using namespace std;


int sum( int n, int m, int grid[101][101])
{
    for(int i=n-2;i>=0;i--)
    {
        grid[i][0]=grid[i][0]+ min(grid[i+1][0],grid[i+1][1]);
        grid[i][m-1]=grid[i][m-1]+min(grid[i+1][m-1],grid[i+1][m-2]);
                                
        for(int j=1;j<m-1;j++)
        grid[i][j]=grid[i][j]+min(grid[i+1][j],min(grid[i+1][j-1],grid[i+1][j+1]));
    }
    int a[101];
    for(int i=0;i<m;i++)
        a[i]=grid[0][i];
    sort(a,a+m);
    return a[0];
    
}

int main()
{
    int n,m;
    int grid[101][101];
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
        scanf("%d",&grid[i][j]);
    printf("%d\n",sum(n,m,grid));
    
    
    return 0;
    
}