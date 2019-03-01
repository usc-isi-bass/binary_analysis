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
int ace,a,b,c,d;
scanf("%d",&ace);
a=(int)(ace/1000);
b=(int)((ace-1000*a)/100);
c=(int)((ace-1000*a-100*b)/10);
d=(ace-1000*a-100*b-10*c);

if(ace>=1000) printf("%d%d%d%d",d,c,b,a);
else 
if (ace>=100) printf("%d%d%d",d,c,b);
else 
if (ace>=10) printf("%d%d",d,c);
else 
printf("%d",d);

}
