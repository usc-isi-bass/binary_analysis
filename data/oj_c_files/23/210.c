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
char a[1000][10];
int j,m=0,i,l;
while(scanf("%s",a[m])!=EOF)
m++;
for(i=m-1;i>0;i--)
{
l=strlen(a[i]);
for(j=0;j<l;j++)
printf("%c",a[i][j]);
printf(" ");
}
l=strlen(a[0]);
for(j=0;j<l;j++)
printf("%c",a[0][j]);
}