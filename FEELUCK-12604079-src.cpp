#include<cstdio>
#include<string>
#include<vector>
#include<iostream>

using namespace std;
int main()
{
    int t,num,max;
    string web;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        max=0;
        vector<string>webs;
        vector<int>totals;
        for(int i=0;i<10;i++)
        {
            cin>>web>>num;
            webs.push_back(web);
            totals.push_back(num);
            if(num>max)
                max=num;
            
        }
        printf("Case #%d:\n",i);
        for(int j=0;j<totals.size();j++)
        {
            if(totals[j]==max)
                cout<<webs[j]<<endl;
        }
    }
    return 0;
}