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
  char string[300][20];
  int i,j=0,k,l[300],n=0;
  while((scanf("%s ",string[n]))!=EOF)
	  n++;
  for(i=0;i<n;i++)
	  l[i]=strlen(string[i]);
  for(k=0;k<n-1;k++)
     printf("%d,",l[k]);
  printf("%d",l[n-1]);
}