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
	int n,i,j,a[301];
	scanf("%d",&n);
	for (i=1;i<=n;i++)
		scanf("%d",&a[i]);
	for (i=1;i<=n-1;i++)
		for (j=i+1;j<=n;j++)
			if (a[j]!=0)
				if (a[j]==a[i]) a[j]=0;
	printf("%d",a[1]);
	for (i=2;i<=n;i++)
		if (a[i] != 0) printf(",%d",a[i]);
}