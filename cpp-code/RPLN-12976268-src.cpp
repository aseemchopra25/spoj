#include<cstdio>
#include<cmath>
#include<climits>
using namespace std;
inline void fastRead_int(int *a)
{
    register char c=0;
    while (c<33) c=getchar_unlocked();
    *a=0;
    while (c>33)
    {
        *a=*a*10+c-'0';
        c=getchar_unlocked();
    }
}
int minval(int x, int y)
{
    return (x<y)?x:y;
}
int getmid(int s, int e)
{
    return s+(e-s)/2;
}
int RMQUtil(int *st,int ss,int se,int qs,int qe,int index)
{
    if(qs<=ss && qe>=se)
        return st[index];
    if(se<qs || ss>qe)
        return INT_MAX;
    int mid=getmid(ss, se);
    return minval(RMQUtil(st, ss, mid, qs, qe, 2*index+1),
                  RMQUtil(st, mid+1, se, qs, qe, 2*index+2));
    
}
int RMQ(int *st,int n,int qs,int qe)
{
    return RMQUtil(st,0,n-1,qs,qe,0);
}
int constructSTUtil(int a[],int ss,int se,int *st,int si)
{
    if(ss==se)
    {
        st[si]=a[ss];
        return a[ss];
        
    }
    int mid=getmid(ss,se);
    st[si]=minval(constructSTUtil(a, ss, mid, st, si*2+1),
                  constructSTUtil(a, mid+1, se, st, si*2+2));
    return st[si];
                  
}

int *constructST(int a[],int n)
{
    int x=(int)(ceil(log2(n)));
    int max_size=2*(int)pow(2,x)-1;
    int *st=new int[max_size];
    constructSTUtil(a,0,n-1,st,0);
    return st;
}


int main()
{
    int t,n,q,qs,qe;
    fastRead_int(&t);
    for(int i=1;i<=t;i++)
    {
        fastRead_int(&n);
        fastRead_int(&q);
        int a[n];
        
        for(int j=0;j<n;j++)
            scanf("%d",&a[j]);
        int *st=constructST(a,n);
        printf("Scenario #%d:\n",i);
        for(int j=0;j<q;j++)
        {
        fastRead_int(&qs);
        fastRead_int(&qe);
        qs--;
        qe--;
        printf("%d\n",RMQ(st,n,qs,qe));
        }
        
    }
    return 0;
    
}