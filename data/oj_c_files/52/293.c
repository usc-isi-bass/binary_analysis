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
int i,n,m,a[100],*p;
scanf("%d%d",&n,&m);
for(i=0;i<n;i++)
scanf("%d",&a[i]);


for(p=a+m+n;p>=a+m;p--)
*p=*(p-m);

for(p=a+m-1;p>=a;p--)
*p=*(p+n);

for(i=0;i<n-1;i++)
printf("%d ",a[i]);
printf("%d",a[n-1]);
}