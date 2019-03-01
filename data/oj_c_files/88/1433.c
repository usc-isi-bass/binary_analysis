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
   char q,*p;
   int now;
   scanf("%c",&q);
   while (!((('0'<=q) && ('9'>=q)))) 
       {  
         scanf("%c",&q);
       //  printf("%c\n",q);
         }
   long tot=0;
   while (q!='\n') 
      {
           if (('0'<=q)&& ('9'>=q))
                  { 
                          tot=tot*10+q-'0';
                          now=1;       
                  }                                    
               else if (tot!=0){
                       printf("%d\n",tot);
                       tot=0;
                       now=0;
                    }
           scanf("%c",&q);
      }    
   if( now !=0) printf("%d\n",tot);
     //      scanf("%c",&q);
     //      scanf("%c",&q);
}
