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
int n,i,a[100],k;
scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(k=0;k<n;k++)
{
printf("%d",a[n-1-k]);
if(k!=n-1)
{printf(" ");
}
}
return 0;
}