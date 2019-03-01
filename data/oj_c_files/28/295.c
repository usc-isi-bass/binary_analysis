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
 int i,s;
 char a[1000];
 char *p;
 p=a;
 gets(a);
 s=0;
 for(i=0;i<=strlen(a)-1;i++)
  if(*(p+i)!=' ')
   s++;
  else
	if(*(p+i-1)!=' ')
   {
   printf("%d,",s);
   s=0;
   }
 printf("%d",s);
}