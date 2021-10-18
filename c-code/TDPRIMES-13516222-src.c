#include<stdio.h>
#define MAX 100000000
#define LMT 10000

int flag[MAX/64];


#define chkC(n) (flag[n>>6]&(1<<((n>>1)&31)))
#define setC(n) (flag[n>>6]|=(1<<((n>>1)&31)))



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
    pc('\n');
}

int main()
{
    int count=1;
    puts("2");
    int mul=1;
    int i, j, k;
    for(i=3;i<MAX;i+=2)
        if(!chkC(i))
        {
            count++;
            if(count-(100*mul)==1)
            {
                writeInt(i);
                mul++;
                
            }
            
            for(j=i*i,k=i<<1;i<LMT && j<MAX;j+=k)
                setC(j);
            
            
        }
    
    
    return 0;
}