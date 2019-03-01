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
{int n,i;
scanf("%d",&n);
for(i=0;n>=100;i++)
{n=n-100;}
  printf("%d\n",i);
for(i=0;n>=50;i++)
{n=n-50;}
  printf("%d\n",i);
for(i=0;n>=20;i++)
{n=n-20;}
  printf("%d\n",i);
for(i=0;n>=10;i++)
{n=n-10;}
  printf("%d\n",i);
for(i=0;n>=5;i++)
{n=n-5;}
  printf("%d\n",i);
  printf("%d\n",n);

return 0;
}