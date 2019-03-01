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
	int n, i, m, b;
	scanf("%d", &n);
	int a[2*n+2];
	for(i=1; i<=2*n; i++)
		scanf("%d", &a[i]);
	m=0;
	b=0;
	for(i=1;i<=2*n;i=i+2)
	{
		if(a[i]>=90 && a[i]<=140 && a[i+1]>=60 && a[i+1]<=90)
		{
			m=m+1;
			if(m>b)
				b=m;
		}	
		else
			m=0;
	}
	printf("%d", b);

	return 0;
	
}