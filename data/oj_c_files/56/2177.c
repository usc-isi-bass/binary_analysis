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
  int x,i=0,l,a[5];
  scanf("%d",&x);
 while  (x>0)
  {
	 a[i]=x-x/10*10;
	 x=x/10;
	 i++;
  }
  l=i;
  for (i=0;i<l;i++)
  printf("%d",a[i]);
}