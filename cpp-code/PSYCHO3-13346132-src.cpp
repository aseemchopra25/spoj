#include<iostream>
#include<cmath>
#include<cstdio>
#include<map>
#include<cstring>


using namespace std;



map<int,int>m;

void f()
{
    int arr[]={4,9,16,25,36,49,64,81,100,121,144,169,180,196,225,252,256,289,300,324, 361,396,400,441,450,468,484,529,576,588,612,625,676,684,700,720,729,784,828,841,882,900,961,980,1008,1024,1044,1089,1100,0};
    int i=0;
    while(arr[i]!=0)
    {
        m[arr[i]]=1;
        i++;
    }
}

int main()
{
    f();
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k;
        scanf("%d%d",&n,&k);
        int j,p=0;
        int sum=0;
        int hello[102];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&j);
            if(m[j])
            {
                hello[p++]=j;
                sum+=j;
            }
        }
        if(k>sum)
        {
            printf("No\n");
            continue;
        }
        int ans[sum+10];
        memset(ans,0,sizeof(ans));
        ans[0]=1;
        
        for(int i=0;i<p;i++)
        {
            for(int h=sum;h>=hello[i];h--)
            {
                ans[h]|=ans[h-hello[i]];
            }
        }
        
        if(ans[k])
            printf("Yes\n");
        else
            printf("No\n");
    }
    
    return 0;
}