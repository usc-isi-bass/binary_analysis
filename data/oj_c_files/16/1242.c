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
int a,b,c,d,e;
scanf("%d",&a);
b=a/1000;
c=(a-1000*b)/100;
d=(a-1000*b-100*c)/10;
e=a-1000*b-100*c-10*d;
if (a==10000) printf("00001");
else b!=0?printf("%d%d%d%d",e,d,c,b):c!=0?printf("%d%d%d",e,d,c):d!=0?printf("%d%d",e,d):printf("%d",e);


return 0;
}