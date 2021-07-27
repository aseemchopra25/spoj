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
int main()
{ int n,need,f,num[10001],sum,count,j,k,i;
    fastRead_int(&n);
    for(i=0;i<n;i++)
    {   sum=0;
        count=0;
        fastRead_int(&need);
        fastRead_int(&f);
        for(j=0;j<f;j++)
            fastRead_int(&num[j]);
        sort(num,num+f);
        for(k=0;sum<need && k<f;k++)
        { sum=sum+num[f-1-k];
            count++;
        }
        if(sum>=need)
            printf("Scenario #%d:\n%d\n\n",i+1,count);
        else
            printf("Scenario #%d:\nimpossible\n\n",i+1);
        
    }
    return 0;
}