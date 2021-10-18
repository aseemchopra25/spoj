#include<cstdio>
bool a[1000001];
#define pc(x) putchar_unlocked(x);
inline void w(int n){int N=n,r,count=0;r=N;if(N==0){pc('0');return;}while((r%10)==0){count++;r/=10;}r=0;while(N!=0){r=(r<<3)+(r<<1)+N%10;N/=10;}while(r!=0){pc(r%10+'0');r/=10;}while(count--)pc('0');pc('\n');}inline int digsum(int i){int sum=i;while(i!=0){sum+=i%10;i/=10;}return sum;}void mark(int  i){while(digsum(i)<1000000 && a[digsum(i)]==0){a[digsum(i)]=1;i=digsum(i);}}int main(){for(int i=1;i<1000000;i++){if(a[i]==0){mark (i);w(i);}}return 0;}