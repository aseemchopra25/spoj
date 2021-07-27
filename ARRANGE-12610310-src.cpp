#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int a[n],count=0,c=0,num,j=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&num);
            if(num==1)
                c++;
            else
            {
                a[j]=num;
                count++;
                j++;
                
            }
        }
        sort(a,a+count);
        for(int i=0;i<c;i++)
            printf("1 ");
        if(count==2 && a[0]==2 && a[1]==3)
            printf("2 3");
        else
        {
            for(int i=count-1;i>=0;i--)
                printf("%d ",a[i]);
        }
        printf("\n");
        
    }
    return 0;
}