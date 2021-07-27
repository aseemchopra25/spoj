#include <stdio.h>

int count(int x){
    
    return 2+((3/2)*(1/(1+(1/x))));
    
}

int main(){
    
    for( int i=1 ; i-1001 ; i++ ) printf("%d %d\n",i,count(i));
    
    return 0;
    
}