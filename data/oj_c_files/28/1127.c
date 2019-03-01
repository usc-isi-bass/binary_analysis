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
char a[300][50]={'0'};
char b;
int max=0,min=0,i;
for(i=0;;i++)
{
scanf("%s",a[i]);
scanf("%c",&b);
if(b==10)
break;
}
printf("%d", strlen(a[0]));
for(i=1;i<300;i++)
{
if(strlen(a[i])!=0)
printf(",%d", strlen(a[i]));
else break;
}
return 0;
}