#include<cstdio>
#include<cmath>
using namespace std;
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
inline int gcd(int n1, int n2)
{
    int temp;
    if(n1<n2)
    {
        temp=n1;
        n1=n2;
        n2=temp;
    }
    
    if(n2==0)
        return n1;
    else
        while(n2!=0)
        {
            temp=n2;
            n2=n1%n2;
            n1=temp;
            
        }
    return n1;
}



int main()
{
    int t,n1,n2,hcf,ans,i,j;
    fastRead_int(&t);
    for(i=0;i<t;i++)
    {
        fastRead_int(&n1);
        fastRead_int(&n2);
        hcf=gcd(n1,n2);
        
        ans=0;
        for(j=1;j<=sqrt(hcf);j++)
        {
            if(hcf%j==0)
            {
                ans+=2;
                if(j==hcf/j)
                    ans--;
            }
            
        }
        writeInt(ans);
        pc('\n');
        
    }
    return 0;
}