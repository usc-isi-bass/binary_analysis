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
{
  char *p;
  int i;
  p=malloc(31*sizeof(char));
  gets(p);
  for(i=0;i<31;i++)
  {
    if(*(p+i)=='\0')break;
    else if(*(p+i)>47&&*(p+i)<58)printf("%c",*(p+i));
    if(*(p+i+1)<48||*(p+i+1)>57)printf("\n");
  }
}