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


 int main()
 {
     
     
     int i,j,t,n,m;
     int k[100000];
     
     scanf("%d",&n); 
     m=0;
       for (i=1;i<=n;i++)
       {k[i]=1;
           }
     
     
     for (i=1;i<=n;i++)
     {    t=0;
          for (j=2;j<i;j++)
          {  
              
              if ((i%j)!=0)
              {t=t+1;}
           }
         if(t==(i-2))
         {k[i]=0;} 
     
           if((k[i]==0)&&(k[i-2]==0)&&(i-2)>1)
           {printf("%d %d\n",(i-2),i);
           m=m+1;} 
     }
     
     
     if(m==0)
     {printf("empty");}
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
    
     }
