#include<cmath>
#include<string>
#include<iostream>
#define _ std::
int main()
{int a[10][4];for(int i=0;i<10;i++)for(int j=0;j<4;j++)a[i][j]=(int)pow(i,j+1)%10;_ string s;int t,x;char c;long long int y;_ cin>>t;for(int i=0;i<t;i++){_ cin>>s>>y;c=s.at(s.length()-1);x=c-'0';if(y==0 && x!=0)_ cout<<"1"<<_ endl;else if( y==0 && x==0)_ cout<<"0"<<_ endl;else{y=(y-1)%4;_ cout<<a[x][y]<<_ endl;}}return 0;}