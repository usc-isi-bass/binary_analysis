#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct human
{
       char ch[7];
       float tall;
       };
main()
{
      int n,m,s,i,j;
      int q=0;
      int x=0;
      scanf("%d",&n);
      struct human hu[n],Hn[n],Hu[n];
      for(i=0;i<n;i++)
      {
          scanf("%s %f\n",hu[i].ch,&hu[i].tall);
      }
       for(i=0;i<n;i++)
      {
         if(strcmp(hu[i].ch,"male")==0)
          {Hn[q]=hu[i];
           q++;}
         else 
          {Hu[x]=hu[i];
           x++;}
       }
       for(i=0;i<q;i++)
       {m=i;
         for(j=i+1;j<q;j++)
          {if(Hn[j].tall<Hn[m].tall)
            m=j;
          }
           if(i==0)
              printf("%.2f",Hn[m].tall);
           if(i!=0) 
              printf(" %.2f",Hn[m].tall);
         Hn[m].tall=Hn[i].tall;
       }
       
        for(i=0;i<x;i++)
         {s=i;
           for(j=i+1;j<x;j++)
            {if(Hu[j].tall>Hu[s].tall){
             s=j;}
            }
         printf(" %.2f",Hu[s].tall);
         Hu[s].tall=Hu[i].tall;
         }
       
}         
                
                
              
     