#include<stdio.h>
#include<math.h>
int main(){
    long long a,b,c=1,i,j,t,n,ar[1000],m;
    ar[0]=0;ar[1]=1;ar[2]=1;
    for(i=3;i<100;i++){
        ar[i]=ar[i-1]+ar[i-2];
    }
    
    scanf("%lld",&t);
    while(t--){
        scanf("%lld %lld",&n,&m);
        long long sum=0,temp=0;
        b=0;
        a=sqrt(n);
        if(a*a==n){
            sum+=a;
            a--;
            
        }
        for(i=2;i<=a;i++){
            if(n%i==0){
                sum+=i;
                sum+=(n/i);
                
            }
        }
        sum+=1;
        sum%=m;
        a=sqrt(sum);
        if(a*a==sum){
            temp+=1;
            a--;
        }
        for(i=2;i<=a;i++){
            if(sum%i==0){
                temp+=2;
            }
        }
        temp+=1;
        
        for(i=0;i<96;i++){
            if(ar[i]==temp){
                b=1;
                break;
            }
        }
        if(b==1){
            printf("Case #%lld : YES.\n",c);
        }else{
            printf("Case #%lld : NO.\n",c);
        }
        c++;
    }
    
    return 0;
}