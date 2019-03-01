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
{char c[31],*p;
int i,j,k;
gets(c);

p=c;
for(;*p!='\0';p++)
{if(((int)*p>47&&(int)*p<58)&&((int)*(p+1)>47&&(int)*(p+1)<58))
printf("%c",*p);
else
if(((int)*p>47&&(int)*p<58)&&((int)*(p+1)<48||(int)*(p+1)>57))
printf("%c\n",*p);}
}