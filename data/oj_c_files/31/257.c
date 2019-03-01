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
      char a[3000][50],end[5]="end";int i=-1;
      do
      {
           i++;
           gets(a[i]);
      }
      while(a[i][0]!='e');
      i--;
      while(i>=0)
      {
      puts(a[i]);
      i--;
      }
}
