#include<cstdio>
#include<map>
#include<iomanip>
using namespace std;
int main()
{
    int n,k;
    map<long long int,bool>a;
    long long int val;
    scanf("%d %d",&n,&k);
    long long count=0;
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&val);
        a[val]=true;
        
    }
    
    for(map<long long int,bool>::iterator it=a.begin();it!=a.end();++it)
    {
        if(a.find(it->first+k)!=a.end())
            count++;
    }
    printf("%lld\n",count);
    return 0;
}