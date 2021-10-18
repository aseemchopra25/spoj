#include<cstdio>
#include<cstring>

#define pc(x) putchar_unlocked(x);
inline void writeInt (int n)
{
    int N = n, rev, count = 0;
    rev = N;
    if (N == 0) { pc('0'); return ;}
    while ((rev % 10) == 0) { count++; rev /= 10;} //obtain the count of the number of 0s
    rev = 0;
    while (N != 0) { rev = (rev<<3) + (rev<<1) + N % 10; N /= 10;}  //store reverse of N in rev
    while (rev != 0) { pc(rev % 10 + '0'); rev /= 10;}
    while (count--) pc('0');
}
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
int main()
{
    
    int planets,bots,i,t,counter;
    
    
    int sump,sumb,ansp,ansb;
    fastRead_int(&t);
    while(t--)
    {
        fastRead_int(&planets);fastRead_int(&bots);
        
        int a[planets+1];
      
        for(i=1;i<=planets;i++)
            fastRead_int(&a[i]);
           
        
        sump=0;
        sumb=0;
        counter=1;
        ansp=0;
        ansb=0;
        for(i=1;i<=planets;i++)
        {
            sumb+=a[i];
            sump++;
            if(sumb>bots)
            {
                sumb-=a[counter];
                counter++;
                sump--;
            }
            if(sump>ansp)
            {
                ansp=sump;
                ansb=sumb;
                
            }
            if(sump==ansp && sumb<ansb)
                ansb=sumb;
            
        
            
         
            
        }
        
        writeInt(ansb);pc(' ');writeInt(ansp);pc('\n');
        
        
        
    }
    return 0;
}