#include<cstdio>
#include<cmath>
#include<cstring>
#define ll long long int
#define MAX 10000000
#define LMT 3200


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
    
    
    scanf("%lld %lld",&a,&b);
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
                printf("%lld\n",arr[i]);
            }
            else
                printf("%lld\n",arr[i]);
        
        
    }
    return 0;
    
    
    
    
    
}