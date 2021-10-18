#include<cstdio>
using namespace std;
int main()
{ int n,a;
	long long int b;
	scanf("%d",&n);
    while(n--)
    {
		scanf("%d %lld",&a,&b);
		a=a%10;
		if(b==0){a=1;goto c;}
		if(a==1||a==5||a==6||a==0)goto c;
		switch(b%4)
		{ case 0:
                a=a%2==0?6:1;
                break;
            case 1:
                break;
            case 2:
                a=(a*a)%10;
                break;
            case 3:
                a=(a*a*a)%10;
                break;
        }
    c:printf("%d\n",a);
        
    }
    return 0;
}