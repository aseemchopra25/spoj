#include<cstdio>
#define x 1366662
bool a[x];int main(){a[1]=1;int i,j,count1=0;for(i=2;i<=x;i++){if(a[i]==0){for(j=2*i;j<=x;j+=i)a[j]=1;count1++;if(a[count1]==0){printf("%d ",i);}}}return 0;}