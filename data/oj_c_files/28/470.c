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
  int i,n,x,p,q,j;
  int a[400];
  char s[10000];
  gets(s);
  x=strlen(s);
  p=1;
  a[0]=-1;
  for (i=1;i<=x-1;i++)
  {
   if (s[i]==32)
   {
    a[p]=i;
    p=p+1;
   }
  }
  for (i=1;i<=p-1;i++)
  {
	  if ((a[i]-a[i-1]-1)!=0)
    printf("%d,",a[i]-a[i-1]-1);  
  }
  printf("%d",x-a[p-1]-1);
}