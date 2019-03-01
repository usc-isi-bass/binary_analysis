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
	int a[300],n=1,i,m=0,ci=-1;
	scanf("%d",&a[0]);
	while (getchar()==',') scanf("%d",&a[n++]);
	for (i=0;i<n;i++)
		if (m<a[i]) m=a[i];
	for (i=0;i<n;i++)
		if (a[i]!=m)
			if (a[i]>ci) ci=a[i];
	if (ci==-1) printf("No\n");
	else printf("%d\n",ci);
}