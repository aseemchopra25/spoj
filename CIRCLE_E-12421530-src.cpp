#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{ double n,a,b,c;
    double sum,root;
    cin>>n;
    for(int i=0;i<n;i++)
    {   cin>>a>>b>>c;
        a=1/a;
        b=1/b;
        c=1/c;
        sum=a+b+c;
        root=(double)(2*sqrt(a*b+b*c+c*a));
        printf("%.6lf\n",1/(sum+root));
    }
    return 0;
}