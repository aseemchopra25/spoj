#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{ int n;
    float x,x1[251],y1[251],x2[251],y2[251];
	cin>>n;
    for(int i=0;i<n;i++)
    {
      cin>>x1[i]>>y1[i]>>x2[i]>>y2[i];
        x=(x1[i]-x2[i])*(x1[i]-x2[i])+(y1[i]-y2[i])*(y1[i]-y2[i]);
        printf("%.6f\n",sqrt(x)/2);
    }
    return 0;
}

        
