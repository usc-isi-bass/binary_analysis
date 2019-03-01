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
  int n,a[20000],i,j,m;
  scanf("%d",&n);
  for (i=0;i<=n-1;i++)
 scanf("%d",&a[i]);
for (i=0;i<=n-1;i++)
   for (j=i+1;j<=n-1;j++)
      if (a[i]==a[j]) { for (m=j;m<n;m++)   a[m]=a[m+1]; j=j-1;n=n-1;}
for (i=0;i<n-1;i++)
printf("%d ",a[i]);
printf("%d",a[n-1]);
}