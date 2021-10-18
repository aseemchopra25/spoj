#include<iostream>
#include<string>
using namespace std;
int main()
{ int t,l,flag=0;
    string s;
    cin>>t;
    for(int i=0;i<t;i++)
    {   cin>>s;
        flag=0;
        l=(int)(s.length());
       
        if(l==1)
        {   flag=1;
            goto cond;
        }
        
           for(int j=0;j<l/2;j++)
            {
                
                
            if(s.at(j)!=s.at(l-1-j))
           
            { flag=0;
                break;
            }
            
            else flag=1;
            }
        goto cond;
            
        
    cond: if(flag==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        
    }
    return 0;
}