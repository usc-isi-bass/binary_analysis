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
char a[3000],*p=a;
int i;
gets(a);
for(i=0;;i++)
{
if(*p=='\0')
{
printf("%d",i);
goto z;
}
else if(*p==' ')
{
printf("%d",i);
p++;
break;
}
else p++;
}
for(;;)
{
for(i=0;;i++)
{
if(*p=='\0')
{
printf(",%d",i);
goto z;
}
else if(*p==' '&&i==0)
{
p++;
break;
}
else if(*p==' ')
{
printf(",%d",i);
p++;
break;
}
else p++;
}
}
z: ;
}