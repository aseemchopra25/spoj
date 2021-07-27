#include<cstdio>
#include<string>
#include<cstring>
int main()  //  aaacabbaca
{
    int t,index;
    scanf("%d",&t);
    while(t--)
    {
        index=0;
        char s[100009];
        scanf("%s",s);
        int len=(int)strlen(s);
        s[len]='1';
        s[len+1]='\0';
        char temp[100009];
        for(int i=1;i<=len;i++)
            if(s[i]!=s[i-1])
            {
                temp[index]=s[i-1];
                index++;
            }
        temp[index]='\0';
        len=(int)strlen(temp);
        int v=(len-1)>>1,flag=0;
        for(int i=0;i<=v;i++)
        {
            if(temp[i]!=temp[len-1-i])
            {
                flag=1;
                break;
            }
                
        }
        if(flag)
            puts("NO");
        else
            puts("YES");
        
    }
    return 0;
}