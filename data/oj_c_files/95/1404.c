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
 char c1[82],c2[82];
 int i,l1,l2,t;
 gets(c1);
 gets(c2);
 l1 = strlen (c1);
 l2 = strlen (c2);
 for (i = 0;i < l1;i++)
  if (c1[i] <= 'Z')
   c1[i] += 32;
 for (i = 0;i < l2;i++)
  if (c2[i] <= 'Z')
   c2[i] += 32;
 t = strcmp(c1,c2);
 if (t == 0)
  printf("=\n");
 else if (t > 0)
  printf(">\n");
 else if (t < 0)
  printf("<\n");
 return 0;
}