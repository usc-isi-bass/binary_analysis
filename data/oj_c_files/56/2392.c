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
{
  char a,b,c,d,e;
  a=b=c=d=e=0;
  scanf("%c%c%c%c%c",&a,&b,&c,&d,&e);
  if(e!='\n'&&e)
    putchar(e);
  if(d!='\n'&&d)
    putchar(d);
  if(c!='\n'&&c)
    putchar(c);
  if(b!='\n'&&b)
    putchar(b);
  putchar(a);
}