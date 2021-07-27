#include<cstdio>
#include<string>
#include<cstring>
#include<iostream>
using namespace std;
int main()
{
    int t,len;
    long long int sum3;
    long long int sum7;
    char a[50005];
    int store[6]={1,3,2,6,4,5};
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        sum3=0;
        sum7=0;
        scanf("%s",a);
        len=(unsigned int)strlen(a);
        for(int j=0;j<len;j++)
        {
            sum3+=a[j]-'0';
            sum7+=(a[len-1-j]-'0')*store[j%6];
        }
        
        if(sum3%9==0 && ((a[len-2]-'0')*10+(a[len-1]-'0'))%4==0 && sum7%7==0)
            printf("Yes ");
        else
            printf("No ");
        if((((a[len-2]=='2'&& a[len-1]=='5') ||   (a[len-2]=='0'&& a[len-1]=='0') || (a[len-2]=='5'&& a[len-1]=='0') || (a[len-2]=='7' && a[len-1]=='5')) && sum3%3==0 && sum7%7==0) || a[0]=='0')
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
    
}