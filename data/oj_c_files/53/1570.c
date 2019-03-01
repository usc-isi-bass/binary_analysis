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

main()
{
int n,a[1000]={0},i,m,t,b[1000];
scanf("%d",&n);

t=1;
for (i=1;i<=n;i++)
 {scanf("%d",&m);
  if (a[m]!=1) {b[t]=m;t++;a[m]=1;}
 }
for (i=1;i<t-1;i++)
printf("%d,",b[i]);
 printf("%d",b[t-1]);
}
