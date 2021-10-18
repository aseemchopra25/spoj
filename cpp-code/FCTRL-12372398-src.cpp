#include<iostream>
#include<cmath>
using namespace std;
int main()
{ long long n,x,sum,j;
    cin>>n;
    for(long long i=0;i<n;i++)
    { cin>>x;
        j=1;
        sum=0;
        while(x/pow(5,j)>=1)
        { sum=sum+(x/pow(5,j));
            j++;
        }
        cout<<sum<<endl;
        
    }
    return 0;
}
