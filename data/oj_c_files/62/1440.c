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
  char *a,*b;
  int i=0,k=-1,q=0,n,m=0;
  a=(char*)malloc(100000*sizeof(char));
  b=(char*)malloc(100000*sizeof(char));
  scanf ("%c",a);
  while (*(a+i)!='\n')
  { i++; scanf ("%c",a+i);  }
  n=i;
  for (i=0;i<n;i++)
  {
  	if (*(a+i)!=32) {q=1;k++;m++;}
	else 
	{
	if (q==1) {k++;m++;}
	 q=0;
    } 
	*(b+k)=*(a+i);
  }
  for (i=0;i<m;i++)
  {
  	printf ("%c",*(b+i));
  }
}