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

void main()
{
   int n, m, i, s,j=-1;
   while(j!=0)
   {
	   s=0;
	   scanf("%d %d", &n,&m);
	   if(m==0)j=0;
	   else
		   if(n==1)printf("1\n");

	       else
		   {
		       j=-1;
	           for(i=2; i<=n; i++)s=(s+m)%i;
               printf ("%d\n", s+1);
		   } 
   }

}