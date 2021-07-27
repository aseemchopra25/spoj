#include<cstdio>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
    int n1,n2,val,sum,ans,prev1,prev2,last=1000000;
    map<int,int>m1;
    map<int,int>m2;
    map<int,int>::iterator it1,it2;
    int end1=0;
    int end2=0;
    scanf("%d",&n1);
    while(n1!=0)
    {
        last=1000000;
        ans=0;
        sum=0;
        m1.clear();
        m2.clear();
        for(int i=0;i<n1;i++)
        {
            scanf("%d",&val);
            sum+=val;
            m1[val]=sum;
            
        }
        sum=0;
        
        prev1=0;
        prev2=0;
        scanf("%d",&n2);
        
        for(int i=0;i<n2;i++)
        {
            scanf("%d",&val);
            sum+=val;
            m2[val]=sum;
            if(m1.count(val)!=0)
            {
                last=val;
                ans+=max(m1[val]-prev1,m2[val]-prev2);
                prev1=m1[val];
                prev2=m2[val];
                
                         
            }
            
        }
        map<int,int>::reverse_iterator rev1,rev2;
        if(last==1000000)
        {
            rev1=m1.rbegin();
            rev2=m2.rbegin();
            ans=max(rev1->second,rev2->second);
            goto c;
            
        }
        end1=0;
        end2=0;
        for(it1=m1.upper_bound(last);it1!=m1.end();++it1)
            end1+=it1->first;
        for(it2=m2.upper_bound(last);it2!=m2.end();++it2)
            end2+=it2->first;
        ans+=max(end1,end2);
        
        c:
        printf("%d\n",ans);
        
        
      scanf("%d",&n1);
    }
    return 0;
}