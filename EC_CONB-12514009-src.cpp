#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int n,a,index,sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a%2==0)
        {   int bin[24];
            int temp[24];
            index=0;
                while(a!=0)
                {
                    bin[index]=a%2;
                    index++;
                    a/=2;
                }
               sum=0;
                for(int j=0;j<index;j++)
                {
                    temp[j]=bin[index-1-j];
                    sum+=temp[j]*pow(2,j);
                }
            printf("%d\n",sum);
        
        }
        else
            printf("%d\n",a);
        
    }
    return 0;
    
}