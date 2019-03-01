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
char a[20][20];
int i=0,j;
while(scanf("%s",a[i])!=EOF)
i++;
printf("%s",a[i-1]);
for(j=i-2;j>=0;j--)
printf(" %s",a[j]);





}