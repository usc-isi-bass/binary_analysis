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
{int i,j,n;
 char x[100][100];
 for (i=0;i<100;i++)
 {scanf("%s",x[i]);
  if (strlen(x[i])==0)
	  break;
 }
 n=i;
 for (i=0;i<n;i++)
 {if (strcmp(x[i],x[n-2])==0)
     strcpy(x[i],x[n-1]);
 }
 printf("%s",x[0]);
 for (i=1;i<n-2;i++)
	 printf(" %s",x[i]);
}