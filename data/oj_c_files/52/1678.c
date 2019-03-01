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
	int a[100];
	int *p, n, m;

	p = &a[0];

	scanf("%d %d", &n, &m);

	for( p = &a[0];p <= a + n - 1;p ++)
	{
		scanf("%d", p);
	}

	p = a + n - m;
	while(1)
	{

		printf("%d", *p);
		p ++;
		//printf("[%g]", p);
		if(p != a + n -m) printf(" ");
		if(p > a + n - 1) p -= n;
		if(p == a + n - m) break;
	}
}
