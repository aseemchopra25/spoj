#include<iostream>
#include<cstdio>
using namespace std;
int main()
{ int n;
    double sum=0,n1=0,n2=0,num;
    cin>>n;
    for(int i=0;i<n;i++)
    {  sum=0;
        cin>>num;
        for(double j=1;j<=num;j++)
        {   n1=j*j-j+1;
            n2=(j+1)*(j+1)-(j+1)+1;
            sum+=j/(n1*n2);
        }
        printf("%0.5f\n",sum);
        
    }
    return 0;
}