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
      int a,b,c[10000],d,e,f[100000];
      scanf("%d%d",&a,&b);
      while(a!=0 || b!=0)
      {
      for(d=1;d<=a;d++)
      c[d]=d;
      for(;a>=1;a--)
      {  
         e=b%a;
         if(e==0)
         e=a;
          for(d=1;d<=a;d++)
          f[d]=c[d];
         for(d=1;d<=(a-e);d++)
           c[d]=c[e+d];
         for(d=a-e+1;d<=a-1;d++)
           c[d]=f[d-(a-e)];
      }
      printf("%d\n",c[1]);
      scanf("%d%d",&a,&b);
      } 
     
      getchar();
      getchar();
      }