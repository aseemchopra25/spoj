#include<iostream>
using namespace std;
int main()
{ float n,sum,i;
    int count;
    while(cin>>n)
    {   count=0;
        sum=0.00;
        if(n!=0.00)
        {i=2;
            while(sum<n)
            { sum+=1.0/(i);
                i++;
                count=count+1;
            }
            cout<<count<<" card(s)"<<endl;
        }
        else
            break;
    }
    return 0;
}



        