#include<cstdio>
#include<map>
using namespace std;
map<int,int>::iterator it;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        map<int,int>m;
        int n;
        scanf("%d",&n);
        int val;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&val);
            
            m[val]++; // divisor--->frequency
            
        }
        int ans=-1,max=-1;
        for(it=m.begin();it!=m.end();it++)
        {
            if(it->second > max && (it->second)%(it->first)==0)
            {
                max=it->second;
                ans=it->first;
            }
        
            
            
        }
        printf("%d\n",ans);
        
    }
    return 0;
}