#include<cstdio>
#include<cstring>
using namespace std;
int primes[386];
bool arr[2665];
int luck[1001];

inline void mark(int i)
{
    int j=2;
    while(j*i<=2664)
    {
        arr[j*i]=1;
        j++;
    }
}

inline void sieve()
{
    
    int count=0;
        memset(arr,0,sizeof(arr));
        for(int i=2;i<=2664;i++)
        {
            if(arr[i]==0)   //0 means prime
            {
                primes[count]=i;
                count++;
                mark(i);
            }
        }
}





int main()
{
    
    sieve();
    int index=0,countdiv,luckies=1;
    for(int i=2;i<=2664;i++)
    {
        index=0;
        countdiv=0;
        while(primes[index]<i)
        {
           if(i%primes[index]==0)
               countdiv++;
            if(countdiv==3)
            {
                luck[luckies]=i;
                luckies++;
                break;
            }
            index++;
        }
    }
    int t,q;
    scanf("%d",&t);
    for(int j=0;j<t;j++)
    {
        scanf("%d",&q);
        printf("%d\n",luck[q]);
        
    }
    return 0;
    
}