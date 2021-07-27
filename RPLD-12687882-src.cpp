#include<cstdio>
#include<map>
using namespace std;
int main()
{
    int t,i,id,code,n,r,j,flag;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        flag=0;
        map<int,int>m;
        scanf("%d %d",&n,&r);
        for(j=0;j<r;j++)
        {
            scanf("%d %d",&id,&code);
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
