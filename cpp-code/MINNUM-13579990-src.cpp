#include<cstdio>
#include<cstring>
#define debug(x) printf("%d",x)
int len;
inline void plusone(int a[])
{
    int carry=0;
    a[len-1]+=1;
    for(int i=len-1;i>=0;i--)
    {
        a[i]+=carry;
        if(a[i]>=10)
        {
            carry=a[i]/10;
            a[i]=a[i]%10;
        }
        else
            break;
    }
    
}
inline void divide(int a[])
{
    int ans[len];
    int carry=0;
    for(int i=0;i<len;i++)
    {
        a[i]+=carry*10;
        ans[i]=a[i]/9;
        
        carry=a[i]%9;
        
    }
    if(carry>0)
        plusone(ans);
    if(ans[0]==0)
        for(int i=1;i<len;i++)
            printf("%d",ans[i]);
    else
        for(int i=0;i<len;i++)
            printf("%d",ans[i]);
    
    printf("\n");
    
    
    
    
}
int main()
{
    
    while(1)
    {
        char s[100];
    scanf("%s",s);
        if(s[0]=='-')
            break;
    len=(int)strlen(s);
    if(len==1 && s[0]=='0')
        puts("0");
    else
    {
        int a[len];
        for(int i=0;i<len;i++)
            a[i]=s[i]-'0';
        divide(a);
        
       
        
        
    }
    }
    return 0;
        
}