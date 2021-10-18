#include<cstdio>
using namespace std;
int main()
{ 	int n;
	scanf("%d",&n);
	while(n--)
	{int carry=0,num,i,j,k=0,a[1000]={1};
		scanf("%d",&num);
		for(i=1;i<=num;i++)
		{ for(j=0;j<=k;j++)
        {a[j]=a[j]*i+carry;
            carry=a[j]/10;
            a[j]=a[j]%10;
        }
            while(carry)
			{k++;
                a[k]=carry%10;
                carry=carry/10;
            }
		}
		
        for(i=k;i>=0;i--)
            printf("%d",a[i]);
        printf("\n");
	}
    return 0;
}