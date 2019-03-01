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
{char a=' ',b=' ';
 int i;
for (i=1;i<100;i++)
 {a=b;
  scanf("%c", &b);
  if (b==' '&&a==' ')
	  continue;
  else printf("%c", b);
  if (b=='.')
	  break;
 }
}