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


main()

{     int n,i,s=0,flg=0;
      char p[1000][50],l[1000];
      scanf("%d",&n);
      for(i=0;i<n;i++)
         {scanf("%s",p[i]);
         l[i]=strlen(p[i]);}
      for (i=0;i<n;i++)
          {if (flg)                    //shouwei 0  
              if ((s+l[i]+1)<=80)
                 {printf(" %s",p[i]);
                 s=s+l[i]+1;}
              else 
               {
               printf("\n");
               printf("%s",p[i]);
               s=l[i];}
          else
                 {printf("%s",p[i]);
                 flg=1;
                 s=s+l[i];}
              
                       
                       }
      
     
}