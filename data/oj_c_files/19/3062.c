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
{int i,j=0,n;
 char x[100][100];
 for (i=0;i<100;i++)
 {scanf("%s",x[i]);
  if (strlen(x[i])==0)
	  break;
 }
 n=i-2;
 for (i=0;i<n;i++)
 {    if(j)
     printf(" ");
     if (strcmp(x[i],x[n])==0)
    printf("%s",x[n+1]);
else
  printf("%s",x[i]);
 j++; }
 }



