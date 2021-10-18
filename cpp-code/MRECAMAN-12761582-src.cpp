#include<cstdio>
#include<algorithm>
using namespace std;

int arr[500005];
bool isPresent[10000000]={0};
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
int main()
{
    int i,temp,m=0;
    arr[0]=0;
    isPresent[0]=1;
    for(i=1;i<500005;i++)
    {
        temp=arr[i-1]-i;
        if(temp>0&&isPresent[temp]==0)
        {
            arr[i]=temp;
            isPresent[temp]=1;
        }
        else
        {
            arr[i]=arr[i-1]+i;
            isPresent[arr[i-1]+i]=1;
        }
      
    
    }

    int t;
    fastRead_int(&t);
    while(t!=-1)
    {
        writeInt(arr[t]);
        pc('\n');
        scanf("%d",&t);
    }
    return 0;
}