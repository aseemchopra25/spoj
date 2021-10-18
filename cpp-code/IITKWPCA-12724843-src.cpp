#include<cstdio>
#include<string>
#include<iostream>
#include<map>
using namespace std;
#define pc(x) putchar_unlocked(x);
inline void writeInt (int n)
{
    int N = n, rev, count = 0;
    rev = N;
    if (N == 0) { pc('0'); pc('\n'); return ;}
    while ((rev % 10) == 0) { count++; rev /= 10;} //obtain the count of the number of 0s
    rev = 0;
    while (N != 0) { rev = (rev<<3) + (rev<<1) + N % 10; N /= 10;}  //store reverse of N in rev
    while (rev != 0) { pc(rev % 10 + '0'); rev /= 10;}
    while (count--) pc('0');
}
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
        writeInt((int)m.size());
        pc('\n');
        
        
    }
    return 0;
}