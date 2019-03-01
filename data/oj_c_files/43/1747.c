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

main ()
{
int i,j,k,m,n,p;
scanf("%d",&m);
n=m/2;
for (i=1;i<=n;i++)
{
p=m-i;
for (j=2;j<=i;j++)
if (i%j==0) break;
for (k=2;k<=p;k++)
if (p%k==0) break;
if (j==i&&k==p)
printf("%d %d\n",i,p);
}
}
