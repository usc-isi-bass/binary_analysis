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
{
 int i,d,k,*p,j;
 scanf("%d",&k);
 p=(int *)malloc(k*sizeof(int));
 for(i=0;i<k;i++)
   scanf("%d",&p[i]);
 scanf("%d",&d);
 for(i=0;i<k;i++)
   {
    if(p[i]==d)
     {
      for(j=i;j<k-1;j++)
         p[j]=p[j+1];
      k--;
      i--;
     }
   }
 int y=0;
 for(i=0;i<k;i++)
  {
   if(y!=0)
     printf(" ");
   printf("%d",p[i]);
   y=1;
  } 
 free(p);
} 