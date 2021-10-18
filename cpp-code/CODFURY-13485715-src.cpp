#include<cstdio>
#include<cstring>
int main()
{
    
    int planets,bots,i,t,counter;
    
    
    int sump,sumb,ansp,ansb;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&planets,&bots);
        
        int a[planets+1];
      
        for(i=1;i<=planets;i++)
            scanf("%d",&a[i]);
           
        
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
        printf("%d %d\n",ansb,ansp);
        
        
        
        
    }
    return 0;
}