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


void f(char *p)
{
     int i;
     for (i=0;i<=29;i++)
     {
     if ((*p)>='0'&&(*p)<='9')
     printf("%c",*p);
     else if (*(p+1)>='0'&&*(p+1)<='9')
     printf("\n");
     p++;
     }
}




int main(int argc, char *argv[])
{
  char a[30];
  gets(a);
  char *p;
  p=a;
  f(p);	
  return 0;
}
