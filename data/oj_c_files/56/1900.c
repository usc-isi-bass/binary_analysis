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
	char a,b,c,d,e;
a=getchar();
b=getchar();
c=getchar();
d=getchar();
e=getchar();
if (e<='9' && e>='0' && e!=	EOF)
putchar(e);
if (d<='9' && d>='0' && d!=	EOF)
putchar(d);
if (c<='9' && c>='0' && c!=	EOF)
putchar(c);
if (b<='9' && b>='0' && b!=	EOF)
putchar(b);
if (a<='9' && a>='0' && a!=	EOF)
putchar(a);
}