#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int intback(string& s)
{
	int ten=1;
	int b=0;
	int i;
	for(i=(int)s.size()-1;i>=0;i--)
	{
		b=b+ (s[i]-'0')*ten;
		ten=ten*10;
	}
	return b;
}
bool checknumber(string& s)
{
	
	for(int i=0;i<s.size();i++)
		if(s[i]<'0' || s[i]>'9')
			return false;
    
	return true;
}
int main()
{
	int k,t,n1,n2,n3;
	string s1,s2,s3;
	cin>>t;
	char ch;
	for(k=1;k<=t;k++)
	{
		cin>>s1>>ch>>s2>>ch>>s3;
		if(checknumber(s1)==false)
		{
			n2=intback(s2);
			n3=intback(s3);
			n1=n3-n2;
			cout<<n1<<" + "<<n2<<" = "<<n3<<endl;
		}
		else
			if(checknumber(s2)==false)
			{
				n1=intback(s1);
				n3=intback(s3);
				n2=n3-n1;
				cout<<n1<<" + "<<n2<<" = "<<n3<<endl;
			}
			else
			{
				n1=intback(s1);
				n2=intback(s2);
				n3=n1+n2;
				cout<<n1<<" + "<<n2<<" = "<<n3<<endl;
			}
	}
	return 0;
}