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

main()
{
      char a[10],b[10];
      gets(a);
      int i,l;
      l=strlen(a);
      for (i=0;i<l;i++)
      {
          b[l-i-1]=a[i];
      }
      b[l]='\0';
      puts(b);
      getchar();
      getchar();
}