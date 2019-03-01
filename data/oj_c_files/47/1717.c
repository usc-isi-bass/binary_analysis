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
{int *i,*j,n,x[100],y[100];
 scanf("%d",&n);
 for (i=x;i<x+n;i++)
	 scanf("%d",i);
 for (j=y,i=i-1;i>=x;i--,j++)
	 *j=*i;
 for (i=x,j=y;i<x+n;i++,j++)
	 *i=*j;
 for (i=x;i<x+n-1;i++)
	 printf("%d ",*i);
 printf("%d",*i);
}