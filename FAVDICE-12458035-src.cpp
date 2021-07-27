#include<iostream>
#include<cstdio>

using namespace std;
int main()
{ double x,t,sum;
    cin>>t;
    for(double i=0;i<t;i++)
    { sum=0;
        cin>>x;
        for(double j=1;j<=x;j++)
        sum+=1/j;
        sum*=x;
        printf("%0.2lf\n",sum);
    }
    return 0;
}