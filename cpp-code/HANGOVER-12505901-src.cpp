#include<cstdio>
using namespace std;
int main()
{ float n,sum,i;
    int count;
    scanf("%f",&n);
    while(1)
    {   count=0;
        sum=0.00;
        if(n!=0.00)
        {i=2;
            while(sum<n)
            { sum+=1.0/(i);
                i++;
                count=count+1;
            }
            printf("%d card(s)\n",count);
        }
        else
            break;
        scanf("%f",&n);
    }
    return 0;
}
