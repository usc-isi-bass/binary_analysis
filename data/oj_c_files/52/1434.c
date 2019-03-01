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
   int m,n,i,t,a[200];
   scanf("%d %d",&n,&m);
   for(i=1;i<=n;i++)
   scanf("%d",&a[i]);
   for(i=n+1;i<=n+n;i++)
   a[i]=a[i-n];
   for(i=n-m+1;i<=(n+n-m-1);i++)
   printf("%d ",a[i]);
   printf("%d",a[n+n-m]);
}
   
