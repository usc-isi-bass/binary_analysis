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
      int n,i,j,k,a[20000],b[20000];
      for(k=0;k<20000;k++)
      {
         a[k]=0;
         b[k]=0;
      }
      scanf("%d",&n);
      scanf("%d %d",&i,&j);
      while((i+j)!=0)
      {
           a[i]++;
           b[j]++;
           scanf("%d %d",&i,&j);           
      }      
      for(k=0;k<=n-1;k++)
         if(b[k]==n-1&&a[k]==0)
         {
             j=0;
             break;
         }
      if(j)
      printf("NOT FOUND");
      else
      printf("%d",k);
} 