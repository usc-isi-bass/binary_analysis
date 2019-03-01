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
{int n,a[300],i,j,flag=1;
scanf("%d",&n);
for(i=1;i<n;i++)
scanf("%d ",&a[i]);
scanf("%d",&a[n]);
printf("%d",a[1]);
for(i=2;i<=n;i++)
{for(j=1;j<i;j++)
if(a[j]==a[i])flag=0;
if(flag==1)printf(",%d",a[i]);
flag=1;}
}