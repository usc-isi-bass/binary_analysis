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
int j,m,n,p,q,flagp,flagq ;
scanf("%d",&m) ;
for(n=6;n<=m;n=n+2)
{
p = 1 ;
do {
p = p + 1 ;
q = n - p ;
flagp = 1 ;
for(j=2;j<=(int)(floor(sqrt((double)(p))));j++)
{
if ((p%j)==0)
{
flagp = 0 ;
break ;
}
}
flagq= 1 ;
for (j=2;j<=(int)(floor(sqrt((double)(q))));j++)
{
if ((q%j)==0)
{
flagq = 0 ;
break ;
}
}
} while (flagp*flagq==0);
printf("%d=%d+%d\n",n,p,q) ;
}
}