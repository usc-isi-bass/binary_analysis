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
int i,n,a[100],b[100];
scanf("%d",&n);
for(i=0;i<n;i++)
{
   scanf("%d",&a[i]);
   b[i]=a[i];
}
for(i=0;i<n;i++)
{
   a[i]=b[n-i-1];
}
printf("%d",a[0]);
for(i=1;i<n;i++)
   printf(" %d",a[i]);

return 0;
}

