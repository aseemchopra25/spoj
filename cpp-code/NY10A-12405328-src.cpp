#include<iostream>
using namespace std;
int main(){
    int p,n,count1=0,count2=0,count3=0,count4=0,count5=0,count6=0,count7=0,count8=0;
    char a[41];
    cin>>p;
    for(int i=0;i<p;i++)
    {
        cin>>n;
        cin>>a;
        count1=0;
        count2=0;
        count3=0;
        count4=0;
        count5=0;
        count7=0;
        count8=0;
        count6=0;
        for(int j=0;j<38;j++)
        {
            
            if(a[j]=='T'&&a[j+1]=='T' && a[j+2]=='T')   //TTT, TTH, THT, THH, HTT, HTH, HHT and HHH
                count1++;
            if(a[j]=='T'&&a[j+1]=='T' && a[j+2]=='H')
                count2++;
            if(a[j]=='T'&&a[j+1]=='H' && a[j+2]=='T')
                count3++;
            if(a[j]=='T'&&a[j+1]=='H' && a[j+2]=='H')
                count4++;
            if(a[j]=='H'&&a[j+1]=='T' && a[j+2]=='T')
                count5++;
            if(a[j]=='H'&&a[j+1]=='T' && a[j+2]=='H')
                count6++;
            if(a[j]=='H'&&a[j+1]=='H' && a[j+2]=='T')
                count7++;
            if(a[j]=='H'&&a[j+1]=='H' && a[j+2]=='H')
                count8++;
            
        }
        cout<<n<<" "<<count1<<" "<<count2<<" "<<count3<<" "<<count4<<" "<<count5<<" "<<count6<<" "<<count7<<" "<<count8<<endl;
        
    }
    return 0;
}