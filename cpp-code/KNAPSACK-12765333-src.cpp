#include<cstdio>
#include<algorithm>
using namespace std;
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

inline int knapsack(int s,int size[],int value[], int n)
{
    int weight,it;
    int knap[n+1][s+1];
    for(it=0;it<=n;it++)
    {
        for(weight=0;weight<=s;weight++)
        {if(it==0 || weight==0)
            knap[it][weight]=0;
            
        else if(size[it-1]<=weight)
            knap[it][weight]= max(value[it-1] +knap[it-1][weight-size[it-1]],knap[it-1][weight]);
            
        else
            knap[it][weight]=knap[it-1][weight];
        }
    }
    return knap[n][s];
}




int main()
{
    int size[2002], value[2002];
    int s,n;
    fastRead_int(&s);
    fastRead_int(&n);
    
    for(int i=0;i<n;i++)
    {
        fastRead_int(&size[i]);
        fastRead_int(&value[i]);
        
    }
    writeInt(knapsack(s,size,value,n));
    pc('\n');
    
}