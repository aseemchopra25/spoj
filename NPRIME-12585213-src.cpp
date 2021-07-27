#include<iostream>
#define _ std::
#define max 1299710
int store[100001];bool arr[max];int main(){int x=1,i;for(i=2;i<max;i++){if(arr[i]==0){store[x]=i;int j=2;while(j*i<max){arr[j*i]=1;j++;}x++;}}int n;while(_ cin>>n)_ cout<<store[n]<<_ endl;return 0;}