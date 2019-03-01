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
	int a[5],n,i;
	scanf("%d",&n);
	for (i=1;i<=5;i++)
	{	a[i]=n%10;
	  n=(n-a[i])/10;
	}
for (i=1;i<=5;i++)
if (a[i]!=0) printf("%d",a[i]);
}
