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
 int n,k;
 int remain,last=1;
 int i;
 scanf("%d %d",&n,&k);
 for(last=1;last>0;last++)
    {
     for(remain=last*n+k,i=1;i<n;i++)
        {
          if(remain%(n-1)==0)
             remain=remain*n/(n-1)+k;
          else
             {
              last=-last;
              break;
             }
        }
      if(last>0)
        printf("%d",remain);    
      last=-last;
   }
}