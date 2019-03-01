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
{int a;
char b,c,d,e;
scanf("%d",&a);
b=(int)(a/1000);
c=(int)((a-1000*b)/100);
d=(int)(a/10)-c*10-100*b;
e=a-10*d-100*c-1000*b;
if(b!=0)
printf("%d%d%d%d",e,d,c,b);
if(b==0&&c!=0)
printf("%d%d%d",e,d,c);
if(a>9&&a<100)
printf("%d%d",e,d);
if(a<10)
printf("%d",e);
}
