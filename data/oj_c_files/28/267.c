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
char a[20];
int i=1,n;
char c;
do
{
scanf("%s",a);
n=strlen(a);
if(i==1)
printf("%d",n);
else
printf(",%d",n);
i++;
}
while((c=getchar())!='\n');
}

