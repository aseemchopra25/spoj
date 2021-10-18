#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;
#define pc(x) putchar_unlocked(x);
inline void writeInt (long long int n)
{
    long long int N = n, rev, count = 0;
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
int main()
{
    int t,i,count,len,index;
    long long int ans;
    char s[30];
    fastRead_int(&t);
    for(i=0;i<t;i++)
    {
        count=1;
        ans=1;
        index =1;
        scanf("%s",s);
        len=(int)strlen(s);
        while(index<len)
        {
            if(s[index]==s[index-1])
            {
                count++;
            }
            else
            {
                ans=ans*pow(2,count-1);
                count=1;
            }
            index++;
        }
        if(count>1)
            ans*=pow(2,count-1);
        writeInt(ans);
        pc('\n');

    }
    return 0;
}