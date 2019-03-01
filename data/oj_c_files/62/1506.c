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
int i;
char a[10000],*p;
gets(a);
p=a;
for(i=0;*(p+i)!='\0';i++)
{
if(*(p+i)==' ')
{
printf(" ");
for(i=i+1;*(p+i)==' ';i++);
i=i-1;
}
else{printf("%c",*(p+i));}
}
}