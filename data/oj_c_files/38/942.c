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
	int k, n, i, j;
	double x[100], s, a, q=0, A=0;
	scanf("%d", &k);
	for(i=0; i<k; i++){
		A = 0;
		scanf("%d", &n);
		for(j=0; j<n; j++){
			scanf("%lf", &x[j]);
		}
		for(j=0; j<n; j++){
			A = A + x[j];
		}
		a = (double)A / n;
		q = 0;
		for(j=0; j<n; j++){
			q = q + (x[j]-a)*(x[j]-a);
		}
		s = sqrt(q/n);
		printf("%.5lf\n", s);
	}
	return 0;
}