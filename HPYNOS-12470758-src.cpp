#include<cstdio>

using namespace std;
int split(int n)
{   int sum=0;
    while(n)
    {
        sum+=(n%10)*(n%10);
        n/=10;
    }
    return sum;
}

int main()
{
    int n,temp,count=0,hit=1,a[1000]={0};
    scanf("%d",&n);
    while(1)
    {
        temp=split(n);
        if(a[temp]==0)
        {
            n=temp;
            a[temp]=1;
            count++;
        }
        else
        {
            hit=0;
            break;
        }
        if(n==1)
            break;
        
    }
    if(hit)
        printf("%d\n",count);
    else
        printf("-1\n");
    return 0;
    
    
}