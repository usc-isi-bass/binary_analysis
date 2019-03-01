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
	int n,f[21],a[21],i;
	scanf("%d",&n);
	for (i=1;i<=n;i++) 
		scanf("%d",&a[i]);
	f[1]=1;
	f[2]=1;
	for (i=3;i<=20;i++)
		f[i]=f[i-1]+f[i-2];
	for (i=1;i<=n;i++)
		printf("%d\n",f[a[i]]);
	return 0;
}