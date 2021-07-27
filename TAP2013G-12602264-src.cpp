#include<cstdio>
#include<algorithm>

using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    int a[t],b[t];
  
    for(int i=0;i<t;i++)
    scanf("%d",&a[i]);
    
    for(int i=0;i<t;i++)
    scanf("%d",&b[i]);
        
    
    sort(a,a+t);
    sort(b,b+t);
    int count =0,i=0,j=0;
    while(i<t && j<t)
    {
        if(a[i]<b[j])
        {
            i++;
            j++;
            count++;
        }
        else
            j++;
    }
    printf("%d\n",count);
    return 0;

}