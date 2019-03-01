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

int a[110];
int main()
{
 int n,i;
 scanf("%d",&n);
 for(i = 1;i <= n;i ++)
   scanf("%d",&a[n-i]);
 for(i = 0;i < n - 1;i ++)
   printf("%d ",a[i]);
 printf("%d",a[n-1]);

return 0;
}