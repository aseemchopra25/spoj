#include<cstdio>
#include<algorithm>
using namespace std;
#define MAX 10000001
int k;
int e[MAX];
int f[MAX];
#define pc(x) putchar_unlocked(x);
inline void writeInt (int n)
{
    int N = n, rev, count = 0;
    rev = N;
    if (N == 0) { pc('0');return ;}
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
inline int search(int val)
{
    int size=0,temp=0,low=0,high=k,mid;
    while(low<=high)
    {
        mid=(high+low)/2;
        if(e[mid]==val)
        {
            temp=mid-1;
            while(mid<k && e[mid]==val)
            {
                size++;
                mid++;
            }
            while(temp>=0 && e[temp]==val)
            {
                size++;
                temp--;
                
            }
            return size;
        }
        else if( e[mid]>val)
            high=mid-1;
        else
            low=mid+1;
    }
    return 0;
}
int main()
{
    int n,i,j;
    int a[4000],b[4000],c[4000],d[4000];
    fastRead_int(&n);
    for(i=0;i<n;i++)
        scanf("%d %d %d %d",&a[i],&b[i],&c[i],&d[i]);
   
    
    k=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            f[k]=(c[i]+d[j])*-1;
            e[k]=a[i]+b[j];
            k=k+1;
        }
    }
    sort(f,f+k);
    sort(e,e+k);
    int size1,size2,temp,count=0;
    for(i=0;i<k;)
    {
        size1=0;
        temp=f[i];
        while(f[i]==temp && i<k)
        {
            size1++;
            i++;
        }
        size2=search(temp);
        count+=size1*size2;
        
    }
    writeInt(count);
    pc('\n');
    return 0;
    
}