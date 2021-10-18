#include<cstdio>
#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
int dayofdate(int d, int m, int y)
{
    static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
    y -= m < 3;
    return ( y + y/4 - y/100 + y/400 + t[m-1] + d) % 7;
}

int main()
{
    int t;
    scanf("%d",&t);
    string date;
    string year;
    int y;
    for(int i=0;i<t;i++)
    {   cin>>date;
        year=date.substr(6,4);
        y=atoi(year.c_str());
        if(y<1947)
            printf("Invalid.\n");
        else
        {
            int day = dayofdate(15, 8, y);
            
            if(day==dayofdate(15,8,1947))
                printf("Yes.\n");
            else
                printf("No.\n");
        }
    }
    
    return 0;
}