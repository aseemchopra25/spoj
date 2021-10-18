#include<cstdio>
using namespace std;
int main()
{
    int t,n=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int i=1;
        int flag=0;
        while(n)
        {
            while(n%i!=0 &&i<n)
                i++;
            n=n-i;
            flag++;
            i=1;
            
            
        }
        if(flag%2==0)
            printf("Thankyou Shaktiman\n");
        else
            printf("Sorry Shaktiman\n");
        
        
    }
    return 0;
}