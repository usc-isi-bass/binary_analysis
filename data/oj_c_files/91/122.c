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
{char *p,x[101],fir;
 gets(x);
 fir=x[0];
 for(p=x;*(p+1)!='\0';p++)
	 *p=*p+*(p+1);
 *p=*p+fir;
 printf("%s",x);
}