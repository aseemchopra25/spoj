#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{
    int n,i,res;
    int a=0,b=0,c=0;
    int x,z;
    char y;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%c%d",&x,&y,&z);
        if(x==3) c++;
        else if(z==2) b++;
        else if(z==4) a++;
    }
    res=c;
    a=a-c;
    res+=(b-b%2)/2;
    if(b%2)
    {
        res++;
        a-=2;
    }
    if(a > 0) {
        res+=(a-(a%4))/4;
        if(a%4>0) {
            res++;
        }
    }
    printf("%d\n",res+1);
    
    return 0;
}