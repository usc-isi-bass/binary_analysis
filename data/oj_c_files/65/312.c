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
      int n;
      scanf("%d",&n);
      int a=0,b=0;
      for (int i=0;i<n;i++)
      {
          int x,y;
          scanf("%d %d",&x,&y);
          if (x-y==-1 || x-y==2) a++;
          else if (x==y) continue;
          else b++;
          
          
      }
      if (a>b) printf("A\n");
      else if (a<b) printf("B\n");
      else printf("Tie\n");
      
      
      
      
      
      
  
}