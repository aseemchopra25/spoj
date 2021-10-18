#include<cstdio>
using namespace std;
int main()
{ int n,k,count=0,t;
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&t);
        if(t%k==0)
            count++;
        
    }
    printf("%d",count);
    return 0;
}