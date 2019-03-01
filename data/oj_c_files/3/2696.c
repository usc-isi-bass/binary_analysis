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
 int n,k,i,j,a=0;
 scanf("%d %d",&n,&k);
 int *p;
 p=(int *)malloc(n*sizeof(int));
 for(i=0;i<n;i++)
   scanf("%d",&p[i]);
 for(i=0;i<n-1;i++)
   for(j=i+1;j<n;j++)
     {
      if(p[i]+p[j]==k)
        a=1;
     }
 if(a==1)
   printf("yes");
 else
   printf("no");
 
} 