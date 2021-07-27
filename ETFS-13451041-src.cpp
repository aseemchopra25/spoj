#include<cstdio>
#include<cmath>
#include<cstring>
#define ll long long int
#define MAX 10000000
#define LMT 3200

#define pc(x) putchar_unlocked(x);
inline void writeInt (ll n)
{
    ll N = n, rev, count = 0;
    rev = N;
    if (N == 0) { pc('0'); pc('\n'); return ;}
    while ((rev % 10) == 0) { count++; rev /= 10;} //obtain the count of the number of 0s
    rev = 0;
    while (N != 0) { rev = (rev<<3) + (rev<<1) + N % 10; N /= 10;}  //store reverse of N in rev
    while (rev != 0) { pc(rev % 10 + '0'); rev /= 10;}
    while (count--) pc('0');
    pc('\n');
}
inline void fastRead_int(ll *a)
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

unsigned flag[MAX/64];
ll prime[664581]; // From 1 to 664579
ll checker[100001];
#define chkC(n) (flag[n>>6]&(1<<((n>>1)&31)))
#define setC(n) (flag[n>>6]|=(1<<((n>>1)&31)))

ll a,b,arr[100001];


inline void sieve()
{
    long long int i, j, k;
    ll temp,var;
    for(i=3;i<LMT;i+=2)
        if(!chkC(i))
            for(j=i*i,k=i<<1;j<MAX;j+=k)
                setC(j);
    prime[1] = 2;
    
    temp=ceil((double)a/2)*2;
    for(var=temp-a;var<=b-a;var+=2)
    {
        arr[var]-=arr[var]/2;
        while((checker[var]&1)==0)
            checker[var]>>=1;
    }
    
    
    
    
    for(i=3,j=2;i<MAX;i+=2)
        if(!chkC(i))
        {
            temp=(ceil((double)a/i))*i;
            var=temp-a;
            while(var<=b-a)
            {
                arr[var]-=arr[var]/i;
                while(checker[var]%i==0)
                    checker[var]/=i;
                var+=i;
            }
            prime[j++] = i;
            
        }
    
}

int main()
{
    
    
    fastRead_int(&a);
    fastRead_int(&b);
    
    for(int i=0;i<=b-a;i++)
    {
        arr[i]=i+a;
        checker[i]=i+a;
    }
    sieve();
    
    for(int i=0;i<=b-a;i++)
    {
            if(checker[i]>1)
            {
                arr[i]-=arr[i]/checker[i];
                writeInt(arr[i]);
            }
            else
                writeInt(arr[i]);
        
        
    }
    return 0;
    
    
    
    
    
}