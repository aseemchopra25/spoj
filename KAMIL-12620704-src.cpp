#include<iostream>
#include<string>
#define _ std::
int main(){_ string s;int perm;for(int i=0;i<10;i++){perm=1;_ cin>>s;for(int j=0;j<s.length();j++){ if(s[j]=='D' || s[j]=='T' ||s[j]=='L' || s[j]=='F')perm*=2;}_ cout<<perm<<'\n';}}