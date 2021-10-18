#include<iostream>
#include<iomanip>
#include<map>
using namespace std;
int main()
{
    map<int,int>friends;
    int num,input,buff;
    cin>>num;
    for(int i=0;i<num;i++)
    {   cin>>input;
        if(friends.count(input)==0)
        friends[input]=1;
    
        cin>>buff;
        for(int j=0;j<buff;j++)
        {  cin>>input;
        if(friends.count(input)==0)
            friends[input]=1;
        }
        
    }
    cout<<friends.size()-num<<endl;
    return 0;
    
}