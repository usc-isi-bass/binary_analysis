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

int main()
{ char *p1,*p2,a[100];
  int n,i;
  gets(a);
  n=strlen(a);
  p1=&a[0];
  p2=&a[1];
  for (i=0;i<=(n-2);i++)
    {printf("%c",*p1+*p2);p1++;p2++;}
  p1=&a[0];p2=&a[n-1];
  printf("%c",*p1+*p2);


}