#include<cstdio>
#include<cmath>
using namespace std;
void fastread( long long int *a){
    char c=0;
    while(c<33){
        c=getchar_unlocked();}
    *a=0;
    while(c>33){
        *a=*a*10+c-'0';
        c=getchar_unlocked();
    }
}

int main()
{
    int t;
    long long int n,l;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        fastread(&n);
        l=floor((sqrt(4+4*n)-2)/2);
        printf("Case %d: %lld\n",i,l);
    
    }
    return 0;
}