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
      int a,b,i;
      int c[100000];
      scanf("%d",&a);
      for(i=0;i<a;i++)
      {
                      scanf("%d",&c[i]);
      } 
      scanf("%d",&b);
      int k=0;
      for(i=0;i<a;i++)
      if(c[i]!=b)
      {
                 if(k==0)
                 {printf("%d",c[i]);k=1;}
                 else
                 printf(" %d",c[i]);
      }
      getchar();
      getchar(); 
}
