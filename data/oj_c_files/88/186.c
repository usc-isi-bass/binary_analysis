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
  int i,n;
  char *p;
  p=(char*)malloc(30*sizeof(char));
  gets(p);
  n=strlen(p);
  for(i=0;i<n;i++)
  {
   if(*(p+i)>='0'&&*(p+i)<='9')
    printf("%c",*(p+i));
   if((*(p+i)<'0'||*(p+i)>'9')&&(*(p+i-1)>='0'&&*(p+i-1)<='9'))
    printf("\n");
  }
  free(p);
}