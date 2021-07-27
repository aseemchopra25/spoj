#include<cstdio>
#include<iostream>
#include<string>
#include<cstdlib>
#include<cstring>
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
int main()
{
    int sum=0,ans=0,m,c,d,e;
    int b[10]={0,1,3,2,6,4,5};
    int a[10000];
    char s[250];
    while(scanf("%s",s)!=EOF)
    {
        ans=0;
        sum=0;
        int temp=(int)strlen(s);
        for(int i=0;i<temp;i++)
        {
            a[i+2]=s[i]-'0';
            sum+=a[i+2];
        }
        m=temp+1;
        for(int i=1;i<=m;i++)
        {
            if(a[i]==1)
                ans++;
            if(a[i]==2 && (a[m]&1)==0)
                ans++;
            if(a[i]==3 && sum%3==0)
                ans++;
            if(a[i]==4 && ((a[m]+a[m-1]*10)&3)==0)
                ans++;
            if(a[i]==5 && a[m]%5==0)
                ans++;
            if(a[i]==6 && sum%3==0 && ((a[m]&1)==0))
                ans++;
            if(a[i]==8 &&(a[m]+10*a[m-1]+100*a[m-2])%8==0)
                ans++;
            if(a[i]==9 && sum%9==0)
                ans++;
            if(a[i]==7)
            {
                c=1;
                d=m;
                e=0;
                while(d>1)
                {
                    e+=a[d]*b[c];
                    c++;
                    d--;
                    if(c>6)
                        c=1;
                    
                }
                if(e%7==0)
                    ans++;
            }
        }
        writeInt(ans);
        pc('\n');
    }
    return 0;
}