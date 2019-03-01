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
char c[10],b[10];
int i,j,n,k,m;
scanf("%s %s",c,b);
n=strlen(c);
m=strlen(b);
if(m==n)
{
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(c[i]!=' '&&b[j]!=' ')
{
if(c[i]==b[j])
c[i]=b[j]=' ';
}
}
}
for(i=0;i<n;i++)
{
if(c[i]!=' '||b[i]!=' ')
{
printf("NO");
break;
}
}
if(i==n)
printf("YES");
}
else
printf("NO");
}