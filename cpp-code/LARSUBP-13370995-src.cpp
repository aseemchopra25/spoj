#include<cstdio>
#include<cstring>
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
#define MOD 1000000007
int dig[11];
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
int main()
{
    int t,c,i,j,sum,temp,k;
    fastRead_int(&t);
    for(c=1;c<=t;c++)
    {
        char s[10009];
        gets(s);
        memset(dig, 0, sizeof(dig));
        sum=0;
        j=-1;
        while(s[++j]!='\0')
        {
            k=s[j]-48;
            temp=k;
            while(k--)
            {
                dig[temp]=(dig[temp]+dig[k])%MOD;
                
            }
            dig[temp]++;
        }
        for(i=0;i<=9;i++)
        {
            sum=(sum+dig[i])%MOD;
            
        }
        pc('C');pc('a');pc('s');pc('e');pc(' ');
        writeInt(c);pc(':');pc(' ');writeInt(sum);pc('\n');
        
    }
    return 0;
}