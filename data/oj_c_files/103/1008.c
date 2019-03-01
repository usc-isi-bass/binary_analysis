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
  char s[1000];
  int i,n=1;
  gets(s);
  if (s[0]>='a') s[0]+='A'-'a';
  for (i=1;s[i];i++)
  {
    if (s[i]>='a') s[i]+='A'-'a';
    if (s[i]==s[i-1]) n++;
    else
    {
      printf("(%c,%d)",s[i-1],n);
      n=1;
    }
  }
  printf("(%c,%d)",s[i-1],n);
}