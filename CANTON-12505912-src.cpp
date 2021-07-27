#include<cstdio>
using namespace std;
int main()
{ int n;
   scanf("%d",&n);
    for(int i=0;i<n;i++)
    {   int x,seg,sum=0,j,pos;
        scanf("%d",&x);
        for(j=1;sum<x;j++)
            sum=(j*(j+1))/2;
        seg=j-1;
        pos=x-((seg*(seg-1))/2);
        if(seg%2==0)
            printf("TERM %d IS %d/%d\n",x,pos,seg-pos+1);
        else
            printf("TERM %d IS %d/%d\n",x,seg-pos+1,pos);
        
    }
    
    
    return 0;
}