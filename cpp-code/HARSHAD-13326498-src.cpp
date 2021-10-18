#include<cstdio>
#include<cmath>
#include<cstring>
#define max 1000001
#define pc(x) putchar_unlocked(x);
int cheat[]={2,   3,   5,   7,  11,  13,  17,  19,  23,  29,  31,  37,  41,
            43,  47,  53,  59,  61,  67,  71,  73,  79,  83,  89,  97, 101,
    
            103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167,
            173, 179, 181, 191, 193, 197, 199, 211, 223, 227, 229, 233, 239,
    
            241, 251, 257, 263, 269, 271, 277, 281, 283, 293, 307, 311, 313,
            317, 331, 337, 347, 349, 353, 359, 367, 373, 379, 383, 389, 397,
    
            401, 409, 419, 421, 431, 433, 439, 443, 449, 457, 461, 463, 467,
            479, 487, 491, 499, 503, 509, 521, 523, 541, 547, 557, 563, 569,
    
            571, 577, 587, 593, 599, 601, 607, 613, 617, 619, 631, 641, 643,
            647, 653, 659, 661, 673, 677, 683, 691, 701, 709, 719, 727, 733,
    
            739, 743, 751, 757, 761, 769, 773, 787, 797, 809, 811, 821, 823,
            827, 829, 839, 853, 857, 859, 863, 877, 881, 883, 887, 907, 911,
    
            919, 929, 937, 941, 947, 953, 967, 971, 977, 983, 991, 997};
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
    pc('\n');
}
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
bool devy[max+100];
int tot[max];
bool a[max];
inline void mark()
{
    int i,j,prime;
    for(i=0;i<=167;i++)
    {
        prime=cheat[i];
        for(j=prime<<1;j<max;j+=prime)
            a[j]=1;
        
    }
    
    
}


inline void pre()
{
    a[1]=1;
    int i,temp,sum;
    for(i=1;i<max;i++)
    {
        sum=i;
        temp=i;
        while(temp!=0)
        {
            sum+=(temp%10);
            temp/=10;
        }
        devy[sum]=1;
        if(devy[i]==0 && a[i]==0)
            tot[i]=tot[i-1]+1;
        else
            tot[i]=tot[i-1];
        
       
        
    }
    
    
}
int main()
{

    
    mark();
    
    pre();
    int q,x,y;
    fastRead_int(&q);
    while(q--)
    {
        fastRead_int(&x);
        fastRead_int(&y);
        if(x==0)x++;
        writeInt(tot[y]-tot[x-1]);
        
        
    }
    return 0;
}