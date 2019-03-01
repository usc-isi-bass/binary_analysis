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
{ char a[100][20],s;
  int n=0,i,t=0;

  do
  { scanf("%s",a[n]);
  n++;}
  while((s=getchar())!='\n');

  for(i=n-1;i>=0;i--)
  {  if(t>0) printf(" ");
      printf("%s",a[i]);
	  t++;}
	  
}