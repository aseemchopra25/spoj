#include<iostream>
#include<cmath>
#include<cstdio>
#include<map>
#include<cstring>


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

map<int,int>m;

void f()
{
    m[4]=1;
    m[9]=1;
    m[16]=1;
    m[25]=1;
    m[36]=1;
    m[49]=1;
    m[64]=1;
    m[81]=1;
    m[100]=1;
    m[121]=1;
    m[144]=1;
    m[169]=1;
    m[180]=1;
    m[196]=1;
    m[225]=1;
    m[252]=1;
    m[256]=1;
    m[289]=1;
    m[300]=1;
    m[324]=1;
    m[361]=1;
    m[396]=1;
    m[400]=1;
    m[441]=1;
    m[450]=1;
    m[468]=1;
    m[484]=1;
    m[529]=1;
    m[576]=1;
    m[588]=1;
    m[612]=1;
    m[625]=1;
    m[676]=1;
    m[684]=1;
    m[700]=1;
    m[720]=1;
    m[729]=1;
    m[784]=1;
    m[828]=1;
    m[841]=1;
    m[882]=1;
    m[900]=1;
    m[961]=1;
    m[980]=1;
    m[1008]=1;
    m[1024]=1;
    m[1044]=1;
    m[1089]=1;
    m[1100]=1;
}

int main()
{
    f();
    int t;
    fastRead_int(&t);
    while(t--)
    {
        int n,k;
        fastRead_int(&n);
        fastRead_int(&k);
        int j,p=0;
        int sum=0;
        int hello[102];
        for(int i=0;i<n;i++)
        {
            fastRead_int(&j);
            if(m[j])
            {
                hello[p++]=j;
                sum+=j;
            }
        }
        if(k>sum)
        {
            puts("No");
            continue;
        }
        int ans[sum+10];
        memset(ans,0,sizeof(ans));
        ans[0]=1;
        
        for(int i=0;i<p;i++)
        {
            for(int h=sum;h>=hello[i];h--)
            {
                ans[h]|=ans[h-hello[i]];
            }
        }
        
        if(ans[k])
            puts("Yes");
        else
            puts("No");
    }
    
    return 0;
}