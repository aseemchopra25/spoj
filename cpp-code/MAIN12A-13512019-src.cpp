#include<cstdio>
int ans[1000010];
void pre()
{
    ans[1]=1;
    int index=1,count=0,temp,val=2;
    for(int i=2;i<=1000000;)
    {
        count=0;
        temp=ans[index];
        for(int j=i;count<temp;j++,count++)
        {
            ans[j]=val;
            i++;
            
        }
        index++;
        val++;
        
        
    }


}
int main()
{
    pre();
    int t,n;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%d",&n);
        printf("Case #%d: %d\n",i,ans[n]);
    
    }
    return 0;
}