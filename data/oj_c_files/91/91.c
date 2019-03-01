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
  char s[120],t;
  int i,b;
  gets(s);
  b=strlen(s);t=s[0];
  for(i=0;i<b-1;i++)
    s[i]=s[i]+s[i+1];
    s[b-1]=s[b-1]+t;
  for(i=0;i<b;i++)
    printf("%c",s[i]);
}