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
{int a[100],i,max,min,n;
char c;
for(i=0;;i++)
{scanf("%d%c",&a[i],&c);
if(c=='\n')
break;
}
for(n=0,max=0;n<=i;n++)
if(a[n]>=max)
max=a[n];
for(n=0,min=0;n<=i;n++)
if(a[n]>=min&&a[n]<max)
min=a[n];
if(min==0)
printf("No");
else
printf("%d",min);
   return 0;
}
