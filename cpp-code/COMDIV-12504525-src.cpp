#include<cstdio>
#include<cmath>


using namespace std;

int gcd(int n1, int n2)
{
    int temp;
    if(n1<n2)
    {
        temp=n1;
        n1=n2;
        n2=temp;
    }
    
    if(n2==0)
        return n1;
    else
        while(n2!=0)
        {
            temp=n2;
            n2=n1%n2;
            n1=temp;
            
        }
    return n1;
}



int main()
{
    int t,n1,n2,hcf,ans,i,j;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&n1,&n2);
        hcf=gcd(n1,n2);
      
        ans=0;
        for(j=1;j<=sqrt(hcf);j++)
        {
            if(hcf%j==0)
            {
                ans+=2;
                if(j==hcf/j)
                    ans--;
            }
            
        }
        printf("%d\n",ans);
    
    }
    return 0;
}