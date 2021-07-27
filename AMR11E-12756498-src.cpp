#include<cstdio>
#include<cstring>
using namespace std;
int primes[386];
bool arr[2665];
int luck[1001];
#define pc(x) putchar_unlocked(x);
inline void writeInt (int n)
{
    int N = n, rev, count = 0;
    rev = N;
    if (N == 0) { pc('0'); pc('\n'); return ;}
    while ((rev % 10) == 0) { count++; rev /= 10;} //obtain the count of the number of 0s
    rev = 0;
    while (N != 0) { rev = (rev<<3) + (rev<<1) + N % 10; N /= 10;}  //store reverse of N in rev
    while (rev != 0) { pc(rev % 10 + '0'); rev /= 10;}
    while (count--) pc('0');
}
inline void fastRead_int(int *a)
{
    register char c=0;
    while (c<33) c=getchar_unlocked();
    *a=0;
    while (c>33)
    {
        *a=*a*10+c-'0';
        c=getchar_unlocked();
    }
}
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
    fastRead_int(&t);
    for(int j=0;j<t;j++)
    {
        fastRead_int(&q);
        writeInt(luck[q]);
        pc('\n');
        
    }
    return 0;
    
}