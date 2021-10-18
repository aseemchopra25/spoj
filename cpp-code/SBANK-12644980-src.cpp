#include<cstdio>
#include<map>
#include<string>
using namespace std;
map<string,int>m;
char s[64];
int main()
{
    
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        m.clear();
        scanf("%d\n",&n);
        for(int j=0;j<n;j++)
        {
            fgets(s,64,stdin);
            s[32]=0;
            ++m[s];
            
        }
        for(map<string,int>::iterator it=m.begin();it!=m.end();it++)
            printf("%s%d\n",it->first.c_str(),it->second);
        if(t)puts("");
        
        
        
    }
    return 0;
}