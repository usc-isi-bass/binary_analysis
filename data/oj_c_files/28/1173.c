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
{ int i,n,k;
  char ar[300][20];
  for (i=0;i<300;i++)
   scanf("%s",&ar[i]);
  for (i=0;i<=299;i++)
   {n=strlen(ar[i]);
    if (n!=0) {k=i;}
    else break;
    }
  for (i=0;i<=k-1;i++)
   printf("%d,",strlen(ar[i]));
  printf("%d",strlen(ar[k]));
}


