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

char a, b, c, d, e;
a=getchar();
b=getchar();
c=getchar();
d=getchar();
e=getchar();
if( e >= '0' && e <= '9') putchar(e);
if( d >= '0' && d <= '9') putchar(d);
if( c >= '0' && c <= '9') putchar(c);
if( b >= '0' && b <= '9') putchar(b);
if( a >= '0' && a <= '9') putchar(a);
}
