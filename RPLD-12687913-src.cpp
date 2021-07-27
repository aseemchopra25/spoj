#include<cstdio>
#include<map>
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
{
    int t,i,id,code,n,r,j,flag;
    fastRead_int(&t);
    for(i=1;i<=t;i++)
    {
        flag=0;
        map<int,int>m;
        fastRead_int(&n);
        fastRead_int(&r);
        for(j=0;j<r;j++)
        {
            fastRead_int(&id);
            fastRead_int(&code);
            if(m.count(code)==0)
            {
                m[code]=id;
            }
            else if(m.count(code)!=0)
            {
                if(m[code]==id)
                    flag=1;
                    
            }
        }
        if(flag==1)
            printf("Scenario #%d: impossible\n",i);
        else
           printf("Scenario #%d: possible\n",i);
        
    }
    return 0;
}
