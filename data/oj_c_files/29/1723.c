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
   int m,n[100];
   scanf("%d",&m);
   int i,j;
   float sum;
   int a,b,t;
   for(i=0;i<m;i++)
    {
     scanf("%d",&n[i]);
     sum=0;
     a=1;
     b=2;
     for(j=1;j<=n[i];j++)
     { 
       sum=sum+(float)b/a;
       t=a+b;
       a=b;
       b=t;
     }
     printf("%.3f\n",sum);
  }

 }