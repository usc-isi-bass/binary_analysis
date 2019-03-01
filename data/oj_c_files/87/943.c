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
{int a,b,c,d,e,f,s;
while (1){scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);if(!(a+b+c+d+e+f))break;
s=3600*(12+d-a)+60*(e-b)+f-c;printf("%d\n",s);
}}