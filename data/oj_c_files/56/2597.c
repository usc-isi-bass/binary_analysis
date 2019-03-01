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
int i;
char a[]={'\0','\0','\0','\0','\0','\0'};
scanf("%s",a);
for(i=0;i<6;i++)
if(a[5-i])
printf("%c",a[5-i]);
return 0;
}