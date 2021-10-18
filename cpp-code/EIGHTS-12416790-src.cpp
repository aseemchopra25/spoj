#include<cstdio>
using namespace std;
int main(){
    long long int t,n;
    scanf("%lld",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%lld",&n);
        printf("%lld\n",192+(n-1)*250);
        
    }
    return 0;
}