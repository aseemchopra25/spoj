#include<cstdio>
#include<cstring>
using namespace std;
#define size 1000000
int a[size];
inline void gen()
{
    int i,j,k;
    for(k=1;k<size;k++)
    {
        i=k;
        j=i;
        while(i>0)
        {
            j+=i%10;
            i/=10;
        }
        a[j]=1;
    }
}

int main()
{
    int i;
    memset(a,0,sizeof(a));
    gen();
    for(i=1;i<size;i++)
    {
        if(a[i]==0)
            printf("%d\n",i);
        
    }
    return 0;
}