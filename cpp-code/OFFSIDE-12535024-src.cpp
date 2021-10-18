#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{ int a,d,count,i,j,k,l;
    
    int A[12],D[12];
    
    scanf("%d %d", &a, &d);
    
    while(a!=0 && d!=0)
    {   count=0;
        for(i=0;i<a;i++)
            scanf("%d",&A[i]);
        for(j=0;j<d;j++)
            scanf("%d",&D[j]);
        
        sort(A,A+a);
        sort(D,D+d);
        for(l=0;l<a;l++)
        {
            for(k=0;k<d;k++)
            { if(A[l]>=D[k])
                count++;
            else break;
            }
            if(count<2)
            {printf("Y\n");
                goto c;
            }
            else
                count=0;
            
        }
        
        printf("N\n");
    c:
        scanf("%d %d",&a,&d);
    }
    
    return 0;
}