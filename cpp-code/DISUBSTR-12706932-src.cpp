#include<cstdio>
#include<cstring>
#include<vector>
#include<string>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
    int t,len,i,j,k,comlen,p;
    long long int ans;
    string s;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        ans=0;
        string temp;
        vector<string>v;
        cin>>s;
        temp=s;
        
        len=(int)s.length();
        
        for(j=0;j<len;j++)
        {
        
            v.push_back(temp);
            temp.erase(0,1);
            
        }
        
        sort(v.begin(),v.end());
      
        ans=v[0].length();
       
        for(k=1;k<v.size();k++)
        {
            comlen=0;
            ans+=v[k].length();
            
            for(p=0;p<v[k-1].length() && p<v[k].length();p++)
            {
                if(v[k-1].at(p)==v[k].at(p))
                    comlen++;
                else break;
            }
            ans-=comlen;
            
        }
        printf("%lld\n",ans);
    
    }
    return 0;
}