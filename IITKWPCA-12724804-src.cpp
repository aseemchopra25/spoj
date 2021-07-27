#include<cstdio>
#include<string>
#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<string,int>m;
    int t,len,index,count,temp;
    string s;
    scanf("%d",&t);
    getchar();
    for(int i=0;i<t;i++)
    {
        m.clear();
        index=0;
        getline(cin,s);
        len=(int)s.length();
        while(index<len)
        {
            temp=index;
            count=0;
            while(index<len)
            {
                if(s.at(index)!=' ')
                {count++;
                    index++;}
                else break;
            }
            index++;
            if(count>0)
            m[s.substr(temp,count)];

        }
        cout<<m.size()<<endl;
        
    }
    return 0;
}