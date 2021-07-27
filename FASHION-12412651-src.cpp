#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{ int n,a[1000],b[1000];
  scanf("%d",&n);
    
    while(n>0)
    {int x,sum=0;;
        scanf("%d",&x);
        for(int j=0;j<x;j++)
         scanf("%d",&a[j]);
        for(int j=0;j<x;j++)
         scanf("%d",&b[j]);
            sort(a,a+x);
        sort(b,b+x);
        for(int i=0;i<x;i++)
            sum+=a[i]*b[i];
        
        printf("%d\n",sum);
        n--;
    }
    return 0;
}

        
        
        
        
        
        
        
