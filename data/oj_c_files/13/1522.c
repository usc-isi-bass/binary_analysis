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
{int i,j,a[20000],n;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("%d",a[0]);
for(i=1;i<n;i++)
{for(j=0;j<i;)
{if(a[i]==a[j]) j=i+1;
else j++;
if(j==i) printf(" %d",a[i]);}}}