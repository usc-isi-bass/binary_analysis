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
{ int i=0,x[15],y[15],a,j=0;
 scanf("%d %d",&x[0],&y[0]);
 for (i=0;x[i]>1;i++)
	 x[i+1]=x[i]/2;
 a=i;
 for (i=0;;i++)
 { y[i+1]=y[i]/2;
   for (j=0;j<=a;j++)
     if (x[j]==y[i]) break;
   if (x[j]==y[i]) break;
 }
 printf("%d\n",x[j]);
}