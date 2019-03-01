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

/* Note:Your choice is C IDE */
void main()
{
int n,k,m,a,b;
scanf("%d %d",&n,&k);
for(a=n+k;a>0;a++)
{
   m=a;
   for(b=1;(m-k)%n==0&&b<=n;b++)
   {m=m-(m-k)/n-k;}
   if(b==n+1&&m>0) break;
}  
printf("%d",a);
}
