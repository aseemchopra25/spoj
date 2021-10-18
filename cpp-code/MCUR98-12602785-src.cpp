#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<string>
#include<map>
#include<iomanip>
#include<cmath>
#include<cctype>
#include<cstdlib>
using namespace std;
bool b[1000001];
int sumdig(int i)
{
    int sum=0,temp=i;
    while(i!=0)
    {
        sum+=i%10;
        i/=10;
    }
    return sum+temp;
}
void mark(bool b[],int i)
{
    int s=sumdig(i);
    while(s<1000000 && b[s]==0)
    {
        b[s]=1;
        s=sumdig(s);
    }
}
int main()
{
    int i=1;
    while(i<1000000)
    {
        if(b[i]==0)
        {
            printf("%d\n",i);
            mark(b,i);
        }
        i++;
    }
    return 0;
    
}