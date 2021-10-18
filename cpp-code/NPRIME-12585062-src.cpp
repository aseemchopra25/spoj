#include<iostream>
#define _ std::
int store[100001];bool arr[1299710];int main(){int x=1,i;for(i=2;i<=1299709;i++){if(arr[i]==0){store[x]=i;int j=2;while(j*i<=1299710){arr[j*i]=1;j++;}x++;}}int n;while(_ cin>>n)_ cout<<store[n]<<_ endl;return 0;}