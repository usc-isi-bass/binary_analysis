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
char c[501];
int a,i,j,m,n;
gets(c);
n=strlen(c);
for(m=2;m<=n;m++)
{
for(i=0;i<=n-m;i++)
{
a=0;
for(j=i;j<m+i;j++)
{
if(c[j]!=c[m+i-j+i-1])
{a=1;break;}
}
if(a==0)
{
for(j=i;j<m+i;j++)
printf("%c",c[j]);
printf("\n");
}
}
}
return 0;
}
