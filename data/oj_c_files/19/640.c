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
char a[101][101]={0},b[101],c[101];
int i,j;
for(j=0;;j++)
{
scanf("%s",a[j]);

if(getchar()=='\n') break;
}
gets(b);
gets(c);
for(i=0;i<101;i++)
{
if(strcmp(a[i],b)==0) strcpy(a[i],c);
}
printf("%s",a[0]);
for(i=1;i<=j;i++)
{
printf(" %s",a[i]);
}
return 0;
}