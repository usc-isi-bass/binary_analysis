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
  char a[100];
  int i;
  gets(a);
  int m=strlen(a);
  for(i=0;i<m;i++)
  {
    if(a[i]==' '&&a[i+1]==' ')
    printf("");
    else  printf("%c",a[i]);

  }
  return 0;
}
