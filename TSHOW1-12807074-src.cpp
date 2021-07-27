#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;
int main()
{
    int t,index,len;
    scanf("%d",&t);
    long long n,power;
    int i;
    for(i=0;i<t;i++)
    {
        index =0;
        scanf("%lld",&n);
        while(n>(2*(pow(2,index)-1)))
            index++;
        len=index;
        index--;
        n=n-(2*pow(2,index)-2);
        n--;
        while(len>0)
        {
            power=pow(2,len);
            if(n%power<=pow(2,len-1)-1)
                printf("5");
            else
                printf("6");
            len--;
                
        }
        printf("\n");
        
        
    }
    return 0;
}