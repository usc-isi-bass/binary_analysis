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
   int a,b,i,j;
   int c[100][100];
   scanf("%d %d",&a,&b);
   for(i=0;i<a;i++)
     for(j=0;j<b;j++)
       scanf("%d",&c[i][j]);
   for(i=0;i<b;i++)
   {
      for(j=0;j<=i&&j<a;j++)
         printf("%d\n",c[j][i-j]);
   } 
   for(i=b;i<a+b-1;i++)
       {
       for(j=i+1-b;j<a&&j<=i;j++)
          printf("%d\n",c[j][i-j]); 
       }
}