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
	int a[2][100];
	int n,i,max1,max2,m=0,p=0;
	scanf("%d", &n);
	for (i=0; i < n; i++)
	{
		scanf("%d",&a[0][i]);
		scanf("%d",&a[1][i]);
	}
	for (i=0; i < n; i++)
	{
		if(a[0][i] >= 90 && a[0][i] <= 140
			&& a[1][i] >= 60 && a[1][i] <= 90)
		{
			p++;
		}
		else
		{
			if(p > m)
				m=p;
			p=0;
		}
	}
	if(p > m)
		m=p;
	printf("%d",m);

}