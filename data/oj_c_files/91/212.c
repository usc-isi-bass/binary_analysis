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
   char *p,*a,*b;
   p=(char *)malloc(200*sizeof(char));
   gets(p);
   for(a=p,b=p+1;b<p+strlen(p);a++,b++)
	   printf("%c",*a+*b);
   printf("%c",*p+*a);
}