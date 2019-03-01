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
      int n,i,j;
      scanf("%d",&n);
      int *p=(int *)malloc(n*sizeof(int));
      for(i=0;i<n;i++)
      {
                      p[i]=0;
                      }
      for(;;)
      {
             scanf("%d %d",&i,&j);
             if(i==0&&j==0) break;
             else
             {
                 p[j]++;
                 p[i]=-n;
                 }
      }
      for(i=0;i<n;i++)
      {
                      if(p[i]==n-1) printf("%d",i);
      }
      
}