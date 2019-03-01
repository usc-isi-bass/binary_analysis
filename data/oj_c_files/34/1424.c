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
int a,b,e;
scanf ("%d",&a);if (a==1) {printf ("End");goto loop_copperhead;}
loop_cobra:
e=a-(int)(a/2)*2;
if (e==0) {printf ("%d/2=%d\n",a,a/2); a=a/2;}
else {b=a*3+1;printf("%d*3+1=%d\n",a,b);a=b;}
if (a!=1) goto loop_cobra; else printf ("End");
loop_copperhead:
return 0;
}