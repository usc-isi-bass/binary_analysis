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
	int n, i, j, m, k, l, h;
	scanf("%d", &n);
	i=(int)n/100;
	j=(int)(n-100*i)/50;
	m=(int)(n-100*i-50*j)/20;
	l=(int)(n-100*i-50*j-20*m)/10;
	k=(int)(n-100*i-50*j-20*m-10*l)/5;
	h=n-100*i-50*j-20*m-10*l-5*k;
	printf("%d\n%d\n%d\n%d\n%d\n%d", i, j, m, l, k, h);
	return 0;
}
		