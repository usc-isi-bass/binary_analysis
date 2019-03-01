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
int n,i,j,k;
scanf("%d\n",&n);
int c[n];
scanf("%d",&c[1]);
printf("%d",c[1]);
for(i=2;i<=n;i++)
{
scanf("%d",&c[i]);
for(j=1;j<=i-1;j++)
{
if(c[j]==c[i]) break;
}
if(j==i) printf(" %d",c[i]);
}
return 0;
}