#include<cstdio>
#include<algorithm>
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
#define pc(x) putchar_unlocked(x);
inline void writeInt (int n)
{
    int N = n, rev, count = 0;
    rev = N;
    if (N == 0) { pc('0'); pc('\n'); return ;}
    while ((rev % 10) == 0) { count++; rev /= 10;} //obtain the count of the number of 0s
    rev = 0;
    while (N != 0) { rev = (rev<<3) + (rev<<1) + N % 10; N /= 10;}  //store reverse of N in rev
    while (rev != 0) { pc(rev % 10 + '0'); rev /= 10;}
    while (count--) pc('0');
}

inline int sum( int n, int m, int grid[101][101])
{
    for(int i=n-2;i>=0;i--)
    {
        grid[i][0]=grid[i][0]+ max(grid[i+1][0],grid[i+1][1]);
        grid[i][m-1]=grid[i][m-1]+max(grid[i+1][m-1],grid[i+1][m-2]);
        
        for(int j=1;j<m-1;j++)
            grid[i][j]=grid[i][j]+max(grid[i+1][j],max(grid[i+1][j-1],grid[i+1][j+1]));
    }
    int M=0;
    for(int i=0;i<m;i++)
        M =max(M,grid[0][i]);
    
    return M;
    
}

int main()
{
    int n,m;
    int t;
    fastRead_int(&t);
    for(int x=0;x<t;x++)
    {
        int grid[101][101];
        fastRead_int(&n);
        fastRead_int(&m);
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                fastRead_int(&grid[i][j]);
        writeInt(sum(n,m,grid));
        pc('\n');
    }
    
    
    return 0;
    
}