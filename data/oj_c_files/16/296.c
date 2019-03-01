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
  char a[7],i,j;
  scanf("%s",&a);
  for(i = 1; a[i] !='\0'; i++)
     j=i;

  for( i = j; i>=0; i--)
     printf("%c",a[i]);

  return 0;
}

  