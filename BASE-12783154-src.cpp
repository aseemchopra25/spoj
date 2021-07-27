#include<cstdio>
#include<string>
#include<iostream>
#include<map>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{
    map<char,int>m;
    map<int,char>invm;
    m['0']=0;
    m['1']=1;
    m['2']=2;
    m['3']=3;
    m['4']=4;
    m['5']=5;
    m['6']=6;
    m['7']=7;
    m['8']=8;
    m['9']=9;
    m['A']=10;
    m['B']=11;
    m['C']=12;
    m['D']=13;
    m['E']=14;
    m['F']=15;
    map<char,int>::iterator it;
    for(it=m.begin();it!=m.end();++it)
    {
        invm[it->second]=it->first;
    }
    string s;
    
    int x,y;
    
    
    while(cin>>s>>x>>y)
    {
       
        int len,i,lennew;
        long long int sum=0;
        char ans[10000];
        char revans[10000];
        len=(int)s.length();
        for(i=len-1;i>=0;i--)
            sum+=m[s.at(i)]*pow(x,len-1-i);
        
        if(y==10)
            printf("%lld\n",sum);
        else
        {
            for(i=0;sum!=0;i++)
            {
                ans[i]=invm[sum%y];
                sum/=y;
            }
            ans[i]='\0';
           
            lennew=(int)strlen(ans);
            for(i=lennew-1;i>=0;i--)
            {
                revans[lennew-1-i]=ans[i];
            }
            revans[lennew]='\0';
            if(lennew<=7)
                puts(revans);
            else
                puts("ERROR");
        }
        cin.clear();
        cin.clear();
        cin.clear();
    }
    return 0;
}